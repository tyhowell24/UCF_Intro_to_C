// Character array to store string
#include <stdio.h>

int main(void) {
	char string1[5]; // 4 individual characters plus a string terminating null char \0
	char string2[5] = { 'a', 'b', 'c', 'd', '\0'}; //init character array
	char string3[] = "abcd";
	printf("%c %d\n", string2[2], string2[2]);
	printf("%c %d\n", string2[4], string2[4]);
	// Ensure the input string is no more than max capacity
	scanf_s("%4s", string1, 5);
	printf("%s\n", string1);
	string1[2] = 't';
	printf("%s\n", string1);

}