#include "main.h"

/**
 * _puts - a function that print a string followed by new line, to stout
 *
 * @str: my input string
 *
 */

void _puts(char *str)
{
	int index;

	for (index = 0; str[index] != '\0'; index++)
	{
		_putchar(str[index]);
	}
	_putchar('\n');
}
