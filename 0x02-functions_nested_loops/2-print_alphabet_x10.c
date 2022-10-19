#include "main.h"

/**
 * print_alphabet_x10 - print 10x alphabet
 * Return: 0 (success)
 */

void print_alphabet_x10(void)
{
	int count = 0;
	char let;

	while (count++ <= 9)
	{
		for (let = 'a'; let <= 'z'; let++)
			_putchar(let);
		_putchar('\n');
	}
}
