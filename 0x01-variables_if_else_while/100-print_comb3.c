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

	for (n = '0'; n <= '8'; n++)
	{

		for (m = n + 1; m <= '9'; m++)
		{
			if (m != n)
				putchar(n);
				putchar(m);
				if (n == '8')
					break;

				putchar(',');
				putchar(' ');
		}
	}

	putchar('\n');

	return (0);
}
