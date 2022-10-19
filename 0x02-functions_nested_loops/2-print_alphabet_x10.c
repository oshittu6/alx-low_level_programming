#include "main.h"

/**
 * main - printing 10x
 * print_alphabet_x10 - print 10x alphabet
 * Return: 0 (success)
 */

void print_alphabet_x10(void);
{
	int i;

	for (i = 'a'; i = 'z'; i++)
	{
		_putchar(i);
	}

int main(void)
{
	print_alphabet_x10();
	print_alphabet_x10();
	print_alphabet_x10();
	print_alphabet_x10();
	print_alphabet_x10();
	print_alphabet_x10();
	print_alphabet_x10();
	print_alphabet_x10();
	print_alphabet_x10();
	print_alphabet_x10();
	_putchar('\n');
	return (0);
}
}
