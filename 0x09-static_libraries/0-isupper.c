#include "main.h"

/**
 * _isupper - a function that checks for uppercase character
 * @c: is the int used for the argument of the function
 * Return: 1 if uppercase character 0 if not
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
