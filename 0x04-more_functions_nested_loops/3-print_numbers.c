#include "main.h"

/**
 * print_numbers - write a fun that print number
 * : first number
 * Return: always return num 0 and 9
 */

void print_numbers(void)
{
	char c;

	for (c = '0'; c <= '9'; c++)
	{
	_putchar(c);
	}
	_putchar('\n');
}
