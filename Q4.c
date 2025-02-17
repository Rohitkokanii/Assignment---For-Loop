//Q 4. Accept Integer Value From User Check That Number Is Prime Or Not

#include<stdio.h>

int main() {
	int num;
	printf("\nEnter The No. = ");
	scanf_s("%d", &num);

	for (int i = 2; i < num; i++) {
		if (num % i==0) {
			printf("\nNot Prime\n");
			break;
		}
		else {
			printf("\nPrime\n");
			break;
		}
	}
	return 0;
}