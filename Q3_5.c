//Print Sum Of Squares Of Digits

#include<stdio.h>

int main() {
	int num;
	int lastDigit;
	int sum = 0;
	printf("\n Enter 3 digit No. = ");
	scanf_s("%d", &num);

	for (; num > 0; num /= 10) {
		lastDigit = num % 10;
		
		int sqr = lastDigit * lastDigit;
		sum = sum + sqr;
	}
	printf("\n%d\n", sum);
	return 0;

}