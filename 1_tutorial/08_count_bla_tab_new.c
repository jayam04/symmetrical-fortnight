#include <stdio.h>


int main() {
	int c;
	int blk = 0, tab = 0, nl = 0;

	// you can't get EOF on command line so ...
	while((c = getchar()) != EOF && c != '\n'){
		if(c == '\n'){
			nl++;
		}
		else if (c == '\t'){
			tab++;
		}
		else if (c == ' '){
			blk++;
		}
	}
	printf("total %d tabs, %d blanks and %d new lines found!!\n", tab, blk, nl);
}