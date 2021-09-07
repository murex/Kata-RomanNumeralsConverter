
#include <kata/roman_numerals/RomanNumerals.hpp>

#include <gtest/gtest.h>

#include <string>

using namespace com::murex::kata::roman_numerals;

TEST(RomanNumeralConverter, DISABLED_acceptance_test)
{
   int arabic = 4746;
   std::string roman = "MMMMDCCXLVI";
   EXPECT_EQ(roman, arabicToRoman(arabic));
}
