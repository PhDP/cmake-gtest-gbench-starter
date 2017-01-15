#include "nemo/count_primes.hh"
#include <vector>
#include <cmath>
#include <algorithm>

namespace nemo {

auto est_n_primes(size_t n) -> double {
  const double n_d = (double)n;
  return n_d / std::log(n_d);
}

auto count_primes(size_t n) -> size_t {
  if (n < 2) return 0;
  if (n < 3) return 1;
  if (n < 5) return 2;

  auto primes = std::vector<size_t>{2, 3, 5};
  primes.reserve((size_t)est_n_primes(n));

  for (auto i = 7u; i <= n; i += 2) {
    size_t const max = (size_t)std::sqrt(i);
    size_t j = 0, prime;
    while ((prime = primes[++j]) <= max) {
      if (i % prime == 0) {
        goto loopend;
      }
    }
    primes.push_back(i);
    loopend:;
  }
  return primes.size();
}

auto count_primes_no_goto(size_t n) -> size_t {
  if (n < 2) return 0;
  if (n < 3) return 1;
  if (n < 5) return 2;

  auto primes = std::vector<size_t>{2, 3, 5};
  primes.reserve((size_t)est_n_primes(n));

  for (auto i = 7u; i <= n; i += 2) {
    bool is_prime = true;
    size_t const max = (size_t)std::sqrt(i);
    size_t j = 0, prime;
    while ((prime = primes[++j]) <= max) {
      if (i % prime == 0) {
        is_prime = false;
        break;
      }
    }
    if (is_prime) {
      primes.push_back(i);
    }
  }
  return primes.size();
}

} /* end namespace nemo */
