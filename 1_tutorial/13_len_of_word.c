#include <stdio.h>

int main() {
    int wordlen[16];
    int len = 0;
    int space = 0;
    char c;

    while((c = getchar()) != EOF && c != '\n') {
        if(c == '\n' || c == ' ' || c == '\t') {
            if(space == 0) {
                wordlen[len - 1]++;
                len = 0;
                space = 1;
            }
        }
        else{
            len++;
        }
    }

    return 0;
}