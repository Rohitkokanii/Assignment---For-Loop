//Seperate digits And Print

#include<stdio.h>

int main() {
	int num;
	int lastDigit;
	printf("\n Enter 3 digit No. = "); 
		scanf_s("%d", &num);

	for (; num > 0; num /= 10) {
		lastDigit = num % 10;
		printf("\n%d\n",lastDigit);
	}
	return 0;
}