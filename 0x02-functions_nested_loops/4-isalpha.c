#include "main.h"
/**
 * _isalpha - if c is uppercase or lower case return 1
 * @c: the character to be checked
 * Return: 0  if c is not an alphabet.
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
