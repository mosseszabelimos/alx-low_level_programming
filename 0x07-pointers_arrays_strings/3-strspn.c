#include "main.h"

/**
 * _strspn - a function that gets the length of a prefix in substring
 * @ch1: first entry
 * @ch2: second entry
 * Return: value 0
 */

unsigned int _strspn(char *ch1, char *ch2)
{
	unsigned int num = 0;
	int i;

	while (*ch1)
	{
		for (i = 0; ch2[i]; i++)
		{
			if (*ch1 == ch2[i])
			{
				num++;
				break;
			}
			else if (ch2[i + 1] == '\0')
				return (num);
		}
		ch1++;
	}
	return (num);
}
