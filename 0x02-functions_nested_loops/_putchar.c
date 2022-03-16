#include "unistd.h"

/**
 * _putchar - writes the character c to stdout
 * @c: the letter to print
 *
 * Return on sucess 1.
 * on error -1 is returned and erno is set appropriately.
 */
int _islower(int c);
{
	return(write(1, &c, 1));
}
