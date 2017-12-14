#include <stdio.h>
#include <stdlib.h>
//#include <math.h>
#include <string.h>

//if you don't want the string.h just uncomment it and replace the method on lines 18 and 33.
/*
int getLength(char *arr) {
	int toReturn = 0;
	while('\0' != *arr++) {
		++toReturn;
	}
	return toReturn;
}


int stringToInt(char *stringNum) {
	int size = strlen(stringNum) - 1;
	int toReturn = 0;

	while('\0' != *stringNum) {
		toReturn += (int)((*stringNum++ - 48) * pow(10, size--));
	}
	return toReturn;	
}
*/

int main(int argc, char *argv[]) {
	int length = argc > 1 ? atoi(argv[1]) : 32;

	time_t t;
	int i = 0;
	char *symbols = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ01234567890";
	int symbols_length = strlen(symbols);
	srand((unsigned) time(&t));
	
	for (i = 0; i < length; ++i) {
		printf("%c", (char)symbols[(int)rand() % symbols_length]);
	}
}
