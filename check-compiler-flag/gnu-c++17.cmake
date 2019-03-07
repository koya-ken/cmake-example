include(CheckCXXCompilerFlag)

CHECK_CXX_COMPILER_FLAG(-std=gnu++1z COMPILER_SUPPORTS_GNU_CXX1Z)
if(COMPILER_SUPPORTS_GNU_CXX1Z)
  set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=gnu++1z")
else()
  message(STATUS "The compiler ${CMAKE_CXX_COMPILER} has no GNU C++17 support. Please use a different C++ compiler.")
endif()