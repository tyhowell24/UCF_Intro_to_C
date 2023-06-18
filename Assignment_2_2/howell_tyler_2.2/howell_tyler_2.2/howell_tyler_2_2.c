/*
COP3223 Summer 2023 Assignment 2_2
Copyright 2023 Howell Tyler
*/

#include <stdio.h>
#include <math.h>

int gcd(int num1, int num2);

int main(void) {
	// Variable initialization
	int num1;
	int num2;

	// Prompt user for first number
	printf("%s", "Please enter the first number: ");
	scanf_s("%d", &num1); // Scan and assign to num1

	// Prompt user for second number
	printf("%s", "Please enter the second number: ");
	scanf_s("%d", &num2); // Scan and assign to num2

	// print result	
	printf("The common divisor for %d and %d is %d", num1, num2, gcd(num1, num2));
}

int gcd(int num1, int num2) {
	
	// if y is equal to 0 return x
	if (num2 == 0) {
		return num1;
	}
	else {
		return gcd(num2, num1 % num2);
	}
}