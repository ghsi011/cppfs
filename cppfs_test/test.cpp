#include "pch.h"

#include "cppfs_lib/cppfs.hpp"

using namespace cppfs;

TEST(TestCaseName, TestName) {
  EXPECT_EQ(test(), 42);

  work();

  EXPECT_TRUE(true);
}