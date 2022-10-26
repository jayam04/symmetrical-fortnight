#include <stdio.h>


int main() {
    int c;
    int newline = 0;

    // you can't get EOF on command line so '\n'...
    while ((c = getchar()) != EOF && c != '\n') {
        if (c == '\n' || c == '\t' || c == ' ') {
            if (newline == 1){
                printf("\n");
                newline = 0;
            }
            continue;
        }
        else {
            printf("%c", c);
            newline = 1;
        }
    }

    if (newline == 1) {
        printf("\n");
    }
}