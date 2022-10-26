#include <stdio.h>

int main() {
	char string[100];
	printf("enter a string: ");
	gets(string);
	char new[100];
	
	// copy character
	int j = 0;
	int prevBlank = 0; // trace if last char was blank
	for(int i = 0; i < 100; i++){
		// if char is blank or tab
		if(string[i] == ' ' || string[i] == '\t'){
			if(!prevBlank){
				new[j] = ' ';
				j++;
				prevBlank = 1;
			}
		}
		else{
			prevBlank = 0;
			new[j] = string[i];
			j++;
		}
	}
	printf("%s\n", new);
	return(0);
}