#include <stdio.h>

int main() {
	char c;
	while ((c = getchar()) != EOF){
		// check if getchar) != EOF return 1 or 0
		printf("%d\n", c != EOF);
		// prints char
		putchar(c);
	}
	return(0);
}