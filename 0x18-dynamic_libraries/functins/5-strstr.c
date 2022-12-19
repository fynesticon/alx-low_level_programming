#include "main.h"
#define NULL 0

/**
 * _strstr - find and return pointer to first occurence of substring
 * @haystack: string to search
 * @needle: target substring to search for
 *
 * Return: pointer to index of string at first occurence of whole substring
*/

char *_strstr(char *haystack, char *needle)
{
	int i, j;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		for (j = 0; needle[j] != '\0'; j++)
		{
			if (haystack[i + j] != needle[j])
			{
				break;
			}
		}

		if (!needle[j])
		{
			return (&haystack[i]);
		}
	}

	return (0);
}
