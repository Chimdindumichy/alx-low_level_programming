#include "main.h"

/**
 * _strcmp - compares pointers to two strings.
 * @s1:a pointer to the first string to be compared
 * @s2: a pointer to the second string to be compared
 *
 * Return: if str1 < str2, the negative diff of the 1st unmatched char
 *         if str1 == str2, 0.
 *         if str1 > str2, the positive diff of he 1st unmatched char
 *
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}