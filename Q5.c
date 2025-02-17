//Q 5. Accept Integer Value From User And Print Factorial of that number , if overflow Occurs
//Print Message Accordingly Otherwise Print factorial Of Number.Here If Result
//Becomes Negative Then Consider Overflow Occurs.

#include<stdio.h>

int main() {
	int num;
	
	printf("\nEnter The No. = ");
	scanf_s("%d",&num);
	int fact=num;

	for (int i = num-1; i >= 1; i--) {
		fact = fact * i;
	}
	

	if (fact <= 0) {
		printf("\nOverflow\n");
	}
	else {
		printf("\nFactorial is = %d\n", fact);
	}

	return 0;
}