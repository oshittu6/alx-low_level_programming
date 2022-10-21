#include "main.h"

/**
 * print_line - printing lines
 * @n: number of times
 *
 * Return: void
 */


void print_line(int n)
{
	char i;

	for (i = 0; i < n; i++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
