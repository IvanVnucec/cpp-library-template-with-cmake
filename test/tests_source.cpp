#include "private.h"
#include <gtest/gtest.h>

TEST(Template, Test)
{
  EXPECT_TRUE(MyLibrary::private_func());
}
