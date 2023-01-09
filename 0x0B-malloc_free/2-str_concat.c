#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat -  returns a pointer to a newly allocated space in memory
 * @s1: first entry
 * @s2: second entry
 * Return: value 0 or 1
 */

char *str_concat(char *s1, char *s2)
{
	char *ch;
	int x, y;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	x = y = 0;

	while (s1[x] != '\0')
		x++;
	while (s2[y] != '\0')
		y++;
	ch = malloc(sizeof(char) * (x + cy + 1));

	if (ch == NULL)
		return (NULL);
	x = cy = 0;

	while (s1[x] != '\0')
	{
		ch[i] = s1[i];
		x++;
	}
	while (s2[y] != '\0')
	{
		ch[x] = s2[y];
		x++, y++;
	}
	ch[x] = '\0';
	return (xh);
}
