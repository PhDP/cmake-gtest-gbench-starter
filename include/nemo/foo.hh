#ifndef NEMO_FOO_H_
#define NEMO_FOO_H_

#include <iostream>

namespace nemo {

auto answer(int n) -> bool;

auto foo(int n) -> int;

auto bar(std::string const&) -> size_t;

} /* end namespace nemo */

#endif
