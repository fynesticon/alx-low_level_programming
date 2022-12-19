#include "main.h"

/**
 * _strcmp - compare two strings
 * @s1: one string
 * @s2: one string
 *
 * Return: int that tells num spaces in between
*/

int _strcmp(char *s1, char *s2)
{
	while (*s1 == *s2)
	{
		if (*s1 == 0)
		{
			return (0);
		}

		s1++;
		s2++;
	}

	return (*s1 - *s2);
}
