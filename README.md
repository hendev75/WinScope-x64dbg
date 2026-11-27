<p align="center"><img src="assets/winscope.svg" width="128" alt="WinScope"/></p>

<h1 align="center">WinScope</h1>
<h4 align="center">x64dbg 2026.05.27, rebranded end-to-end, with a native MCP server built in.</h4>

<p align="center">
  <img src="https://img.shields.io/badge/platform-Windows%20x64%20%2F%20x86-blue" alt="Platform"/>
  <img src="https://img.shields.io/badge/debugger-x64dbg%202026.05.27-lightgrey" alt="Base"/>
  <img src="https://img.shields.io/badge/MCP-84%20tools-purple" alt="MCP"/>
  <img src="https://img.shields.io/badge/license-GPLv3-green" alt="License"/>
</p>

WinScope is a Windows binary debugger for x86/x64 built from the x64dbg 2026.05.27 snapshot. Every user-facing and on-disk identifier is rebranded — process, modules, window, strings, config, database and plugin extensions — and the build ships with **WinScope Services**, a native [MCP](https://modelcontextprotocol.io/) server embedded as a plugin. Any MCP-capable agent can drive the debugger directly: disassembly, stepping, breakpoints, memory, registers, modules, threads, stack, pattern scanning, PE analysis, dumping and tracing.

## Download

Grab the prebuilt tree: [`release/WinScope-x64.zip`](release/WinScope-x64.zip)

Extract anywhere your user has write access and run `WinScope.exe` (or `WinScopeGui`/`WinScope` from the x32 tree for 32-bit targets).

## What changed vs. stock x64dbg

| Component | x64dbg | WinScope |
| --- | --- | --- |
| Main executable | `x64dbg.exe` | `WinScope.exe` |
| Core module | `x64dbg.dll` | `WinScope.dll` |
| GUI module | `x64dbg.dll` (GUI build) | `WinScopeGui.dll` |
| Bridge | `x64dbgBridge.dll` | `WinScopeBridge.dll` |
| Config | `x64dbg.ini` | `WinScope.ini` |
| Database | `.dd64` / `.dd32` | `.ws64` / `.ws32` |
| Plugin extension | `.dp64` / `.dp32` | `.wsp64` / `.wsp32` |
| Launcher / shell ext | "Debug with x64dbg" | "Debug with WinScope" |
| PE version info | x64dbg | `ProductName=WinScope` |
| MCP server | — | WinScope Services (84 tools, 9094/9095) |

## How the stealth works

This is **fingerprint-level stealth, not kernel magic**. The goal is simple: nothing in the running image or on disk looks like x64dbg to name/string/signature matching.

- Process name, loaded module names (`WinScope.exe`, `WinScope.dll`, `WinScopeGui.dll`, `WinScopeBridge.dll`) contain no `x64dbg` token.
- Window class/title, About box, log output, tooltips, translations and the launcher are all branded WinScope.
- Config, database and plugin extensions are renamed (`.ws64`, `.wsp64`), so scanners keyed to `.dd64`/`.dp64` files see nothing.
- PE version metadata (`ProductName`, `FileDescription`) is WinScope.
- The shipped `WinScope.ini` sets `NoForegroundWindow=1`, so launching it doesn't steal focus from whatever is in front.
- The debuggee itself is untouched: no injected hooks, no kernel driver, no PEB patching beyond what the debugger normally does.

**Limits:** rebranding defeats name/string/extension fingerprinting. It does not defeat behavioral detection — `IsDebuggerPresent`, `NtQueryInformationProcess`, timing checks, debug-object enumeration or kernel-mode anti-cheat still see a debugger if they look for one. For that you pair it with an anti-anti-debug plugin, same as any x64dbg build.

## MCP quick start

WinScope Services starts with the debugger. Defaults:

- x64: `http://127.0.0.1:9094/`
- x32: `http://127.0.0.1:9095/`
- Auth token: auto-generated in `winscope_services.json` (`AuthToken`) next to the executable; required as a Bearer token on every request.

```json
{
  "mcpServers": {
    "winscope": {
      "type": "http",
      "url": "http://127.0.0.1:9094/",
      "headers": {
        "Authorization": "Bearer <AuthToken from winscope_services.json>"
      }
    }
  }
}
```

The plugin exposes 84 tools across disassembly, stepping, breakpoints (software/hardware/memory/DLL/exception), memory read/write/alloc/protect, registers, modules, threads, call stack, handles, PEB/SEH, pattern scanning, string extraction, xrefs, symbols, bookmarks, PE analysis, OEP detection, dumping, tracing and a 64-entry event ring buffer. Both Streamable HTTP and SSE transports are supported (MCP 2024-11-05, JSON-RPC 2.0).

## Build

The tree is the full x64dbg source plus `src/third_party/WinScopeServices` (Zig). Building follows upstream: CMake + Qt 5.12 + MSVC for the debugger, `zig build` for the MCP plugin. A complete build tree is already included under `build/`, and the prebuilt output is under `release/WinScope-x64/`.

## Credits

- Debugger core and GUI: [x64dbg](https://github.com/x64dbg/x64dbg) (GPLv3), TitanEngine, Zydis, XEDParse, asmjit, Scylla, Jansson, lz4.
- MCP server: [x64dbg-mcp-server](https://github.com/duty1g/x64dbg-mcp-server) by duty1g (MIT), integrated as WinScope Services.
- Rebrand and build: WinScope.

## License

The debugger is GPLv3 — see [`LICENSE`](LICENSE). The MCP plugin keeps its MIT license — see [`x64dbg-mcp-server-main/LICENSE`](x64dbg-mcp-server-main/LICENSE). Full corresponding source is included in this repository.
