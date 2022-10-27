#include <stdio.h>

int htoi(char *hex) {
    int len = 0;
    for (int i = 0; i <= 8; i++) {
        if (hex[i] == '\0') {
            break;
        }
        len++;
    }

    int start = 0;
    if (hex[0] == '0' && (hex[1] == 'x' || hex[1] == 'X')) {
        start = 2;
    }

    int addition = 0;
    int multiplier = 1;
    for (int i = len - 1; i >= start; i--) {
        char c = hex[i];
        if (c >= '0' && c <= '9') {
            addition += multiplier * (c - '0');
        }
        else if (c >= 'a' && c <= 'f') {
            addition += multiplier * ((c - 'a') + 10);
        }
        if (c >= 'A' && c <= 'F') {
            addition += multiplier * ((c - 'A') + 10);
        }

        multiplier *= 16;
    }
    return addition;
}

void main() {
    int dec = htoi("87324FD");
    printf("decimal : %d\n", dec);
}