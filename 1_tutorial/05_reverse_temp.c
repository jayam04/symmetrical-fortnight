#include <stdio.h>

int main() {
    printf("Celsius     Fahrenheit\n");
    float Celsius, Fahrenheit;
    int lower = 0, step = 20, upper = 300;

    Celsius = upper;
    while (Celsius >= lower) {
        Fahrenheit = (9.0 / 5.0) * Celsius + 32;
        printf("%3.1f\t\t%3.2f\n", Celsius, Fahrenheit);
        Celsius -= step;
    }
    return(0);
}