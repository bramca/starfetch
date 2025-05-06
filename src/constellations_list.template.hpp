#ifndef CONSTELLATIONS_LIST_H_
#define CONSTELLATIONS_LIST_H_

#include <string>
#include <unordered_map>

inline const std::string res_help_message = R"(
starfetch is a command line tool that displays information about a constellation alongside its scheme.

Usage: starfetch [OPTION] [CONSTELLATION NAME]
    -h      Prints this help message.
    -n      Shows the selected constellation.
    -r      Shows a random constellation.
    -l      Prints the list of all the available constellations.

If launched with no arguments, the behaviour is the same as with '-r'.

Examples:   starfetch -r
            starfetch -n orion
            starfetch
)";

inline const std::string res_template = R"(
┌%0┐
│%1│
│%2│      ^[1;37m%11^[0m
│%3│
│%4│      ^[1;37mQuadrant^[0m: %12
│%5│      ^[1;37mArea^[0m: %15
│%6│      ^[1;37mMain stars^[0m: %16
│%7│
│%8│
└──────────────────────┘
)";

inline std::unordered_map<std::string, std::string> res_constellations_json_list{
        {"antlia",
         R"(
        {
        "title": "──── ａｎｔｌｉａ ────",
        "graph":
            {
                "line1": { },
                "line2": { },
                "line3": { "15": "✦" },
                "line4": { },
                "line5": { },
                "line6": { "4": "✦" },
                "line7": { },
                "line8": { }
            },
        "name": "Antlia",
        "quadrant": "SQ2",
        "area": "239 sq.deg. {62nd}",
        "main stars": "3"
    }
    )"},

        {"apus",
         R"(
    {
        "title": "────── ａｐｕｓ ──────",
        "graph":
            {
                "line1": { },
                "line2": { },
                "line3": { },
                "line4": { "4":"✦"},
                "line5": { "19":"✦"},
                "line6": { },
                "line7": { },
                "line8": { }
            },
        "name": "Apus",
        "quadrant": "SQ3",
        "area": "206 sq.deg. {67th}",
        "main stars": "4"
    }
    )"},

        {"aquarius",
        R"(
        {
        "title": "── ａｑｕａｒｉｕｓ ──",
        "graph":
            {
                "line1": { },
                "line2": { "10": "✦",  "11": "✦" },
                "line3": { "12": "✦",  "15": "✦" },
                "line4": { "4": "✦" },
                "line5": { "7": "✦" },
                "line6": { "5": "✦",  "12": "✦" },
                "line7": { "4": "✦",  "19": "✦" },
                "line8": { }
            },
        "name": "Aquarius",
        "quadrant": "SQ4",
        "area": "980 sq.deg. {10th}",
        "main stars": "10, 22"
        }
        )",
        },

        {"ara",
         R"(
        {
            "title": "─────── ａｒａ ───────",
            "graph":
                {
                    "line1": { },
                    "line2": { "4":"✦"},
                    "line3": { "16":"✦"},
                    "line4": { },
                    "line5": { },
                    "line6": { },
                    "line7": { "19":"✦"},
                    "line8": { "6":"✦"}
                },
            "name": "Ara",
            "quadrant": "SQ3",
            "area": "237 sq.deg. {63rd}",
            "main stars": "8"
        }
    )"},

        {"aries",
         R"(
        {
            "title": "───── ａｒｉｅｓ ─────",
            "graph":
                {
                    "line1": { },
                    "line2": { },
                    "line3": { "5": "✦" },
                    "line4": { },
                    "line5": { "17": "✦" },
                    "line6": { "16": "✦" },
                    "line7": { },
                    "line8": { }
                },
            "name": "Aries",
            "quadrant": "NQ1",
            "area": "441 sq.deg. {39th}",
            "main stars": "4, 9"
        }
    )"},

        {"bootes",
         R"(
        {
            "title": "──── ｂｏｏｔｅｓ ────",
            "graph":
                {
                    "line1": { },
                    "line2": { "7":"✦"},
                    "line3": { "12":"✦"},
                    "line4": { "4":"✦"},
                    "line5": { },
                    "line6": { "13":"✦"},
                    "line7": { "8":"✦", "17":"✦"},
                    "line8": { "7":"✦", "18":"✦"}
                },
            "name": "Boötes",
            "quadrant": "NQ3",
            "area": "907 sq.deg. {13th}",
            "main stars": "7, 15"
        }
        )"},

        {"cancer",
         R"(
        {
            "title": "──── ｃａｎｃｅｒ ────",
            "graph":
                {
                    "line1": { },
                    "line2": { "7": "✦" },
                    "line3": { },
                    "line4": { "10": "✦" },
                    "line5": { "17": "✦" },
                    "line6": { "8": "✦" },
                    "line7": { },
                    "line8": { }
                },
            "name": "Cancer",
            "quadrant": "NQ1",
            "area": "506 sq.deg. {31st}",
            "main stars": "5"
        }
        )"},

        {"capricorn",
         R"(
        {
            "title": "─ ｃａｐｒｉｃｏｒｎ ─",
            "graph":
                {
                    "line1": { },
                    "line2": { },
                    "line3": { "3": "✦", "19": "✦" },
                    "line4": { "5": "✦", "8": "✦", "12": "✦", "18": "✦" },
                    "line5": { "7": "✦", "14": "✦" },
                    "line6": { "12": "✦" },
                    "line7": { },
                    "line8": { }
                },
            "name": "Capricorn",
            "quadrant": "SQ4",
            "area": "414 sq.deg. {40th}",
            "main stars": "9, 13, 23"
        }
        )"},

        {"cassiopeia",
         R"(
        {
            "title": " ｃａｓｓｉｏｐｅｉａ ",
            "graph":
                {
                    "line1": { },
                    "line2": { },
                    "line3": { "4": "✦"},
                    "line4": { },
                    "line5": { },
                    "line6": { "16": "✦" },
                    "line7": { },
                    "line8": { }
                },
            "name": "Cassiopeia",
            "quadrant": "NQ1",
            "area": "598 sq.deg. {25th}",
            "main stars": "5"
        }
        )"},

        {"corona_borealis",
         R"(
        {
            "title": "ｃｒ  ｂｏｒｅａｌｉｓ",
            "graph":
                {
                    "line1": { },
                    "line2": { },
                    "line3": { "15": "✦"},
                    "line4": { },
                    "line5": { "5": "✦", "18": "✦"},
                    "line6": { "10": "✦", "13": "✦" },
                    "line7": { },
                    "line8": { }
                },
            "name": "Corona Borealis",
            "quadrant": "NQ1",
            "area": "179 sq.deg. {73rd}",
            "main stars": "8"
        }
        )"},

        {"crux",
         R"(
        {
            "title": "────── ａｐｕｓ ──────",
            "graph":
                {
                    "line1": { },
                    "line2": { "10":"✦"},
                    "line3": { },
                    "line4": { "16":"✦"},
                    "line5": { },
                    "line6": { },
                    "line7": { "13":"✦"},
                    "line8": { }
                },
            "name": "Crux",
            "quadrant": "SQ3",
            "area": "68 sq.deg. {88th}",
            "main stars": "4"
        }
        )"},

        {"cygnus",
         R"(
        {
            "title": "──── ｃｙｇｎｕｓ ────",
            "graph":
                {
                    "line1": { },
                    "line2": { "18": "✦" },
                    "line3": { "9": "✦" },
                    "line4": { "15": "✦" },
                    "line5": { "7": "✦", "15": "✦"},
                    "line6": { "4": "✦" },
                    "line7": { "18": "✦" },
                    "line8": { }
                },
            "name": "Cygnus",
            "quadrant": "NQ4",
            "area": "804 sq.deg. {16th}",
            "main stars": "9"
        }
        )"
        },

        {"gemini",
         R"(
        {
            "title": "──── ｇｅｍｉｎｉ ────",
            "graph":
                {
                    "line1": { "7": "✦" },
                    "line2": { "7": "✦", "14": "✦" },
                    "line3": { "4": "✦", "11": "✦", "15": "✦", "19": "✦" },
                    "line4": { },
                    "line5": { },
                    "line6": { },
                    "line7": { "4": "✦", "8": "✦", "14": "✦", "17": "✦" },
                    "line8": { "18": "✦" }
                },
            "name": "Gemini",
            "quadrant": "NQ2",
            "area": "514 sq.deg. {30th}",
            "main stars": "8,17"
        }
        )"},
};


#endif// CONSTELLATIONS_LIST_H_
