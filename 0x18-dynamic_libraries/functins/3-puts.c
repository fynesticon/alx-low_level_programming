#include "main.h"

/**
 * _puts - function to print string
 *
 * @str: pointer of parameter
*/

void _puts(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}

	_putchar('\n');
}
