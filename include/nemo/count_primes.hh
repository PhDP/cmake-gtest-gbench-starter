#ifndef NEMO_FOO_H_
#define NEMO_FOO_H_

#include <iostream>

namespace nemo {

auto est_n_primes(size_t n) -> double;

auto count_primes(size_t n) -> size_t;

auto count_primes_no_goto(size_t n) -> size_t;

} /* end namespace nemo */

#endif
