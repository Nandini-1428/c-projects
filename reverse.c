// C program to reverse the string in C using loops
#include <stdio.h>
#include <string.h>

void reverse()
{
	// string to be reversed.
	char str[100] = "string";

	printf("Original String: %s\n", str);

	// string length
	int len = strlen(str);

	// for loop
	for (int i = 0, j = len - 1; i <= j; i++, j--) {
		// swapping characters
		char c = str[i];
		str[i] = str[j];
		str[j] = c;
	}

	printf("Reversed String: %s", str);

	//return 0;
}

