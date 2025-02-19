// Print Reverse Number
// Check Palindrome
// Check Armstrong

#include<stdio.h>
/*
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
		//rev = rev + (lastDigit*pos);
		rev = rev * 10 + lastDigit;
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

*/

int main() {
	
	int num;
	printf("\nEnter No. = ");
	scanf_s("%d", &num);

	int i = num;
	int count = 0;
	int rev=0;
	int lastDigit;
	int arm = 0;

	while (i > 0) {
		i /= 10;
		count++;
	}

	for (i = 1; i <= count; i++) {
		lastDigit = num % 10;
		num = num / 10;
		printf(" %d ",lastDigit);

		rev = rev * 10 + lastDigit;//stor reverse no.

		//armstrong
	    int mult = 1;
		for (int j = 1; j <= count; j++) {
			mult = mult * lastDigit;
		}
		arm = arm + mult;
	}

	printf("\nRev =  %d\n", rev);
	printf("\nArm = %d\n",arm);

	return 0;
}