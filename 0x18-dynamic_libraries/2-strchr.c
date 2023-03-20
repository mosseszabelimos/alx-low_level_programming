#include "main.h"

/**
 * _strchr - a function that locates a character in a string
 * @ch1: characters batch 1
 * @ch2: Characters batch 2
 * Return: value
 */

char *_strchr(char *ch1, char ch2)
{
	int x;

	for (x = 0; ch1[x] >= '\0'; x++)
	{
		if (ch1[x] == ch2)
			return (&ch1[x]);
	}
	return (0);
}
