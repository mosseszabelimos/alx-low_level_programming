#include "main.h"

/**
 * rev_string - reverse string
 * @ch: entry
 * Return: 0
 */

void rev_string(char *ch)
{
	int x, y, z, q;

	x = 0;

	while (ch[x] != '\0')
	{
		x++;
	}
	z = 0;
	y = x - 1;

	while (z < y)
	{
		q = ch[z];
		ch[z] = ch[y];
		ch[y] = q;
		z++;
		y--;
	}
}
