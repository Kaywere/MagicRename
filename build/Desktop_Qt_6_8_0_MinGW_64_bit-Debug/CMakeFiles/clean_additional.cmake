# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\MagicRename_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\MagicRename_autogen.dir\\ParseCache.txt"
  "MagicRename_autogen"
  )
endif()
