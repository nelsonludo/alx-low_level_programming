#include "main.h"

/**
 * print_last_digit- Check Description
 * @n: An input number
 * Description: function uses _putchar function to print
 * Return: the last digit of a number
 */

int print_last_digit(int n)
{
	int r;

	if (n < 0)
		r = -1 * (r % 10);
	else
		r = n % 10;

	_putchar((n % 10) + '0');
	return (n % 10);
}
