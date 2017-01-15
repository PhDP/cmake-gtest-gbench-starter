#include <iostream>
#include "gtest/gtest.h"

#include "nemo/foo.hh"

TEST(NemoAnswer, WrongWrongWRONNNNG) {
  EXPECT_FALSE(nemo::answer(8129));
  EXPECT_FALSE(nemo::answer(-4));
  EXPECT_FALSE(nemo::answer(47));
  EXPECT_FALSE(nemo::answer(41));
  EXPECT_FALSE(nemo::answer(2));
}

TEST(NemoAnswer, GoodAnswer) {
  ASSERT_TRUE(nemo::answer(42));
}
