#include "main.h"

/**
 * more_numbers - print numbr 10x from 0 to 14
 * Return: no return
 */

void more_numbers(void)
{

	char i, j;

	for (i = 1; i <= 10; i++)
	{
		for (j = 0; j <= 14; j++)
		{
			if (j >= 10)
			_putchar('1');
			_putchar(j % 10 + '0');
		}
			_putchar('\n');
		}
}
