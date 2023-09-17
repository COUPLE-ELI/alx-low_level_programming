#include <stdio.h>

/**
 * _isupper - Checks if a character is uppercase
 * @c: The character to be checked
 *
 * Return: 1 if c is uppercase, 0 otherwise
 */
int _isupper(int c)
{
	/* Check if the character is between 'A' (65) and 'Z' (90) in ASCII */
	if (c >= 65 && c <= 90)
	{
	return (1); /* Character is uppercase */
	}
	else
	{
	return (0); /* Character is not uppercase */
	}
}

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char testChar = 'A'; /* Change this to test different characters */

	if (_isupper(testChar))
	{
	printf("%c is uppercase.\n", testChar);
	}
	else
	{
	printf("%c is not uppercase.\n", testChar);
}

	return (0);
}






