// const pointer vs const data
#include <stdio.h>

int main(void) {
	int a = 5;
	int b = 8;
	int* aPtr = &a; // non-const pointer to non-const data
	printf("value of aPtr is %p, aPtr point to %d\n", aPtr, *aPtr);
	aPtr = &b;
	printf("value of aPtr is %p, aPtr point to %d\n", aPtr, *aPtr);
	*aPtr = 10;
	printf("value of aPtr is %p, aPtr point to %d\n", aPtr, *aPtr);
	printf("a = %d b = %d\n", a, b);

	puts("=====================================================");
	int* const bPtr = &a; // const pointer to non-const data
	*bPtr = 15;
	printf("value of aPtr is %p, aPtr point to %d\n", bPtr, *bPtr);
	printf("a = %d b = %d\n", a, b);

	puts("=====================================================");
	const int* cPtr = &a; // non-const pointer to const data
	printf("value of aPtr is %p, aPtr point to %d\n", cPtr, *cPtr);
	cPtr = &b;
	printf("value of aPtr is %p, aPtr point to %d\n", cPtr, *cPtr);

	puts("=====================================================");
	const int* const dPtr = &a; // const pointer to const data

}