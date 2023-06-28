#include <stdio.h>

int main(void) {
	int a[5] = { 1,2,3,4,5 };
	int* aPtr = &a;
	printf("4th element is %d\n", aPtr[3]);

	int b[3][4] = { {1,2,3}, {4,5,6}, {7,8,9} };
	int* bPtr = &b;
	printf("the value is %d\n", b[1][1]);
	printf("the value is %d\n", bPtr[5]);
	printf("the value is %d\n", *(bPtr + 5));
	// array is row n, column m, get item (i,j), array[i][j], arrayPtr[i*m + j]

}