#include "main.h"

/**
 * _strcmp - compares strings
 * @ch1: first entry
 * @ch2: second entry
 * Return: value
 */

int _strcmp(char *ch1, char *ch2)
{
	int x; 
	
	x = 0;

	while (ch1[x] != '\0' && ch2[x] != '\0')
	{
		if (ch1[x] != ch2[x])
		{
			return (ch1[x] - ch2[x]);
		}
		x++;
	}
	return (0);
}
