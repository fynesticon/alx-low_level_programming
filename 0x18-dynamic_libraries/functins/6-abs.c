#include "main.h"

/**
 * _abs - function to get absolute value
 *
 * @n: parameter of the function
 *
 * Return: return absolute value
*/

int _abs(int n)
{
	if (n > 0)
	{
		return (n);
	}
	else if (n == 0)
	{
		return (0);
	}
	else
	{
		return (-n);
	}
}
