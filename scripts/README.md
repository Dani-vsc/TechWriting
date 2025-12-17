Generate wrappers
=================

This folder contains `generate-wrappers.ps1`, a small utility that:

- Scans the workspace for `*.c` files.
- Creates a `<basename>.bat` in the workspace root for each `.c` found.
- Each generated `.bat` compiles the paired `.c` to the corresponding `.exe` and runs it.

Usage:

```powershell
powershell -NoProfile -ExecutionPolicy Bypass -File .\scripts\generate-wrappers.ps1
```

The generator uses `C:\msys64\ucrt64\bin\gcc.exe` by default. Edit the `generate-wrappers.ps1` script to change the compiler path if needed.
