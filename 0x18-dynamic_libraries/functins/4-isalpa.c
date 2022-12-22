#include "main.h"

/**
 * _isalpha - function to check if c is a lowercase or uppercase
 * letter character.
 * @c: the argument of the _islower function.
 *
 * Return: Always 0.
*/

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
