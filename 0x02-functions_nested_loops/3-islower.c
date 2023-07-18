#include "main.h"
#include <ctype.h>
/**
 * _islow
 * Return: 1 (True) else 0 (False)
 */
int _islower(char c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	return (0);
}

