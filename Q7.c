//Q 7. Print Values As Follow
//1.00, 1.20, 1.40, 1.60, ..............10.00
#include<stdio.h>

int main() {
	float num = 1;

	for (; num <= 10;num+=0.20) {
		printf("\n %.2f ",num);
	}
	return 0;
}