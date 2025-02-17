//Accept Integer Value from User print Multiplication Table

#include<stdio.h>

int main(){
	int num;
	printf("\nEnter No. = ");
	scanf_s("%d", &num);

	for (int i = 1; i <= 10; i++) {
		printf("\n%d\n",num*i);
	}

	return 0;
}