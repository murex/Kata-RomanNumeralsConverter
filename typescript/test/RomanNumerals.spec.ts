import {arabicToRoman} from "../src/RomanNumerals";

describe("roman_numerals", () => {
    // Remove the ".skip" below to enable this test case
    test.skip('acceptance test', () => {
        let arabic = 4746;
        let roman = "MMMMDCCXLVI";
        expect(arabicToRoman(arabic)).toEqual(roman);
    });
});
