#include <stdio.h>

void main() {
    int i = 0, j = 0;

    while(i < 10) {
        printf("%d\t%d\n", i++, ++j);
    }

    // i++  =>  return 0 whereas i = 1  (temporary variable required)
    // ++i  +>  return 1 and i = 1 
}