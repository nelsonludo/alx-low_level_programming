#include "main.h"

/**
 *
 * _islower - Check description
 * Description: It checks if a letter is in upper or lower case
 * Returns: 1 if lowercase or 0 if is uppercase
 */

int _islower(int c)
{
	char i;
	int lower = 1;

	for (i = 'a'; i <= 'z'; i++)
	{
		if (1 == c)
			lower = 0;
	}	

	return (lower);
}
	


