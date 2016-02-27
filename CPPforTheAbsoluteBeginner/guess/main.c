#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main() {
	srand(time(NULL));

	int iNum = (rand() % 10) + 1;
	printf("%d", iNum);

	char cYourNum;

	printf("\nInserisci un numero da 1 a 10 e ti diro' se hai indovinato! ");
	scanf("%c", &cYourNum);

	if (!isdigit(cYourNum)) {
		printf("\nERRORE! Non hai inserito un numero!\n\n");
		return 0;
	}
	else {
		int convert = ctoi(cYourNum);
		if (convert == iNum) {
			printf("\nHai Vinto!!!\n\n");
		}
		else {
			printf("\nHai Perso!!!\n\n");
		}
	}
	return 0;
}

int ctoi(char d) {
	char str[2];

	str[0] = d;
	str[1] = '\0';

	return (int)strtol(str, NULL, 10);
}