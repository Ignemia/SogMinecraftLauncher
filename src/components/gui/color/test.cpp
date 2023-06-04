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

TEST(ColorTest, c_toHex)
{
    gui::Color white(255, 255, 255, 255);
    gui::Color black(0, 0, 0, 255);
    gui::Color red(255, 0, 0, 255);
    gui::Color green(0, 255, 0, 255);
    gui::Color blue(0, 0, 255, 255);
    gui::Color transparent(0, 0, 0, 0);

    // Test with alpha component
    EXPECT_EQ("#FFFFFFFF", white.c_toHex(true));
    EXPECT_EQ("#000000FF", black.c_toHex(true));
    EXPECT_EQ("#FF0000FF", red.c_toHex(true));
    EXPECT_EQ("#00FF00FF", green.c_toHex(true));
    EXPECT_EQ("#0000FFFF", blue.c_toHex(true));
    EXPECT_EQ("#00000000", transparent.c_toHex(true));

    // Test without alpha component
    EXPECT_EQ("#FFFFFF", white.c_toHex(false));
    EXPECT_EQ("#000000", black.c_toHex(false));
    EXPECT_EQ("#FF0000", red.c_toHex(false));
    EXPECT_EQ("#00FF00", green.c_toHex(false));
    EXPECT_EQ("#0000FF", blue.c_toHex(false));
    EXPECT_EQ("#000000", transparent.c_toHex(false));
}


TEST(Color, Normalize)
{
    EXPECT_FLOAT_EQ(gui::Color::c_normalize(0), 0);
    EXPECT_FLOAT_EQ(gui::Color::c_normalize(255), 1);
    EXPECT_FLOAT_EQ(gui::Color::c_normalize(128), 128.f/255.f);
}

TEST(Color, Denormalize)
{
    EXPECT_EQ(gui::Color::c_denormalize(0), 0);
    EXPECT_EQ(gui::Color::c_denormalize(1), 255);
    EXPECT_EQ(gui::Color::c_denormalize(128.f/255.f), 128);
}

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