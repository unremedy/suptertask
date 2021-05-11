#include <gtest/gtest.h>
#include "sumh.h"

TEST(sum, ftest) {
    EXPECT_EQ(sum(47, 2), 49);
    EXPECT_EQ(sum(52, 3), 55);
}
