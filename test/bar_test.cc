#include <iostream>
#include "gtest/gtest.h"

#include "nemo/foo.hh"

TEST(NemoBar, GetStringSize) {
  EXPECT_EQ(size_t{5}, nemo::bar(std::string{"Kyoto"}));
  EXPECT_EQ(size_t{9}, nemo::bar(std::string{"Stockholm"}));
  EXPECT_EQ(size_t{10}, nemo::bar(std::string{"Montreal  "}));
  EXPECT_EQ(size_t{3}, nemo::bar(std::string{"   "}));
}

TEST(NemoBar, EmptyStringHaveZeroSize) {
  EXPECT_EQ(size_t{0}, nemo::bar(std::string{""}));
}
