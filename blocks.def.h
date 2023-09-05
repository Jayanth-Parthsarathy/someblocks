// Modify this file to change what commands output to your statusbar, and
// recompile using the make command.
static const Block blocks[] = {
    /*Icon*/ /*Command*/ /*Update Interval*/ /*Update Signal*/
    {"", "kanji", 36000, 0},
    {"🐧 ", "uname -r", 360000, 0},
    {"🧠 ", "free -h | awk '/^Mem/ { print $3 }'", 30, 0},
    {" ", "volume", 100, 0},
    {"", "battery", 60, 0},
    {"", "wifi", 100, 0},
    {"", "datetime", 5, 0},
};

// sets delimeter between status commands. NULL character ('\0') means no
// delimeter.
static char delim[] = " | ";
static unsigned int delimLen = 5;
