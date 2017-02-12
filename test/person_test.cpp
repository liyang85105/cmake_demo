#include "person.h"
#include <gtest/gtest.h>

TEST(Suite1, Case1)
{
    ASSERT_EQ(3.1415926, 3.1415926);
}

TEST(Suite1, Case2)
{
    ASSERT_EQ(3.1415926, 3.1415926);
}

TEST(Suite2, Case2)
{
    Person p;
    ASSERT_EQ(42, p.id());
}
