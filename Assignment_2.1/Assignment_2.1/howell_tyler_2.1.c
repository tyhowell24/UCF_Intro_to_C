/*
COP3223 Summer 2023 Assignment 2_1
Copyright 2023 Howell Tyler
*/

// Guess the Number Game
// Write a Guess the Number game that has three levels of 
// difficulty.The first level of difficulty would be a 
// number between 1 and 10(include 10).The second difficulty 
// set would be between 1 and 100(include 100).The third 
// difficulty set would be between 1 and 1000(include 1000).

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int guessNumber(void); // Guess number function prototype

int main(void) {
	// runs the first instance of the guessNumber function
	guessNumber();
	// Once the function has ran prompt for user to play again.
	printf("%s", "Play again? ");
	int choice;
	scanf_s("%d", &choice);
	// if user choises to play again, run another instance of the function
	while (choice != 0) {
		guessNumber();
		printf("%s", "Play again? ");
		int choice;
		scanf_s("%d", &choice);
		if (choice == 0) {
			break;
		}
	}
}

int guessNumber(void) {
	srand(time(NULL));
	puts("Let's play Guess the Number");

	// Prompt the user for the difficulty level
	printf("%s", "Pick a difficulty level (1,2,3): ");
	int difficulty = 0;
	scanf_s("%d", &difficulty);
	if (difficulty == 1) {
		int value = 1 + rand() % 10;
		int attempts = 0;
		printf("%s", "I have my number. What's your guess? ");
		int guess;
		scanf_s("%d", &guess); // scans for the user guess
		attempts++;
		// checks to see if number is too low and prompts the user to enter again
		while (guess != value) {
			if (guess < value) {
				printf("%s", "Too low. Guess again: ");
				scanf_s("%d", &guess);
				attempts++;
				// checks to see if number is too high and prompts the user to enter again
			} if (guess > value) {
				printf("%s", "Too High. Guess again: ");
				scanf_s("%d", &guess);
				attempts++;
			}
			// shows the user how many attempts it took to get number
		}
		printf("You got it in %d guesses!\n", attempts);
	}
	// Runs the difficulty of picking numbers 1 - 100
	if (difficulty == 2) {
		int value = 1 + rand() % 100;
		int attempts = 0;
		printf("%s", "I have my number. What's your guess? ");
		int guess;
		scanf_s("%d", &guess); // scans for the user guess
		attempts++;
		// checks to see if number is too low and prompts the user to enter again
		while (guess != value) {
			if (guess < value) {
				printf("%s", "Too low. Guess again: ");
				scanf_s("%d", &guess);
				attempts++;
				// checks to see if number is too high and prompts the user to enter again
			} if (guess > value) {
				printf("%s", "Too High. Guess again: ");
				scanf_s("%d", &guess);
				attempts++;
			}
			// shows the user how many attempts it took to get number
		}
		printf("You got it in %d guesses!\n", attempts);
	}
	// Runs the difficulty of picking numbers 1 - 1000
	if (difficulty == 3) {
		int value = 1 + rand() % 1000;
		int attempts = 0;
		printf("%s", "I have my number. What's your guess? ");
		int guess;
		scanf_s("%d", &guess); // scans for the user guess
		attempts++;
		// checks to see if number is too low and prompts the user to enter again
		while (guess != value) {
			if (guess < value) {
				printf("%s", "Too low. Guess again: ");
				scanf_s("%d", &guess);
				attempts++;
				// checks to see if number is too high and prompts the user to enter again
			} if (guess > value) {
				printf("%s", "Too High. Guess again: ");
				scanf_s("%d", &guess);
				attempts++;
			}
			// shows the user how many attempts it took to get number
		}
		printf("You got it in %d guesses!\n", attempts);
	}
}