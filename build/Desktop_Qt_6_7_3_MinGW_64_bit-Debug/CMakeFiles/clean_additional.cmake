# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\QTinQT_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\QTinQT_autogen.dir\\ParseCache.txt"
  "QTinQT_autogen"
  )
endif()
