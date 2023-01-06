#include "main.h"

/**
 * _strcat - concatinates two strings
 * @ch1: fist entry
 * @ch2: second entry
 * Return: value
 */

char *_strcat(char *ch1, char *ch2)
{
	int x;
	int y;

	x = 0;

	while (ch1[x] != '\0')
	{
		x++;
	}
	y = 0;

	while (ch2[y] != '\0')
	{
		ch1[x] = ch2[y];
		x++;
		y++;
	}
	ch1[x] = '\0';
	return (ch1);
}
