#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n;
	int m;

	for (n = '0'; n <= '9'; n++)
	{

		for (m = '1'; m <= '9'; m++)
			putchar(n);
			putchar(m);
			if (m == '9')
				break;

			putchar(',');
			putchar(' ');
	}

	putchar('\n');

	return (0);
}
