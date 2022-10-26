#include <stdio.h>

void main() {
    int i, lim = 10;
    char c;
    char s[lim];

    // given loop
    for (int i = 0; i < lim - 1 && (c = getchar()) != '\n' && c != EOF; i++) {
        s[i] = c;
    }

    // loop without && and ||
    for (int i = 0; i < lim - 1; i++) {
        if (c = getchar() != '\n') {
            if (c != EOF) {
                s[i] = c;
            }
        }
    }
}