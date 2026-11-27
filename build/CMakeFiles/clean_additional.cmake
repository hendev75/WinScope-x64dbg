# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Release")
  file(REMOVE_RECURSE
  "C:\\Users\\fam60\\Desktop\\x64dbg-2026.05.27\\bin\\x64\\.deps_copied"
  "C:\\Users\\fam60\\Desktop\\x64dbg-2026.05.27\\bin\\x64\\.deps_hash"
  "CMakeFiles\\gui_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\gui_autogen.dir\\ParseCache.txt"
  "gui_autogen"
  )
endif()
