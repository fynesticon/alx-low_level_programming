#include "main.h"

/**
 * *_strcpy - function to copy str
 *
 * @dest: pointer for argument
 * @src: pointer for argument
 *
 * Return: return dest.
*/

char *_strcpy(char *dest, char *src)
{
	int i = 0;
	int srcLen = 0;

	while (dest[i] != '\0')
	{
		dest[i++] = '\0';
	}
	i = 0;

	while (src[srcLen] != '\0')
	{
		srcLen++;
	}

	for (i = 0; i < srcLen; i++)
	{
		dest[i] = src[i];
	}

	dest[srcLen] = '\0';
	return (dest);
}
