#include<stdio.h>

int main() {
	//All Characters From A toz Ex.A, B, C,.........Z

	for (int i = 65; i <= 90; i++) {
		printf(" %c ",i);
	}
	printf("\n\n==============================================================\n\n");

	//- All Characters From a to z Ex.a, b, c, ...........z

	for (int i = 97; i <= 122; i++) {
		printf(" %c ", i);
	}
	printf("\n\n==============================================================\n\n");

	//All Vowels Only
	for (int i = 65; i <= 90; i++) {
		if (i == 'A' || i == 'E' || i == 'I' || i == 'O' || i == 'U') {
			printf(" %c ", i);
		}
	}

	printf("\n\n");

	for (int i = 97; i <= 122; i++) {
		if (i == 'a' || i == 'e' || i == 'i' || i == 'o' || i == 'u') {
			printf(" %c ", i);
		}
	}

	printf("\n\n==============================================================\n\n");

	//All Consonant Only

	for (int i = 65; i <= 90; i++) {
		if (i == 'A' || i == 'E' || i == 'I' || i == 'O' || i == 'U') {
			//printf(" ");
		}
		else {
			printf(" %c ", i);
		}
	}
	printf("\n\n");
	for (int i = 97; i <= 122; i++) {
		if (i == 'a' || i == 'e' || i == 'i' || i == 'o' || i == 'u') {
			
		}
		else {
			printf(" %c ", i);
		}
	}
	//every 4th character
	printf("\n\n==============================================================\n\n");

	for (int i = 65; i <= 90; i+=3) {
		printf(" %c ", i);
	}

	printf("\n\n==============================================================\n\n");

	for (int i = 97; i <= 122; i+=3) {
		printf(" %c ",i);
	}

	printf("\n\n==============================================================\n\n");

	//Every Alternate Characters

	for (int i = 65; i <= 90; i++) {
		if (i % 2 == 0) {
			
		}
		else {
			printf(" %c ", i);
		}
		
	}

	printf("\n\n==============================================================\n\n");

	for (int i = 97; i <= 122; i ++) {
		if (i % 2 == 0) {

		}
		else {
			printf(" %c ", i);
		}
	}

	printf("\n\n==============================================================\n\n");

	//Every Alternate Character in Lower Case from A to Z Ex. A, b, C, d, E, f....

	for (int i = 65; i <= 90; i++) {
		if (i % 2 == 0) {
			printf(" %c ", i+32);
		}
		else {
			printf(" %c ", i);
		}
	}

	printf("\n\n==============================================================\n\n");

	return 0;
}