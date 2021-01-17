#include <gtest/gtest.h>
#include "utils/math.h"

TEST(UtilsTests, ShouldSumTwoNumbers) {
    ASSERT_EQ(5, Utils::Math::sum(2, 3));
}
