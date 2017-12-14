#include <stdio.h>
#include <stdlib.h>

int getLength(char *arr) {
	int toReturn = 0;
	while('\0' != *arr++) {
		++toReturn;
	}
	return toReturn;
}

int main(void) {

	int length;
	printf("Please enter the length of the password: ");
	scanf("%d", &length);

	time_t t;
	int i = 0;
	char *symbols = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ01234567890";
	int symbols_length = getLength(symbols);
	srand((unsigned) time(&t));
	
	printf("\n");
	for (i = 0; i < length; ++i) {
		printf("%c", (char)symbols[(int)rand() % symbols_length]);
	}
	printf("\n\ndone.\n");
}
