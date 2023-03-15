import unittest

from roman_numerals.roman_numerals import arabic_to_roman


class RomanNumeralsTest(unittest.TestCase):

    @unittest.skip("test currently disabled")  # Comment or remove this line to enable this test case
    def test_acceptance_test(self):
        arabic = 4746
        roman = 'MMMMDCCXLVI'
        self.assertEqual(roman, arabic_to_roman(arabic))


if __name__ == "__main__":
    unittest.main()
