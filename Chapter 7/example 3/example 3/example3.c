#include <stdio.h>

int main(void) {
	int a[4] = { 10,20,30,40 };
	int* aPtr = a;

	// use array name and index to get value for each element
	printf("item 1 = %d\n", a[1]);

	// use pointer
	printf("item 1 = %d\n", *(aPtr + 1));

	// array name and pointer offset
	printf("item 1 = %d\n", *(a + 1));

	// pointer and array index
	printf("item 1 = %d\n", aPtr[1]);

	// pointer and array index to print each value
	for (size_t i = 0; i < 4; i++) {
		printf("%4d", aPtr[i]);
	}
	puts("");

	// array name and pointer offest to print each value
	for (size_t i = 0; i < 4; i++) {
		printf("%4d", *(a+i));
	}
	puts("");

	// pointer and offset notation to print out each value
	for (size_t i = 0; i < 4; i++) {
		printf("%4d", *(aPtr+i));
	}
	puts("");
}