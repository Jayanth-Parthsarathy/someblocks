// Modify this file to change what commands output to your statusbar, and
// recompile using the make command.
static const Block blocks[] = {
    /*Icon*/ /*Command*/ /*Update Interval*/ /*Update Signal*/
    {"  ", "music_status", 5, 0},
    {"  ", "volume", 10, 0},
    {" ", "battery", 5, 3},
    {"", "wifi", 5, 0},
    {"󰥔  ", "datetime", 5, 0},
};

// sets delimeter between status commands. NULL character ('\0') means no
// delimeter.
static char delim[] = " | ";
static unsigned int delimLen = 5;
