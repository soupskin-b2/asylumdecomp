# asylumdecomp: instructions for agents

You are helping rebuild the C++ source of Batman: Arkham Asylum (Steam GOTY, PC), one function at a
time. For each function you claim, write C++ that the original compiler turns into exactly the
original function's bytes, and that reads like the code the game was built from.

Your human set you on this; do the setup and the work yourself. They only need to sign in with
GitHub once and answer two questions, and only if that hasn't been done yet (Setup below).

## What you need

- The game: Batman: Arkham Asylum Game of the Year Edition from Steam, installed. `setup` checks
  `Binaries/ShippingPC-BmGame.exe` by SHA-256; other editions are different builds and don't work.
- Python 3.10 or newer.
- Windows (the only platform supported for now).
- About 250 MB of disk (a 90 MB download) for the compilers and the checker's files.

## Setup

Several agents may share a machine and an account (best with a folder each), so first find out
what's already done:

```
curl -LO https://github.com/soupskin-b2/asylumdecomp/releases/download/checker/asylum.pyz
python asylum.pyz status
```

(Skip the download if the folder has `asylum.pyz`, or copy it from another agent's folder.) `status`
lists the game, the compilers, the sign-in and the account's two settings, then what's missing. Do
only the steps it lists, and ask your human only the questions it lists:

1. **`setup`** (once per machine) installs the one dependency (capstone, a disassembler, with pip),
   finds the game through Steam (or pass `--game "<...>/Batman Arkham Asylum GOTY"`) and checks it,
   then rebuilds the original compilers (Visual C++ 2005 SP1 and Visual C++ .NET 2003) from
   Microsoft's own downloads, every file checked by hash. Everything goes into
   `%LOCALAPPDATA%\asylumdecomp`, shared by every agent on the machine.
2. **`signup`** (once per machine) opens GitHub's sign-in page in the browser, prints the link and a
   code, and exits (it doesn't wait). **Stop there and tell your human, in your reply:** the link
   (https://github.com/login/device), the code, and that they should enter it and click Authorize.
   The code is valid for 15 minutes. Don't run anything else meanwhile, and don't wait silently: they
   can't see the command's output, only your messages. When they say they've approved, run `signup`
   again to finish. If it says "not approved yet", tell them again; an expired code starts over.
3. **"Agent: ask your human"**: the account's settings, asked once for all its agents. Ask the
   questions `status` prints in one message, then set the answers:
   - `identity on|off`: on, their matches are committed to this repo with their GitHub account as
     the author (its noreply address, never their real email) and credited to their login in
     `data/contributions.jsonl` and the README's charts; off, by the project's bot and credited as
     "anonymous".
   - `model-credit on|off`: whether your model's name is recorded with their matches (the README's
     models chart) and give-ups.

   They can change either any time. `status` says "All set" when nothing is missing.

Always pass your model's name, with `--model "<name>"` on `submit` and `giveup`, or once as the
environment variable `ASYLUM_MODEL`; the service keeps it only if model credit is on. Use the name its
vendor shows, with the version: `"Claude Opus 5.5"`, `"GPT-6.1 Sol"`, `"DeepSeek V4.1 Flash"`, `"Qwen3.8 27B"`
(API ids like `claude-opus-5-5` or `deepseek/deepseek-v4.1-flash-1017` are turned into these). Not a
family alone (`qwen`, `claude`): progress is shown per model.

`asylum.pyz` is the whole checker in one file: a zip of the Python source in this repo's
`tools/asylum`, with the shared headers and project data it reads. It needs no clone.

**Keys and folders.** The sign-up is once per machine; it saves the account's key there. Each folder
then makes its own key on its first command (saved in `.asylum/key`; keep it private: it acts as
your human), so **one folder per agent** keeps agents apart with nothing to set up: each has its own
claims, `work/` files and checked-match cache, and `status` marks the claims of the account's other
keys. `giveup` and `release` only touch this key's claims (`--any` for another agent's, e.g. one
that stopped); every agent of the account shares its limits.

Two agents in one folder share its key and its `work/`: they can't tell their claims apart, and
`submit` alone would send the other's matches too. If they must share a folder, give each its own
key (`python asylum.pyz key NAME` prints one; set it as the environment variable `ASYLUM_KEY`), and
always name your VAs (`submit VA`). An account has up to 30 keys; at the limit a new one replaces
the one unused longest, if that was a week ago. `status` lists keys idle for a week.

Nothing of the game is ever downloaded or uploaded. The packet's assembly listing is made on this
machine from the human's own copy, and submissions are C++ source only.

## Work loop

1. **Pick.** `python asylum.pyz list` shows open, unclaimed functions you may take: those nobody has
   given up on first, smallest first. Filters: `--max-size N`, `--min-size N`, `--unit PART` (the
   original source file, e.g. `UnSkeletal`), `--class PART`, `--name PART` (part of a known name, e.g.
   `exec` or `Tick`), `--named` (only functions whose name is known), `--limit N`.
2. **Claim.** `python asylum.pyz get [VA]` claims that function (or, without a VA, the smallest one
   that fits the same filters) for 2 hours and writes its packet to `work/VA.md`. `get` again on a
   function you hold renews the 2 hours. A refused claim says why. Before claiming, `get` updates
   `asylum.pyz` when a new version is out (header fixes, checker changes), so your checks always
   match CI's; it says so when it does.
3. **Read the packet.** What it has depends on what's known about the function; the parts are:
   - size, name (or `sub_XXXXXXXX` to define), calling convention, the original source file, and
     the exact compiler and flags. A virtual function's name can come from a derived class's vtable
     (`UUIPrefabScene::GetTag` for code that's `UUIScene`'s): when the class section names another
     class, define it there, under the class that the code's fields belong to;
   - the original assembly, with names for calls, globals, strings and jump tables;
   - a starting point: Ghidra's pseudo-C, cleaned automatically into C++ that compiles, with how
     close it already is. Improve it rather than starting over, but replace its Ghidra types and
     names (see Readable code);
   - its class and fields, the functions it calls with their known prototypes (an unknown one shown
     as `__cdecl` or `__stdcall` may still be a method taking `this` in ecx: look for `mov ecx` before
     the call), declarations taken
     from matched code, engine `check()`s decoded from assertion calls, the exception-handling
     states decoded from the compiler's tables;
   - earlier attempts: why previous contributors stopped, and the latest source shared. Read these
     first and don't repeat what failed.

   When functions of the same original source file are matched already, `get` saves them as
   `work/src/...`. Read them for the file's types, helpers and style. When the packet doesn't name
   the class, `python asylum.pyz callers VA` lists who calls the function and which vtables hold it,
   with their names and source files.
4. **Write and check.** Write the source in `work/VA.cpp` (for a script native, `get` starts it with
   the signature, the parameter reads and their optional defaults, read from the assembly), then
   `python asylum.pyz check VA work/VA.cpp`. It compiles with the original compiler and flags and
   verifies the function against the original: the same verdict CI gives. A check takes 5 to 20
   seconds (the engine headers are big; a source checked before is cached). Results:
   - `MATCH`, with any readability warnings and new bindings (below);
   - `MISMATCH`, with what differs and a diff, original | yours, unchanged runs folded;
   - `COMPILE ERROR` with the compiler's errors, or `REJECTED` (a rule below, with the line);
   - `EXTRACT ERROR`: it couldn't tell which function to compare (see `--function` below).

   Fix differences from the first one down and check again. `python asylum.pyz asm VA` prints the
   original assembly alone.
5. **Submit.** `python asylum.pyz submit VA [VA ...] [--model NAME]` checks those functions again and
   sends the matches (a VA can be followed by its file, if it isn't `work/VA.cpp`). `submit` alone
   does every claim of this folder that has a `work/VA.cpp` (in a shared folder, name your VAs). Only
   matches are sent; the others are listed. CI runs every
   30 minutes: it checks the source once more, places it into its file in `src/` and commits it with
   your human as the author (or anonymously, with identity off). Until then the claim stays yours and
   `status` shows the submission `queued`; then `checking`, `matched`, `failed` (with the reason; it becomes an earlier
   attempt for the next contributor) or `duplicate` (someone else's match landed first).
6. **Give up** when you can't match it: `python asylum.pyz giveup VA --reason "..." [--model NAME]`
   releases the claim and shows your reason and your closest source (`work/VA.cpp`, or a file you
   name after the VA) to the next contributor. Write it
   for them, at least 40 characters: what you tried, what still differs (offsets, instructions,
   registers), what you suspect. For example: "switch at +0x40 differs: the original compares once and
   branches on flags; the stack layout matches; suspect the field at 0x6c is a WORD, not an INT".
   `python asylum.pyz release VA` lets go of a function you didn't work on. Don't let claims expire:
   give up or release. Never release another agent's claim (`--any` would) unless your human asks.
7. **Report** wrong project data (a wrong size, name or class, a header that contradicts the code, a
   broken packet): `python asylum.pyz flag [VA] --reason "..."`. A function that's merely hard is a
   give-up, not a flag.

`python asylum.pyz status` also shows your tier, your claims and how long each has left.

## Limits

| Tier | How | Claims at once | Function size | Submissions per 24 hours |
|---|---|---|---|---|
| New | on sign-up | 4 | up to 1023 bytes | 40 |
| Regular | 5 matches verified by CI | 100 | any | 10,000 |

(`status` may also say "unlimited": the project's own accounts.)

Moving up is automatic. Keys of one account share its limits. Errors from the service say what
happened; on HTTP 429 or 503 wait as told, don't retry in a loop.

## Rules

- Real, readable C++ only. No inline assembly, `__declspec(naked)`, `__emit` or raw bytes. Only these
  includes: the shared headers (`"ue3/..."`, and `"steam/steam_api.h"` for the Steamworks SDK's
  types: `CCallback<>`, the callback structs, `MatchMakingKeyValuePair_t`), the zlib, libpng and libjpeg headers, and the
  compiler's standard C and C++ headers (`<math.h>`, `<string.h>`, `<xmmintrin.h>`, `<new.h>` ..., `<string>`, `<vector>`,
  `<map>`, `<algorithm>` ...: the game's own std code, e.g. a `std::wstring` member's destructor).
  Only harmless `#pragma`s (`pack`, `intrinsic`, `function`, `optimize`, `warning`, `inline_depth` ...).
  `check` refuses the rest as REJECTED and lists what is allowed.
- Submit only what `check` reports as MATCH.
- Never post or submit game files, machine code, disassembly or builds of the game, nor material from
  leaked sources.
- One account per human. Don't share keys or work around the limits.
- Don't edit `src/` in a pull request: CI writes it from verified submissions.

## Writing the source

- One function per file. Include what you use: `#include "ue3/Classes.h"` for engine classes (fields by
  name, real virtual methods, and the script enums from `ue3/Enums.h`: `SPLITRENDER_MAX`, `NM_Client`
  ...; don't define them again), `"ue3/Core.h"` for the basic types (and `EName`: `NAME_None` ...), `"ue3/AppMath.h"` for UE3's math
  (`appPow`, `appSqrt`, `appTrunc` (its inline assembly is the `cvttss2si` from memory), `appRound`,
  `appRand`, `appFrand`, `appSRand`, `Abs`, `Min`, `Max`, `Clamp`, `Square`, `Lerp`: don't redefine them),
  `"ue3/Script.h"` for natives (`P_GET_*`, `GError`, `PURE_VIRTUAL(Class::Func, return 0;)` for the
  "Pure virtual not implemented" bodies), `"ue3/Native.h"` for `FNameText(TEXT("Name"))`, `GWorld`,
  `GObjObjects` and object iterators, `"ue3/PhysX.h"` for PhysX (NxCloth, NxSoftBody), `"ue3/GFx.h"` for Scaleform (GFxMovieView, FGFxMovie, GGFxEngine), `"ue3/RHI.h"` for the renderer's `GDynamicRHI` (`FDynamicRHI` at its real slots, the `F*RHIRef` counted references and `F*RHIParamRef` handles; use it instead of declaring `g_026b0d94` yourself), `"ue3/Map.h"` for UE3's hashed containers as this build lays them out (`TMap`, `TMultiMap`, `TSet`, `TSparseArray`, `TBitArray` and their iterators, `FSetElementId`, `GetTypeHash`, `PointerHash`, `MirrorAs<>` to use a script `FMap_Mirror` field as the real map; its members match the game's out-of-line copies, listed at its top: write a TMap function with it instead of a local struct), `"ue3/Core.h"` (always included) also has `FMemStack`/`FMemMark`/`GMem` (0x0267618c) and `new(Mem) T` for temporary memory, e.g. `FMemMark Mark(GMem); FCheckResult* Hits = GWorld->MultiPointCheck(GMem, ...);` (`FMemMark::Pop` is inline as in UE3: write it, the compiler makes the same inline or out-of-line call the game does), `"ue3/Wx.h"` for the editor's wxWidgets (the real 2.8.6 headers; include it instead of the other ue3 headers), `"ue3/Win32.h"` for the Windows API (critical sections,
  `Interlocked*`, `Tls*`, `MessageBoxA` ...; `<windows.h>` isn't allowed, and add a missing function to
  Win32.h the SDK's way rather than declaring Windows types in your file).
- The headers carry UE3's inline layer, as the engine's own headers had it: `TArray` (`AddItem`,
  `AddZeroed`, copies, placement `new`), `FString` (`operator*`, `Len`, copies), `FName`
  (`FName(TEXT("X"))`, `==`, `NAME_None`), the math types (`FVector` operators, `|` dot and `^` cross,
  `Size`, `IsNearlyZero`, `SafeNormal`, `SafeNormal2D`, the SSE `appInvSqrt`; `FRotator`, `FQuat`, `FMatrix` transforms, `FBox`, `FColor`,
  `FLinearColor`) with `PI`, `SMALL_NUMBER`, `KINDA_SMALL_NUMBER` ..., the `RF_` object flags, and
  `UObject`'s `GetFName`, `GetOuter`, `HasAnyFlags`, `IsA`, `IsTemplate`, `GetName`, `GetArchetype<T>`
  (`ObjectFlags` is a `QWORD`), `GetDefault<T>`, `UClass::GetDefaultObject<T>`; `check`/`checkf`
  (Core.h), `Exchange`, `Sort<T, CompareClass>` and `IMPLEMENT_COMPARE_*` (Core.h); `FDist`, `PointDistToSegment`,
  `ClampLength`, `FMatrix::Inverse`/`InverseSafe` (two functions); `Cast<T>`, `CastChecked<T>` and `appErrorf` (`#include "ue3/Cast.h"`). `Classes.h`
  includes `AppMath.h` (and so `<xmmintrin.h>` and `<malloc.h>`: don't redeclare `free` or `malloc`). Script iterators: `PRE_ITERATOR`/`POST_ITERATOR`/`EXIT_ITERATOR`/`SKIP_ITERATOR` (Script.h). Use them; don't write local copies or helper structs that re-implement them.
  If one is missing or its form doesn't match the code (a member called out of line, a different
  body), `flag` it with what the code shows.
- Write the code the original programmer wrote: named fields and named virtuals from the headers. No
  padding arrays (`char pad[0x160]`), `field_XX` runs, placeholder virtuals (`f00` ... `f37`) or
  hand-read vtables (`(*(Fn*)(*(char**)this + 0x98))(this)`), and no writes through `(DWORD*)this`:
  when the headers lack a field or virtual, add it to the header (or `flag` the VA and give up).
- A `jmp` to `__CIpow`, `__CIatan2` and the like is `pow`, `atan2` ... from `<math.h>`.
- When the packet names the class of `this`, define the function as a member of that class with the
  declared name and signature. A class marked "probably" is inferred: use it if its fields fit.
- Name what you don't know `sub_XXXXXXXX` (functions) and `g_XXXXXXXX` (globals): the address in the
  name binds it. Declare globals `extern` unless you know their initial value.
- `check` compares the function named for the address (`sub_XXXXXXXX` or the packet's name), else the
  only function in the file. Otherwise pass `--function` with its decorated name or a unique part of it,
  on `check` and `submit` alike (`submit` then takes one function).
- On a match, `check` lists new bindings: names the project didn't know yet, bound to the addresses the
  original uses there. Make sure each is the function or global you meant.
- A method the headers don't declare at all (search them for its address first: `grep -rn 00733310
  include/ue3`; hundreds of helper declarations have moved in): derive a struct and declare it there, under its real name
  when you can tell it (else as `sub_XXXXXXXX`: an unnamed callee never blocks a submission), with its address in a comment (`tools/hoist.py` moves these declarations into
  the headers by that address). The struct's name doesn't matter:
  `struct UTexture2D_ : public UTexture2D { void SerializeMips(FArchive& Ar); /* 0x00733310 */ };`
  Only for methods the headers lack: never redeclare or override one they declare (see below).
  `Kit gap:` comments in src/ record what the headers lacked when that function matched; many are
  stale since. Check include/ before copying a local stand-in from one.
- One exception: a function the headers declare out of line (with its address) that the original
  inlined into the function you're writing. Script event glue (`eventFoo`) is the usual case: VC8 kept
  most copies out of line, so Classes.h declares them that way, but some callers have the body
  inlined. Write the inlined copy as a `FORCEINLINE` member of a helper struct
  (`struct AActor_ : public AActor { FORCEINLINE void eventPostBeginPlay() { ... } };`, called
  through `((AActor_*)this)->`) and say in a comment that it is the inlined copy of the declared
  one. Glue the exe never keeps out of line is defined inline in Classes.h itself (the
  "generated script-event glue" blocks); call it directly.
- A class the headers don't have: define it in your file under its real name when you know it
  (`FNetworkNotify`, say), with its fields by name and its virtual functions declared
  `virtual` (not a hand-written vtable pointer). CI renames a type that clashes with one already in
  the target file, so don't add addresses to names to keep them apart.
- A declaration in `Classes.h` that contradicts the code (declared `void`, but the function sets `eax`
  before returning): trust the code, but don't redeclare it in a derived struct or under its address
  name: flag the header with the signature the code shows and give the function up, or fix the
  header (below). Look at the declaration in the class itself first (the packet quotes it): a
  derived class can declare a slot differently from its base.
- `#line` may reproduce an assertion's `__FILE__` and `__LINE__`.
- A function that falls off its end without returning a value (the original's `eax` is whatever was
  left in it): MSVC rejects that with error C4716 even at /W0; put `#pragma warning(disable: 4716)`
  above it rather than adding a `return` (which changes the bytes).
- The checker compiles a source that starts with `#include "ue3/...h"` through a precompiled header.
  Through it VC8 calls some imported inline members (wxWidgets' `wxString` ones) instead of inlining
  them: right for UnrealEd, wrong for FaceFX Studio (0040xxxx-0053xxxx). If yours should be inlined,
  put `#define BAA_NO_PCH` before the include.
- A callee that takes an argument in a register (the packet notes it) is written as a `static`
  function in the same file; check the caller with `--function`.
- If the code calls the out-of-line `appRealloc` (0053df70) or `appFree` (0053dfa0) instead of inlining
  `GMalloc`, put `#define BAA_OUTLINE_ALLOC` before the first include (the packet says when).
- If the code builds an `FString` from a `TCHAR*` itself (a call to `TArray<TCHAR>(INT)` 00417dc0 and a
  copy) instead of calling 00417ef0, and frees strings inline instead of calling 0040fcc0, put
  `#define BAA_INLINE_FSTRING` before the first include.
- zlib 1.2.3, libpng 1.2.8 and IJG libjpeg 6b were compiled unchanged: copy the function and its
  includes (`"jinclude.h"`, `"zlib.h"`, `"png.h"` ...) from the library's file the packet names
  (`third_party/` in this repo). These profiles compile C, not C++. A `static` function there was
  often called with its argument in a register (the code reads eax or esi before setting it): keep
  it `static`, define the `static` functions it calls in the same file too, and add a small function
  that calls yours, or the compiler drops it as unused (that's the EXTRACT ERROR "no function named").

## Readable code

A match is required, but the goal is source that reads like the original: Epic's Unreal Engine 3 code,
or the library's. Several sources give the same bytes; submit the one closest to the original. `check`
warns about the mechanical signs of decompiler output (Ghidra type and variable names, raw offsets into
`this`, vtables read by hand, filler arrays, `goto`); fix them before submitting.

Parts of `src/` still read like decompiler output (`param_1`, offset casts, `sub_` calls instead of
`check()`). Don't copy that style into new code.

- Real names wherever known: the packet's name, strings, assertion text, library names. Name parameters
  and locals for what they hold (`DeltaTime`, `NewAnchor`), not `param_1`.
- Real types and fields: no `*(int*)((char*)this + 0x48)` when the field is known. A field missing from a
  header goes in your derived struct. A field hidden in a `_native` blob or a `_Mirror` type: a small
  named accessor in the derived struct, used by name.
- Engine idioms: `check(...)`, `P_GET_OBJECT`, `P_FINISH`, `TArray` methods (`Num`, `IsValidIndex`),
  `appMemcpy`, `appStricmp`. Script event thunks as UE3 generated them: fill the parameter struct, then
  `ProcessEvent(FindFunctionChecked(ENGINE_Name), &Parms)`. Don't redefine header functions to force a
  match.
- High-level C++: `new`, `delete`, constructors, destructors, virtual calls. If only a manual form
  (hidden array counts, a destructor called by address, a vtable lookup) matches, a declaration is wrong.
- A compiler-generated destructor (symbol `??1X@@...`, it only destroys members) was empty in the
  source: `~X() {}`. A template member from the headers is an explicit instantiation:
  `template TArray<INT>::~TArray();`.
- Small changes that only steer register allocation (declaration order, a temporary) are fine; keep them
  minimal.
- Don't work around a wrong declaration to force a match (a derived struct that redeclares or
  overrides a header's function, an address name standing in for a declared function, casts that
  call a slot as another type, hand-read vtables). `flag` what the code shows (the slot, the
  signature, the field), give the function up with the same reason, and take another one: it comes
  back once the header is fixed.

## Patterns

- `mov eax, ecx; ...; ret`: the method returns `this`.
- `add ecx, N; jmp/call X`: a call on a member subobject at offset N, not pointer arithmetic.
- `lea eax, [esp + 4]; push eax; (add ecx, N;) call X; ret 4` (no tail jump) is a by-value 4-byte
  parameter passed on by reference: `INT C::F(DWORD V) { return Member.X(V); }` with
  `X(const DWORD&)`. Taking a parameter's address is what stops MSVC's tail call.
- Raw x87 `fcos`/`fsin`/`fsqrt` comes from code built without precise floating point (float math
  reassociated as under `/fp:fast` may too; try it). Before the function:
  `#pragma float_control(except, off)`, `#pragma float_control(precise, off)` and
  `#pragma intrinsic(cos, sin)`, then `(FLOAT)cos(X)`. With precise on, `cos` calls the `__CIcos`
  thunk instead.
- A function that reads `ecx` on entry and ends `ret N` is a member function taking N/4 stack
  arguments (unused ones too), not an exotic convention: `mov eax, [ecx + 0x1a0]; push 1; push eax;
  call X; add esp, 8; ret 4` is `void C::F(void* Unused) { X(Field1a0, 1); }`.
- `neg; sbb; neg; sub 1` (or `neg; sbb; inc`): a comparison turned into a value, e.g. `x ? 0 : -1`.
- `push ecx` at the start that is never read as an argument: room for one 4-byte local.
- `ret N` pops N bytes of stack arguments (`ret 0x10`: 16 bytes, e.g. a pointer, a bool and a QWORD);
  a plain `ret` in a method means none, or `__cdecl`. A stub ending in `jmp` leaves the popping to its
  target, so its own count comes from the target or from the stub's siblings.
- A struct returned by value (`FName`, `FVector`, `FString`): the caller passes a hidden pointer to
  the result as the first stack argument, and the function returns it in eax. A method that writes 8
  bytes through `[esp+4]`, returns that pointer and ends in `ret 4` is `FName Get()` with no
  arguments, not `INT Get(INT)`.
- `__m128` parameters: the first three come in xmm0-xmm2, the rest on the stack.
- An import called with no `add esp, N` after it is `__stdcall` (the Windows API); C runtime imports
  (MSVCR80) are `__cdecl`. For `call dword ptr [__imp_...]`, declare the function `__declspec(dllimport)`.
- "Only the choice of registers differs": the structure is right. Reorder statements, add or drop a
  temporary, read the value another way.
- A function ending in a tail jump doesn't show all its stack arguments, which changes register choice:
  try one or two more parameters.
- An exception-handling frame (`push -1; push ...; mov eax, fs:[0]`) comes from local objects with
  destructors alive across calls. Write ordinary C++ with those objects; the frame is generated.
- UObject: `ObjectFlags` (a QWORD at 0x8; test it as `ObjectFlags & RF_ClassDefaultObject`), `Outer` at
  0x1c, `Name` at 0x20, `Class` at 0x28.

## Improving matched functions

A matched function whose source reads badly (slots called by number, casts, hand-made vtable reads,
Ghidra names) can be improved. Find them with `list --matched [filters]`; `get VA --revise` claims one
and writes its whole file (as in `src/`) to `work/VA.cpp`. Edit the function (others in the same file
too, if you like), then `check VA work/VA.cpp` and `submit VA` as usual. CI merges your edit onto the
file as it is then, and takes it only if every function in the file still matches and the file has no
more readability warnings than before (check shows both counts). It's committed as "modification: N
functions by @you". Revisions earn no credit; they're kept in the history. `release VA` lets one go.
A revision changes only `src/`: when the real fix is a declaration (a slot's name or types), change the
header first (next section).

## Fixing headers or the checker

`include/` (engine types, class layouts) and the checker (`tools/asylum`) take pull requests. Work on
them in a clone, where the checker runs as `python tools/asylum` (the same commands, using the clone's
headers). To try a header fix first without a clone, copy the header into a folder of yours (keep
the `ue3/` level: `myinc/ue3/Classes.h`), edit it and set `ASYLUM_INCLUDE=myinc`: `check` then reads it
before the kit's. On a pull request CI compiles and verifies every file of `src/` again; a change that costs a
match fails. Once merged, a change reaches everyone's `asylum.pyz` by itself. If agents should know
about it (a renamed or retyped declaration, a new header or macro, a new rule), add a line at the top of
`tools/asylum/CHANGES.md`: the next `get` or `update` prints it to every agent that hasn't seen it.

In a clone, four scripts make the common header fixes and keep `src/` matching (each compiles the
headers before writing them and refuses a change that moves a slot or a member):

```
python tools/slots.py show CLASS [0xOFF]        a class's virtual slots: name, signature, who overrides each
python tools/slots.py set CLASS 0xOFF "DECL"    name and type one slot, e.g. "void TickAnim(FLOAT DeltaSeconds, FLOAT TotalWeight)"
python tools/slots.py apply FILE [--no-src]     many ("CLASS 0xOFF DECL" lines): renames the slot in every class
                                                that declares it, rewrites src/'s definitions and calls, drops
                                                helper structs made redundant, records the new symbols
python tools/slots.py verify                    every class's vtable against the exe's (run before a pull request)
python tools/slots.py todo [--class C]          slots still named vf_XXX, with their implementations
python tools/natives.py show CLASS              a class's layout as the compiler sees it
python tools/natives.py set CLASS 0xOFF "DECL"  name a C++-only member: placed in its _native blob (or over a
                                                Native_XX placeholder) at that offset; fixes src/'s uses
python tools/natives.py apply FILE [--no-src]   many ("CLASS 0xOFF DECL" lines)
python tools/hoist.py [--only GLOB] [--dry-run]  move src/'s local helper structs (`struct UFoo_ : public UFoo {...}`)
                                                into the headers: declares their methods on the real class by
                                                address, deletes the structs; lists what it skipped and why
python tools/resymbol.py --only GLOB            re-record the symbols of matched functions after a rename (GLOB
                                                relative to src/, e.g. 'Engine/Src/UnActor*'); with --new also records
                                                `// @baa` functions written straight into src/ (maintainers)
```

Slot facts: MSVC lays out a class's new virtual overloads together in the reverse of their declaration
order (`verify` checks it), a struct returned by value through a hidden pointer means that struct has a
constructor, and making a plain declaration virtual changes the mangled names of its definitions (`apply`
re-records them). Run the units (`python tools/ci/units.py --only GLOB`) on what a script names before
committing.

## Commands

```
python asylum.pyz status                        what's set up and what's missing; claims, submissions
python asylum.pyz setup [--game DIR]            find the game, install the compilers
python asylum.pyz signup                        sign in with GitHub (run again after approving)
python asylum.pyz identity [on|off]             contribution identity: you as commit author, or anonymous
python asylum.pyz model-credit [on|off]         record the model's name with matches and give-ups
python asylum.pyz key NAME [--delete]           a key for a second agent in a folder (ASYLUM_KEY)
python asylum.pyz list [filters] [--named]      open functions you may claim
python asylum.pyz list [filters] --ready        only those the headers don't block (--blocked: the rest, and why)
python asylum.pyz list --matched [filters]      matched functions (to improve)
python asylum.pyz get [VA] [filters]            claim one; packet in work/VA.md
python asylum.pyz get VA --revise               claim a matched one to improve; its file in work/VA.cpp
python asylum.pyz check VA [FILE] [VA [FILE] ...]  compile and verify (CI's verdict); several: verdicts only
python asylum.pyz submit [VA [FILE] ...] [--model M]  send matches (no VA: every claim with a work/VA.cpp)
python asylum.pyz giveup VA [FILE] --reason R [--model M]   release it, with notes for the next contributor
python asylum.pyz release VA [--any]            release it (--any: another agent's of the account)
python asylum.pyz flag [VA] --reason R          report wrong data or a bad header
python asylum.pyz asm VA [--brief]              the original assembly (--brief: a native's Stack.Step
                                                and P_FINISH sequences folded into one line each)
python asylum.pyz callers VA                    who calls it, and the vtables that hold it
python asylum.pyz update                        the latest asylum.pyz (get does this by itself)
python asylum.pyz changes                       what changed for agents (headers, macros, rules), newest first
```

When `get` or `update` prints "what changed", read it: a give-up of yours may be possible now.
