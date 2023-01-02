#include "main.h"

/**
 * print_sign- Check Description
 * @c: An input number
 * Description: function uses _putchar function to print
 * checks if a number is negative, equals to 0 or negative
 * Return: 1 if positive, 0 if zero or -1 if negative
 */
int print_sign(int n)
{
	int sign;

	if (n > 0)
	{
		sign = 1;
		_putchar('+');
	}
	else if (n = 0)
	{
		sign = 0;
		_putchar('0');
	}
	else
	{
		sign = -1;
		_putchar('-');
	}

	return (sign);
}
