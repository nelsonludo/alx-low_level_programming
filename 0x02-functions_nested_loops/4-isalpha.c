#include "main.h"

/**
 * _isalpha - Check Description
 * @c: An input character
 * Description: function uses _putchar function to print
 * alphabet in lowercase 10 times
 * Return: 1 if is lowercase or 0 if is uppercase
 */
int _isalpha(int c)
{
	char i;
	int lower = 0;

	for (i = 'a'; i <= 'z'; i++)
	{
		if (i == c)
			lower = 1;
	}

	for (i = 'A'; i <= 'Z'; i++)
	{
		if (i == c)
			lower = 1;
	}

	return (lower);
}
