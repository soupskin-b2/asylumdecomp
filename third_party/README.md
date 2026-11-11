# third_party

Original sources of the libraries linked into the game, as published by their authors. The game
compiled them unchanged: every function listed for them in `src/units.json` (kind `library`)
compiles from these files, with the profile named there, to the original's bytes
(`python -m baa units check --only zlib-1.2.3`, ...). Nothing here is from the game.

| Directory | Library | Version | Origin | Licence |
|---|---|---|---|---|
| `zlib-1.2.3/` | zlib | 1.2.3 (18 Jul 2005) | zlib.net / github.com/madler/zlib tag v1.2.3 | zlib licence (see `README` and `zlib.h`) |
| `libpng-1.2.8/` | libpng | 1.2.8 (3 Dec 2004) | libpng.sourceforge.net | libpng licence (see `LICENSE`, `png.h`) |
| `jpeg-6b/` | IJG libjpeg | 6b (27 Mar 1998) | ijg.org (`jpegsrc.v6b.tar.gz`) | IJG licence (see `README`, LEGAL ISSUES; the README is the release's own, taken from libjpeg-turbo 1.0.0's copy of it) |

Only the `.c`/`.h` files and the licence/readme files are kept (no build scripts, test images or
documentation). libpng is compiled with `/I third_party/zlib-1.2.3`. `jpeg-6b/jconfig.h` is the
library's `jconfig.vc` (the configuration for Microsoft Visual C++).

Profiles (config/toolchain.json): zlib and libpng use `lib_c71` (Visual C++ .NET 2003,
cl 13.10.3077, an older compiler than the engine's, so most likely linked as prebuilt libraries); libjpeg uses `libjpeg` (the game's own Visual C++ 2005 SP1 with
`/Ob1`: it was compiled with the engine).
