#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n;

	for (n = '0'; n <= '89'; n++)
	{
		if (n <= '9')
			putchar('0');
			putchar(n);
		putchar(n);
		if (n == '89')
			break;

		putchar(',');
		putchar(' ');
	}

	putchar('\n');

	return (0);
}
