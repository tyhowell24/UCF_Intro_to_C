// Generate number 1 - 10
// check if number is in array
// print out number and index
// if not print number does not exist

#include <stdio.h>
#include <time.h>
#include <stdlib.h>



int main(void) {
	srand(time(NULL));
	int list[5] = { 2,6,8,4,9 };
	int guess =  1 + rand() % 10; // Get random number between 1 - 10

	for (int i = 0; i < 5; i++) {
		if (guess == list[i]) {
			printf("The number %d is at index %d\n", guess, i);
			break;
		}
		else if (i == list[i]-1 && guess != list[i]) {
			printf("The number %d does not exist", guess);
		}
	}



}