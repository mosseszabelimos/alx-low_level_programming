#include "main.h"

/**
 * _strncat - concatinate two strings
 * @ch1: first entry
 * @ch2: second entry
 * @num: entry
 * Return: value
 */

char *_strncat(char *ch1, char *ch2, int num)
{
	int x;
	int y = 0;

	x = 0;
	
	while (ch1[x++])
		y++;

	for (x = 0; ch2[x] && x < num; x++)
		ch1[y] = ch2[x];
	
	return (ch1);
}
