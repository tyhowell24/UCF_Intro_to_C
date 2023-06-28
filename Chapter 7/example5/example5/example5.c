// Develop the two functions below
// use pointers to pass by reference

#include <stdio.h>
#define SIZE 5
void plusoneArray(int  *const iPtr);
void printArray(const int* const iPtr);

int main(void) {
	int a[SIZE] = { 10,20,30,40,50 };
	plusoneArray(a);
	printArray(a);
}

void plusoneArray(int *const iPtr) { // for each element, plus one
	for (int i = 0; i < SIZE; i++) {
		iPtr[i] += 1;
	}
}
void printArray(const int *const iPtr) { // print out each element
	for (int i = 0; i < SIZE; i++) {
		printf("%4d", iPtr[i]);
	}
}