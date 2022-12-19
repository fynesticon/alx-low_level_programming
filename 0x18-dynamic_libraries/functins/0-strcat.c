#include "main.h"

/**
 * *_strcat - function that concatenates two string.
 *
 * @dest: function argument
 * @src: function argument
 *
 * Return: returns result
*/

char *_strcat(char *dest, char *src)
{
	int i = 0;
	int j;

	while (dest[i] != '\0')
	{
		i++;
	}

	for (j = 0; src[j] != '\0'; j++)
	{
		dest[i] = src[j];
		i++;
	}

	return (dest);
}
