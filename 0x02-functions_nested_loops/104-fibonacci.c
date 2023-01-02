#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i;
	long int fibonacci[98];

	fibonacci[0] = 1;
	fibonacci[1] = 2;

	for (i = 2; i < 98; i++)
	{
		fibonacci[i] = fibonacci[i - 1] + fibonacci[i - 2];
	}
	for (i = 0; i < 98; i++)
	{
		if (i != 98)	
			printf("%ld, ", fibonacci[i]);
	
		printf("%ld, ", fibonacci[i]);
	}
		printf("\n");
	return (0);
}
