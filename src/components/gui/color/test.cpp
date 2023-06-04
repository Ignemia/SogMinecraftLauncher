#include <gtest/gtest.h>
#include "color.h"

TEST(Color, Constructor)
{
    gui::Color c1; // default constructor
    EXPECT_EQ(c1.m_getR(), 0);
    EXPECT_EQ(c1.m_getG(), 0);
    EXPECT_EQ(c1.m_getB(), 0);
    EXPECT_EQ(c1.m_getA(), 255);

    gui::Color c2(255, 255, 255, 128); // constructor with values
    EXPECT_EQ(c2.m_getR(), 255);
    EXPECT_EQ(c2.m_getG(), 255);
    EXPECT_EQ(c2.m_getB(), 255);
    EXPECT_EQ(c2.m_getA(), 128);
}

TEST(Color, Normalize)
{
    EXPECT_FLOAT_EQ(gui::Color::c_normalize(0), 0);
    EXPECT_FLOAT_EQ(gui::Color::c_normalize(255), 1);
    EXPECT_FLOAT_EQ(gui::Color::c_normalize(128), 0.50196078431);
}

// TEST(Color, Denormalize)
// {
//     EXPECT_EQ(gui::Color::c_denormalize(0), 0);
//     EXPECT_EQ(gui::Color::c_denormalize(1), 255);
//     EXPECT_EQ(gui::Color::c_denormalize(0.50196078431), 128);
// }

TEST(Color, GetString)
{
    gui::Color c(255, 128, 0, 255);
    EXPECT_EQ(c.m_getString(), "#FF8000FF");
}

TEST(Color, GetStringNoAlpha)
{
    gui::Color c(255, 128, 0, 255);
    EXPECT_EQ(c.m_getStringNoAlpha(), "#FF8000");
}

TEST(Color, ChangeR)
{
    gui::Color c(255, 255, 255, 255);
    EXPECT_TRUE(c.m_changeR(128));
    EXPECT_EQ(c.m_getR(), 128);
}

TEST(Color, ChangeG)
{
    gui::Color c(255, 255, 255, 255);
    EXPECT_TRUE(c.m_changeG(128));
    EXPECT_EQ(c.m_getG(), 128);
}

TEST(Color, ChangeB)
{
    gui::Color c(255, 255, 255, 255);
    EXPECT_TRUE(c.m_changeB(128));
    EXPECT_EQ(c.m_getB(), 128);
}

TEST(Color, ChangeA)
{
    gui::Color c(255, 255, 255, 255);
    EXPECT_TRUE(c.m_changeA(128));
    EXPECT_EQ(c.m_getA(), 128);
}

int main(int argc, char** argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}