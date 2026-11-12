// RGenericBrowserType_FMODReverb.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

// 0148c1d0 (25 bytes) — a virtual slot shared (linker-merged) by the vtables of
// URGenericBrowserType_FMODReverb / _FMODSound / _MixBin and
// UScriptDataBaseCommandlet.  It sits 4 bytes past its container object
// (the `add ecx, -4` before the call is the this-adjustment back to the
// container), so the receiver it acts on is the subobject at -4, not `this`.
//
//   void TaskStep::Connect(BOOL bConnect)
//   {
//   	Parent.Refresh();              // sub_0148a920: task-browser state update
//   	if (GTaskDatabase != NULL)
//   		sub_01483150();             // hand a fresh request to the database
//   }
extern "C" {
	// Task-browser state update: __thiscall, void, plain ret, reads ecx.
	void sub_0148a920();
	// Task-database handoff: __cdecl, void.
	void sub_01483150();
}

// Registered task database (NULL when none).
extern INT g_026dd580;
namespace detail_0148c1d0 {
	// The container whose state we refresh.
	struct Container { void sub_0148a920(); };
}

namespace { using detail_0148c1d0::Container; }

struct TaskStep_0148c1d0
{
	// Refresh the container, then notify the database if one is live.
	void sub_0148c1d0(INT bConnect)
	{
		// The receiver is 4 bytes below `this` — this object is a tail subobject.
		((Container*)((char*)this - 4))->sub_0148a920();
		if (g_026dd580 != NULL)
			sub_01483150();
	}
};

// @baa 0x0148c1d0
// Keep the definition alive: the vtable that holds this slot is not in the
// shared headers, so no visible pointer reference would otherwise survive.
void Use_0148c1d0(TaskStep_0148c1d0& Step, INT bConnect)
{
	Step.sub_0148c1d0(bConnect);
}
