#include "main.h"

/**
 * print_most_numbers - print num expect 2 and 4
 *
 * Return: void
 */

void print_most_numbers(void)
{
	char c;

	for (c = '0'; c <= '9'; c++)
	{
		if ((c == '2' || c == '4'))
	{
		contunue;
	}
	{
		_putchar(c + '0');
	}
	}
	_putchar('\n');
}
