#include "main.h"

/**
 * _strncpy - copy string
 * @ch1: first input
 * @ch2: second input
 * @num: thirs entry
 * Return: value
 */

char *_strncpy(char *ch1, char *ch2, int num)
{
	int x;

	x = 0;

	while (x < num && ch2[x] != '\0')
	{
		ch1[x] = ch2[x];
		x++;
	}
	while (x < num)
	{
		ch1[x] = '\0';
		x++;
	}
	return (ch1);
}
