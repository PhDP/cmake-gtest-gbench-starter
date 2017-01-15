#include <iostream>
#include "gtest/gtest.h"

#include "nemo/foo.hh"

TEST(NemoFoo, Positives) {
  EXPECT_EQ(38, nemo::foo(-4));
  EXPECT_EQ(42, nemo::foo(0));
}

TEST(NemoFoo, Negatives) {
  EXPECT_NE(-1, nemo::foo(99));
  EXPECT_NE(0, nemo::foo(-41));
  EXPECT_NE(42, nemo::foo(42));
}
