//Print Sum Of Cube Of Digits

#include<stdio.h>

int main() {
	int num;
	int lastDigit;
	int sum = 0;
	printf("\n Enter 3 digit No. = ");
	scanf_s("%d", &num);

	for (; num > 0; num /= 10) {
		lastDigit = num % 10;

		int cube = lastDigit * lastDigit * lastDigit;
		sum = sum + cube;
	}
	printf("\n%d\n", sum);
	return 0;

}