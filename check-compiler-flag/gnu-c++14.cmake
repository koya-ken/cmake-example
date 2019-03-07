include(CheckCXXCompilerFlag)

CHECK_CXX_COMPILER_FLAG(-std=gnu++14 COMPILER_SUPPORTS_GNU_CXX14)
CHECK_CXX_COMPILER_FLAG(-std=gnu++1y COMPILER_SUPPORTS_GNU_CXX1Y)
if(COMPILER_SUPPORTS_GNU_CXX14)
  set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=gnu++14")
elseif(COMPILER_SUPPORTS_GNU_CXX1Y)
  set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=gnu++1y")
else()
  message(STATUS "The compiler ${CMAKE_CXX_COMPILER} has no GNU C++14 support. Please use a different C++ compiler.")
endif()