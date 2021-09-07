package com.murex;

import org.junit.Ignore;
import org.junit.Test;

import static org.junit.Assert.assertEquals;

public class RomanNumeralsTest {

    @Ignore
    @Test
    public void acceptance_test() {
        int arabic = 4746;
        String roman = "MMMMDCCXLVI";
        assertEquals(roman, RomanNumerals.arabicToRoman(arabic));
    }
}