#include "main.h"

/**
 * _isupper - function to check uppercase character.
 * @c: the argument of the _islower function.
 *
 * Return: Always 0.
*/

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
