// sort elememts in array from smallest to largest
#include <stdio.h>

#define SIZE 10

int main(void) {
	int a[SIZE] = { 3,6,8,2,5,0,4,6,1,7 };
	// Bubble sort
	// Loop to control number of passes
	for (int pass = 1; pass < SIZE; ++pass) {
		// loop to control number of comparisons per pass
		for (int i = 0; i < SIZE - 1; i++) {
			// Compare adjacent elements and swap them if first
			// element is greater than second element
			if (a[i] > a[i + 1]) {
				int hold = a[i]; 
				a[i] = a[i + 1];
				a[i + 1] = hold;
			}

		}
	}

	// Output sorted array
	for (int i = 0; i < SIZE; ++i) {
		printf("%d ", a[i]);
	}
}