# cmake starter with google test and google benchmark
[![License: MIT](https://img.shields.io/badge/License-MIT-blue.svg)](https://opensource.org/licenses/MIT)

A cross-platform C++11 starter project with google test and google benchmark
support.

# Build
[![Build Status](https://travis-ci.org/PhDP/cmake-gtest-gbench-starter.svg?branch=master)](https://travis-ci.org/PhDP/cmake-gtest-gbench-starter)
[![Build status](https://ci.appveyor.com/api/projects/status/9muwt2yj0doodv96?svg=true)](https://ci.appveyor.com/project/PhilippeDesjardinsProulx/cmake-gtest-gbench-starter)

On Linux/Unix, to build and make the test:

    $ mkdir build && cd $_
    $ cmake ..
    $ make

By default, the makefiles will build the library, executable, tests,
and benchmarks. The commands

    $ ./test/nemo_tests
    $ ./bench/nemo_benchmark

...will run the tests and benchmarks.

On Windows, you can use cmake to generate Visual Studio build files with
the same 'cmake ..' command.

By default, the project will be built in RELEASE mode, use

    $ cmake .. -DCMAKE_BUILD_TYPE=DEBUG

to build in DEBUG mode.

See the CMakeLists.txt file to see all the options.

# License

[MIT](http://opensource.org/licenses/MIT)

