#include <stdio.h>

/**
 *main - this is to show the sizes
 *
 *Return: always 0(success)
 */

int main(void)
{
int d;
float f;
char c;
long long int l;
long int li;

printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(c));
	printf("Size of an int: %lu byte(s)\n", (unsigned long)sizeof(d));
	printf("Size of a long int: %lu byte(s)\n", (unsigned long)sizeof(li));
	printf("Size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(l));
	printf("Size of a float: %lu byte(s)\n", (unsigned long)sizeof(f));
return (0);
}

