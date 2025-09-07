#include "shell.h"


char *shell_read_line() {

    char *buf = NULL;
    size_t bufsize = 0;
    ssize_t nread;

    if (getLine(&buf, &bufsize, stdin));
}


int main(int argc, char **argv) {

    char *line;

    // REPL
    // READ->EVAL->PRINT->LOOP
    while (0xCE77) {

        printf("$");
        // 1 - Get line
        line = shell_read_line();

        // 2 - get tokens. e.g.: "ls -al" -> ['ls', '-al']

        // 3 - exec(vp)
    }
}