#include "main.h"
/**
 * _islower - shows 1 if the input is a lowercase
 * another case shows 0
 *
 * @c: the character in ASCII code
 *
 * Return: 1 for lowercase character and zero for the rest.
 */
int _islower(int c)
{

	if (c >= 'a' && c <= 'z');
	{
	 	return (1);
	}
	else
	{
		return (0);
	}
}
