#include "main.h"

/**
 * _strlen - function
 * @s: input string
 * Return: length of sting
 */

int _strlen(char *s)
{
	int len;

	for (len = 0; s[len] != '\0'; len++)
		;
	return (len);
}
