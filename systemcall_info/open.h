#include "./../header_file/Confuzer.h"

typedef struct OpenInfo{
    string name;

}




{
        "name": "open",
        "parameters": [
            {
                "name": "pathname",
                "type": "const char *"
            },
            {
                "name": "flags",
                "type": "int",
                "options": [
                    "O_APPEND", O_APPEND
                    "O_ASYNC",
                    "O_CLOEXEC",
                    "O_CREAT",
                    "O_DIRECT",
                    "O_DIRECTORY",
                    "O_DSYNC",
                    "O_EXCL",
                    "O_LARGEFILE",
                    "O_NOATIME ",
                    "O_NOCTTY",
                    "O_NOFOLLOW",
                    "O_NDELAY",
                    "O_PATH ",
                    "O_SYNC",
                    "O_TMPFILE",
                    "O_TRUNC"
                ]
            },
            {
                "name": "mode",
                "type": "mode_t",
                "options": [
                    "S_IRWXU ",
                    "S_IRUSR ",
                    "S_IWUSR ",
                    "S_IXUSR ",
                    "S_IRWXG ",
                    "S_IRGRP ",
                    "S_IWGRP ",
                    "S_IXGRP ",
                    "S_IRWXO ",
                    "S_IROTH ",
                    "S_IWOTH ",
                    "S_IXOTH ",
                    "S_ISUID ",
                    "S_ISGID "
                ]
            }
        ]
    }