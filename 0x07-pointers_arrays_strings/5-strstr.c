#include "main.h"

/**
 * _strstr - a function that locates a substring
 * @haystack:  the string to be looked in to
 * @needle: occurenece
 * Return: value 0 or 1
 */

char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *y = haystack;
		char *z = needle;

		while (*y == *z && *z != '\0')
		{
			y++;
			z++;
		}
		if (*z == '\0')
			return (haystack);
	}
	return (0);
}
