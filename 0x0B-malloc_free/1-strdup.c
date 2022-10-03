#include <stdlib.h>
#include "main.h"

/**
 * *_strdup - copies the string given as parameter
 * @str: string to duplicate
 *
 * Return: pointer to the copied string (Success), NULL (Error)
 */
char *_strdup(char *str)
{
	char *cpp;
	unsigned int i, len;

	i = 0;
	len = 0;

	if (str == NULL)
		return (NULL);

	while (str[len])
		len++;

	cpp = malloc(sizeof(char) * (len + 1));

	if (cpp == NULL)
		return (NULL);

	while ((cpp[i] = str[i]) != '\0')
		i++;

	return (cpp);
}
