#include "main.h"

/**
 * _strncat - concatinate two strings
 * @ch1: first entry
 * @ch2: second entry
 * @num: entry
 * Return: value
 */

char *_stncat(char *ch1, char *ch2, int num)
{
	int x;
	int y;

	x = 0;
	
	while (ch1[x] != '\0')
	{
		x++;
	}
	y = 0;

	while (y < num && ch2[y] != '\0')
	{
		ch1[x] = ch2[y];
		x++;
		y++;
	}
	ch1[x] = '\0';
	return (ch1);
}
