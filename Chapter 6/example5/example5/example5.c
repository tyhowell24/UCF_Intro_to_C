// array is passed to function by reference, which means it pass the address of the array

#include <stdio.h>
#define SIZE 5

void modifyArray(int array[], int size);

int main(void) {
	char array[4] = "abc";
	printf("&array = %p\n", &array);
	printf("&array = %p\n", array);
	printf("&array[0] = %p\n", &array[0]);

	int a[SIZE] = { 0,1,2,3,4 };
	puts("original array: ");
	for (int i = 0; i < SIZE; i++) {
		printf("%3d", a[i]);
	}
	modifyArray(a, SIZE);
	puts("\nupdated array:");
	for (int i = 0; i < SIZE; i++) {
		printf("%3d", a[i]);
	}

}

void modifyArray(int array[], int size) {
	for (int i = 0; i < size; i++) {
		array[i] += 2;
	}
}