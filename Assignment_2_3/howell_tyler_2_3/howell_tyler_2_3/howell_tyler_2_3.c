/*
COP3223 Summer 2023 Assignment 2.3
Copyright 2023 Howell Tyler
*/

#include <stdio.h>

int main(void) {
	
	// init variable for menu choice for selection
	int menuChoice;

	// build the arrays for First class seats and econ seats
	int fc[3];
	int econ[3];

	for (size_t i = 0; i < 3; ++i) {
		fc[i] = 0; // set element of array fc to 0
	}

	for (size_t i = 0; i < 3; ++i) {
		econ[i] = 0; // set element of array fc to 0
	}

	int allIn = 0;

	while (allIn == 0) {

		// build menu and prompt user for choice
		printf("%s", "Please type 1 for \"first class\"\n");
		printf("%s", "Please type 2 for \"economy\"\n");
		scanf_s("%d", &menuChoice);

		if (menuChoice == 1) {
			// Code for first class option
		}
		
		if (menuChoice == 2) {
			// Code for economy option
		}
		
		printf("%s", "Has everyone boarded? ");
		scanf_s("%d", &allIn);
		if (allIn == 1) {
			return 0;
		}
	}

	for (size_t i = 0; i < 3; ++i) {
		printf("%7zu%8d\n", i, fc[i]);
	}

	printf("\n");

	for (size_t i = 0; i < 3; ++i) {
		printf("%7zu%8d\n", i, econ[i]);
	}

}