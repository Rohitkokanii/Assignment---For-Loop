// Print Reverse Number
// Check Palindrome
// Check Armstrong

#include<stdio.h>

int main() {
	int num;
	int lastDigit;
	int rev = 0;
	int pos = 100;
	int arm = 0;
	//Print Reverse Numbe
	printf("\n- Print Reverse Number\n");
	
	printf("\nEnter Digit No. = ");
	scanf_s("%d",&num);
	int org = num;

	for (; num > 0; num /= 10) {
		lastDigit = num % 10;
		rev = rev + (lastDigit*pos);
		arm = arm+(lastDigit*lastDigit*lastDigit);
		pos /= 10;
	}
	printf("\nReverse No. is = %d\n",rev);

	// Check Palindrome

	printf("\n- Check Palindrome\n");
	if (org==rev) {
		printf("\nGiven No. is Palindrom\n");
	}
	else {
		printf("\nNot Palindrom\n");
	}

	// Check Armstrong

	printf("\n- Check Armstrong\n");
	if (org == arm) {
		printf("\nGiven no. is Armstrong\n");
	}
	else {
		printf("\nNot Armstrong\n");
	}
	return 0;
}