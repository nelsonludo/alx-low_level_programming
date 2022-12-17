#include <stdio.h>

/**
 *main - this is to show the sizes
 *
 *return: always 0(success)
 */

int main(void)
{
int d;
float f;
char c;
long long int l;
long int li;

printf("size of a char: %lu byte(s)\n",(unsigned long)sizeof(c));
printf("size of an integer: %lu byte(s) \n",(unsigned long)sizeof(d));
printf("size of a long int: %lu byte(s) \n",(unsigned long)sizeof(li));
printf("size of a long long int: %lu byte(s) \n",(unsigned long)sizeof(l));
printf("size of a float: %lu byte(s)\n",(unsigned long)sizeof(f));

return (0);
}

