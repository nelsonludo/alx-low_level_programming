#include <ctype.h>
#include "main.h"

/**
 *
 * _islower - Check description
 * Description: It checks if a letter is in upper or lower case
 * Returns: 1 if lowercase or 0 if is uppercase
 */

int _islower(int c)
{
	if (islower (c) != 0)
		return 1;
	return 0;
}
	


