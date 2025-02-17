//Print Square Of Each Digit

#include<stdio.h>

int main() {
	int num;
	int lastDigit;
	printf("\n Enter 3 digit No. = ");
	scanf_s("%d", &num);

	for (; num > 0; num /= 10) {
		lastDigit = num % 10;
		int sqr = lastDigit * lastDigit;
		printf("\n%d\n", sqr);
	}
	return 0;

}
