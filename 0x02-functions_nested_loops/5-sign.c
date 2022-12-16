#incude "main.h"
/**
 * print_sign - print sign of the number
 * @n: this is the number of sign to be printed
 * Return: 1 if the number is greater than 0
 * 0 of number is zero
 * -1 if the number is less than zero
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('_');
		return (-1);
	}
}
