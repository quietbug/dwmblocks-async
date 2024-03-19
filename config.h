#define CMDLENGTH 60
#define DELIMITER " < "

const Block blocks[] = {
    BLOCK("xkb-switch -W",      0,    0),
    BLOCK("sb-net",             0,    0),
    BLOCK("sb-mpd",             0,    0),
    BLOCK("sb-uptime",          0,    0),
    BLOCK("sb-volmon",          0,    0),
    BLOCK("sb-cpu -d 1 -t 3",   0,    0),
    BLOCK("sb-ram",             10,   0),
    BLOCK("sb-timedate",        0,    0)
};
