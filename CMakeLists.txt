cmake_minimum_required(VERSION 3.1)
project(nemo)

# Set build type to RELEASE by default:
if(NOT CMAKE_BUILD_TYPE)
  message(STATUS "No build type provided, default to RELEASE.")
  set(CMAKE_BUILD_TYPE "RELEASE")
endif()

# Options can be turned on and off by providing cmake with a -DOPTIONNAME=ON (or OFF) argument.
# For example, to turn off benchmarks, build a shared library, and use sanitize flags in a DEBUG build:
#    cmake .. -DCMAKE_BUILD_TYPE=DEBUG -DNEMO_BENCH=OFF -DBENCH_STATIC=OFF -DNEMO_SANITIZE=ON
option(NEMO_TEST      "Build tests" ON)
option(NEMO_BENCH     "Build benchmarks" ON)
option(NEMO_STATIC    "Builds a static library instead of a shared one" OFF)
option(NEMO_SANITIZE  "Adds sanitive flags" OFF)

if(NEMO_STATIC)
  set(NEMO_LIB_NAME nemo_static)
  set(NEMO_LIB_TYPE STATIC)
else()
  set(NEMO_LIB_NAME nemo)
  set(NEMO_LIB_TYPE SHARED)
endif()

set(CMAKE_MODULE_PATH ${CMAKE_MODULE_PATH} "${CMAKE_SOURCE_DIR}/cmake/Modules/")

find_package(Threads REQUIRED)
find_package(Boost)
find_package(Math)

include_directories(. include ${Boost_INCLUDE_DIRS})

set(CMAKE_CXX_STANDARD 11) # cmake 3.1 supports '98', '11' or '14'. cmake 3.8 or later support '17'.
set(CMAKE_CXX_STANDARD_REQUIRED ON)

if(NEMO_SANITIZE)
  set(CMAKE_CXX_FLAGS "-fsanitize=address -fsanitize=undefined ${CMAKE_CXX_FLAGS}")
endif()

add_subdirectory(src)

if(NEMO_TEST)
  enable_testing()
  add_subdirectory(test)
endif()

if(NEMO_BENCH)
  add_subdirectory(bench)
endif()

message(STATUS "")
message(STATUS "BUILD SUMMARY")
message(STATUS "  CMAKE_GENERATOR      : ${CMAKE_GENERATOR}")
message(STATUS "  Compiler ID          : ${CMAKE_CXX_COMPILER_ID}")
message(STATUS "  Build type           : ${CMAKE_BUILD_TYPE}")
message(STATUS "  Library name         : ${NEMO_LIB_NAME}")
message(STATUS "  Library type         : ${NEMO_LIB_TYPE}")
message(STATUS "  Build tests          : ${NEMO_TEST}")
message(STATUS "  Build benchmarks     : ${NEMO_BENCH}")
message(STATUS "  Sanitize flags       : ${NEMO_SANITIZE}")
message(STATUS "  Boost include dirs   : ${Boost_INCLUDE_DIRS}")
message(STATUS "")
