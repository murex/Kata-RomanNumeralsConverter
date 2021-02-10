#ifndef ROMAN_NUMERALS_CONFIG
#define ROMAN_NUMERALS_CONFIG

#ifdef _MSC_VER
#ifdef ROMAN_NUMERALS_EXPORTS
#define ROMAN_NUMERALS_API __declspec(dllexport)
#else
#define ROMAN_NUMERALS_API __declspec(dllimport)
#endif
#else
#define ROMAN_NUMERALS_API
#endif

#endif // ROMAN_NUMERALS_CONFIG
