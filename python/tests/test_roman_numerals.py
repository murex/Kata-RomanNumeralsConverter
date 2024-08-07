import pytest

from roman_numerals.roman_numerals import arabic_to_roman


class TestRomanNumerals:

    @pytest.mark.skip(reason="test currently disabled")  # Comment or remove this line to enable this test case
    def test_acceptance_test(self) -> None:
        arabic = 4746
        roman = 'MMMMDCCXLVI'
        assert (roman == arabic_to_roman(arabic))
