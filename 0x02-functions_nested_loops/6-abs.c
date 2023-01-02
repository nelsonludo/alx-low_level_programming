#include "main.h"

/**
 * abs- Check Description
 * @n: An input number
 * Description: function uses _putchar function to print
 * returns the absolute value of a number
 * Return: the absolute value of a number 
 */

int _abs(int n)
{
	int abs = n;

	if (n < 0)
	{
		abs = n * -1;
	}

	return (abs);
}
