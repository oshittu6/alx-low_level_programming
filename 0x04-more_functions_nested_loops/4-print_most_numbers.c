#include "main.h"

/**
 * print_most_numbers - prints
 * Return: void and do not print 2 and 4
 */

void print_most_numbers(void)
{
	int c = 0

	while (c < 10; c++)
	{
		if (c != '2' || c != '4')
			_putchar(c + '0');
	}
	_putchar('\n');
}
