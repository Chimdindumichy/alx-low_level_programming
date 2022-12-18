#include <stdio.h>
/**
 * main - main block
 * print and compute all the sum of all the mul of 3
 * 5 below 1024 is excluded, followed by a new line
 * Return: 0
 */
int main(void)
{
	int i = 0;
	long int a = 0, b = 1, next;

	while (i < 50)
	{
		next = a + b;
		a = b;
		b = next;
		printf("%lu", next);

		if (i < 49)
		{
			prinf(", ");
		}
		i++;
	}
	_putchar('\n');
	return (0);
}
