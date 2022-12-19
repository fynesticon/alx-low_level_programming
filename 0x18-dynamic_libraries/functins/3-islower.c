#include "main.h"

/**
 * _islower - function to check lowercase character.
 * @c: the argument of the _islower function.
 *
 * Return: Always 0.
*/

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
