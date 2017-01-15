#include <iostream>
#include "gtest/gtest.h"

#include "nemo/count_primes.hh"

TEST(NemoPrimes, CountPrimes) {
  EXPECT_EQ(size_t{0}, nemo::count_primes(0));
  EXPECT_EQ(size_t{0}, nemo::count_primes(1));
  EXPECT_EQ(size_t{1}, nemo::count_primes(2));
  EXPECT_EQ(size_t{2}, nemo::count_primes(3));
  EXPECT_EQ(size_t{2}, nemo::count_primes(4));
  EXPECT_EQ(size_t{3}, nemo::count_primes(5));
  EXPECT_EQ(size_t{4}, nemo::count_primes(10));
  EXPECT_EQ(size_t{25}, nemo::count_primes(100));
  EXPECT_EQ(size_t{168}, nemo::count_primes(1000));
}
