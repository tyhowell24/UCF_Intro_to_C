// array size is 6
// define the array
// init the array with scanf
// print out each character in the array except the termination charcter

#include <stdio.h>
#define SIZE 6

int main(void) {
	char string1[SIZE] = "";
	printf("%s", "Please enter a string: ");
	scanf_s("%5s", string1, SIZE);

	//print out each character until the null character is reached
	for (int i = 0; i < SIZE && string1[i] != '\0'; i++) {
		printf("%c ", string1[i]);
	}
	
}