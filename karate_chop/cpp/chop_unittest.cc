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

TEST(ChopTest, FindSingle) {
  std::vector<int> v = {1};
  EXPECT_EQ(0, chop(1, v));
}

TEST(ChopTest, FindFirst) {
  std::vector<int> v = {1, 3, 5};
  EXPECT_EQ(0, chop(1, v));
}

TEST(ChopTest, FindMiddle) {
  std::vector<int> v = {1, 3, 5};
  EXPECT_EQ(1, chop(3, v));
}

TEST(ChopTest, FindLast) {
  std::vector<int> v = {1, 3, 5};
  EXPECT_EQ(2, chop(5, v));
}

TEST(ChopTest, MissingBelow) {
  std::vector<int> v = {1, 3, 5};
  EXPECT_EQ(-1, chop(0, v));
}

TEST(ChopTest, MissingMiddle) {
  std::vector<int> v = {1, 3, 5};
  EXPECT_EQ(-1, chop(4, v));
}

TEST(ChopTest, MissingAbove) {
  std::vector<int> v = {1, 3, 5};
  EXPECT_EQ(-1, chop(7, v));
}


