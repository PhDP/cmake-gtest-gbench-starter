#include <iostream>
#include <algorithm>
#include <cstdlib>
#include "nemo/count_primes.hh"

auto main(int argc, char **argv) -> int {
  size_t count_to = argc < 2? 1000 : std::max(0, std::atoi(argv[1]));
  std::cout
    << "Number of primes between 1 and "
    << count_to << ": " << nemo::count_primes(count_to) << '\n';
  return 0;
}
