# cmake starter with google test and google benchmark
[![License: MIT](https://img.shields.io/badge/License-MIT-blue.svg)](https://opensource.org/licenses/MIT)

A cross-platform C++11 starter project with google test and google benchmark support. [See this
project](https://github.com/PhDP/cuda-cmake-gtest-gbench-starter) for a similar template with CUDA
support.

This project template is using git submodule to include Google Benchmark and Google Test so you
need either to do

    $ git clone --recursive git@github.com:PhDP/cmake-gtest-gbench-starter.git

or

    $ git clone git@github.com:PhDP/cmake-gtest-gbench-starter.git
    $ cd cmake-gtest-gbench-starter
    $ git submodule init
    $ git submodule update

The project compiles a library named nemo (of course: you should change the name, nemo means 'no
one') and an executable named nemo_exe.

# Organization

* **src** has the source files and the CMakeLists.txt to compile the library and executable.
* **include** has the header files.
* **test** has the tests and related CMakeLists.txt.
* **bench** has the benchmarks and related CMakeLists.txt.

The main CMakeLists.txt file at the root of the project has options and further documentation.

# Build
[![Build Status](https://travis-ci.org/PhDP/cmake-gtest-gbench-starter.svg?branch=master)](https://travis-ci.org/PhDP/cmake-gtest-gbench-starter)

On Linux/Unix, to build and make the test:

    $ mkdir build && cd $_
    $ cmake ..
    $ make

By default, the makefiles will build the library, executable, tests, and benchmarks. The commands

    $ ./test/test_nemo
    $ ./bench/bench_nemo

will run the tests and benchmarks. And

    $ sudo make install

will install (at least on Linux) the library and executable to your computer's
path.

On Windows, you can use cmake to generate Visual Studio build files with
the same 'cmake ..' command.

By default, the project will be built in RELEASE mode, use

    $ cmake .. -DCMAKE_BUILD_TYPE=DEBUG

to build in DEBUG mode.

See the CMakeLists.txt file to see all the options.

# License

[MIT](http://opensource.org/licenses/MIT)

