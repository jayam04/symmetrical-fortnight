#include <stdio.h>

int main() {
	char string[100];
	char c; // useful while geting char
	printf("enter a string: ");

	int j = 0;
	while(j < 100){
		if((c = getchar()) == '\n'){
			break;
		}
		else if (c == '\t'){
			string[j] = '\\';
			string[j+1] = 't';
			j += 2;
		}
		else if (c == '\b'){
			string[j] = '\\';
			string[j+1] = 'b';
			j += 2;
		}
		else if (c == '\\'){
			string[j] = '\\';
			string[j+1] = '\\';
			j += 2;
		}
		else{
			string[j] = c;
			j++;
		}
	}
	printf("%s\n", string);
	return(0);
}