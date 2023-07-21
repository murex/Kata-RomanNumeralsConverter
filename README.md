[![Gradle](https://github.com/murex/Kata-RomanNumeralsConverter/actions/workflows/gradle.yml/badge.svg)](https://github.com/murex/Kata-RomanNumeralsConverter/actions/workflows/gradle.yml)
[![Maven](https://github.com/murex/Kata-RomanNumeralsConverter/actions/workflows/maven.yml/badge.svg)](https://github.com/murex/Kata-RomanNumeralsConverter/actions/workflows/maven.yml)
[![CMake](https://github.com/murex/Kata-RomanNumeralsConverter/actions/workflows/cmake.yml/badge.svg)](https://github.com/murex/Kata-RomanNumeralsConverter/actions/workflows/cmake.yml)
[![Go](https://github.com/murex/Kata-RomanNumeralsConverter/actions/workflows/go.yml/badge.svg)](https://github.com/murex/Kata-RomanNumeralsConverter/actions/workflows/go.yml)
[![Pytest](https://github.com/murex/Kata-RomanNumeralsConverter/actions/workflows/pytest.yml/badge.svg)](https://github.com/murex/Kata-RomanNumeralsConverter/actions/workflows/pytest.yml)
[![Npm](https://github.com/murex/Kata-RomanNumeralsConverter/actions/workflows/npm.yml/badge.svg)](https://github.com/murex/Kata-RomanNumeralsConverter/actions/workflows/npm.yml)
[![Check Markdown links](https://github.com/murex/Kata-RomanNumeralsConverter/actions/workflows/markdown-link-check.yml/badge.svg)](https://github.com/murex/Kata-RomanNumeralsConverter/actions/workflows/markdown-link-check.yml)
[![Add contributors](https://github.com/murex/Kata-RomanNumeralsConverter/actions/workflows/contributors.yml/badge.svg)](https://github.com/murex/Kata-RomanNumeralsConverter/actions/workflows/contributors.yml)

# Roman Numerals Converter

![Kata Image](images/RomanNumerals.png) <br>
"[Numerals Roman Number Blocks](https://pixabay.com/vectors/numerals-roman-number-blocks-35937/)" by [Clker-Free-Vector-Images](https://pixabay.com/it/users/clker-free-vector-images-3736/) is licenced under [Pixabay License](https://pixabay.com/fr/service/license/)

## Description

Available [here](http://codingdojo.org/kata/RomanNumerals/)

### Simple Examples

| Arabic | Roman | Arabic | Roman | Arabic | Roman | Arabic | Roman |
|--------|-------|--------|-------|--------|-------|--------|-------|
| 1      | I     | 10     | X     | 100    | C     | 1000   | M     |
| 2      | II    | 20     | XX    | 200    | CC    | 2000   | MM    |
| 3      | III   | 30     | XXX   | 300    | CCC   | 3000   | MMM   |
| 4      | IV    | 40     | XL    | 400    | CD    | 4000   | MMMM  |
| 5      | V     | 50     | L     | 500    | D     |        |       |
| 6      | VI    | 60     | LX    | 600    | DC    |        |       |
| 7      | VII   | 70     | LXX   | 700    | DCC   |        |       |
| 8      | VIII  | 80     | LXXX  | 800    | DCCC  |        |       |
| 9      | IX    | 90     | XC    | 900    | CM    |        |       |

### More Examples, with Decomposition

| Arabic | Roman  | Decomposition               |
|--------|--------|-----------------------------|
| 1990   | MCMXC  | 1000(M)  + 900(CM) + 90(XC) |
| 2008   | MMVIII | 2000(MM) + 8(VIII)          |
| 99     | XCIX   | 90(XC) + 9(IX)              |
| 47     | XLVII  | 40(XL) + 7(VII)             |

## Getting Started

- [Java](java/GETTING_STARTED.md)
- [C++](cpp/GETTING_STARTED.md)
- [Go](go/GETTING_STARTED.md)
- [Python](python/GETTING_STARTED.md)
- [Typescript](typescript/GETTING_STARTED.md)

## Session Quick Retrospective

You can fill it from [here](QuickRetrospective.md)

## Useful Links

### For this Kata

- [Online roman decimal converter](https://www.calculateme.com/roman-numerals/to-roman)
- [Another one](https://www.calculator.org/calculate-online/mathematics/roman-numerals.html)
- [One more](https://goodcalculators.com/roman-numeral-converter/)

### General

- [TCR (Test && Commit || Revert) wrapper](tcr/TCR.md) utility
- Collaborative timer for pairing or mobbing:
  [mobti.me](https://mobti.me/)
  or [agility timer](https://agility.jahed.dev/)

## Session Information

### Style & Duration

- 2-hour [Randori in Pairs](doc/RandoriInPairs.md)

### Topic

- Basic TDD & Pair Programming

### Focus Points

- Red-Green-Refactor
- Baby Steps
- YAGNI

### Source Files

- [Java](java)
- [C++](cpp)
- [Go](go)
- [Python](python)
- [Typescript](typescript)

## License

`Kata-RomanNumeralsConverter` and the accompanying materials are made available
under the terms of the [MIT License](LICENSE.md) which accompanies this
distribution, and is available at the [Open Source site](https://opensource.org/licenses/MIT)

## Acknowledgements

See [ACKNOWLEDGEMENTS.md](ACKNOWLEDGEMENTS.md) for more information.

## Contributors

<table>
<tr>
    <td align="center" style="word-wrap: break-word; width: 150.0; height: 150.0">
        <a href=https://github.com/mengdaming>
            <img src=https://avatars.githubusercontent.com/u/1313765?v=4 width="100;"  style="border-radius:50%;align-items:center;justify-content:center;overflow:hidden;padding-top:10px" alt=Damien Menanteau/>
            <br />
            <sub style="font-size:14px"><b>Damien Menanteau</b></sub>
        </a>
    </td>
    <td align="center" style="word-wrap: break-word; width: 150.0; height: 150.0">
        <a href=https://github.com/aatwi>
            <img src=https://avatars.githubusercontent.com/u/11088496?v=4 width="100;"  style="border-radius:50%;align-items:center;justify-content:center;overflow:hidden;padding-top:10px" alt=Ahmad Atwi/>
            <br />
            <sub style="font-size:14px"><b>Ahmad Atwi</b></sub>
        </a>
    </td>
    <td align="center" style="word-wrap: break-word; width: 150.0; height: 150.0">
        <a href=https://github.com/philou>
            <img src=https://avatars.githubusercontent.com/u/23983?v=4 width="100;"  style="border-radius:50%;align-items:center;justify-content:center;overflow:hidden;padding-top:10px" alt=Philippe Bourgau/>
            <br />
            <sub style="font-size:14px"><b>Philippe Bourgau</b></sub>
        </a>
    </td>
    <td align="center" style="word-wrap: break-word; width: 150.0; height: 150.0">
        <a href=https://github.com/AntoineMx>
            <img src=https://avatars.githubusercontent.com/u/77109701?v=4 width="100;"  style="border-radius:50%;align-items:center;justify-content:center;overflow:hidden;padding-top:10px" alt=AntoineMx/>
            <br />
            <sub style="font-size:14px"><b>AntoineMx</b></sub>
        </a>
    </td>
</tr>
</table>
