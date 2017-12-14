#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int getLength(char *arr) {
	int toReturn = 0;
	while('\0' != *arr++) {
		++toReturn;
	}
	return toReturn;
}

int stringToInt(char *stringNum) {
	int size = getLength(stringNum) - 1;
	int toReturn = 0;

	while('\0' != *stringNum) {
		toReturn += (int)((*stringNum++ - 48) * pow(10, size--));
	}
	return toReturn;	
}

int main(int argc, char *argv[]) {
	int length = argc > 1 ? stringToInt(argv[1]) : 32;

	time_t t;
	int i = 0;
	char *symbols = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ01234567890";
	int symbols_length = getLength(symbols);
	srand((unsigned) time(&t));
	
	printf("\n");
	for (i = 0; i < length; ++i) {
		printf("%c", (char)symbols[(int)rand() % symbols_length]);
	}
}
