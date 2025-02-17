//Print All Odd Numbers Only between That Range

#include<stdio.h>

int main() {
	int min, max;

	printf("\nEnter Min No. & Max No. = ");
	scanf_s("%d%d", &min, &max);

	for (int i = min; i <= max; i++) {
		if (i % 2 != 0) {
			printf("\n%d\n", i);
		}
	}

	return 0;
}