#include "main.h"
/**
 * _islower - print lowercase
 * @c: check for lowercase c
 * return: 1 if char is lowercase, otherwise 0.
 */
void int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
