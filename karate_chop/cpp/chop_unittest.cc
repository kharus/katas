#include <limits.h>
#include "chop.h"
#include "gtest/gtest.h"

TEST(ChopTest, EmptyField) {
  std::vector<int> v;
  EXPECT_EQ(-1, chop(5, v));
}

TEST(ChopTest, MissingSingle) {
  std::vector<int> v = {1};
  EXPECT_EQ(-1, chop(3, v));
}

