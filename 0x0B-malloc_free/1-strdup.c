#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup -  returns a pointer to a newly allocated space in memory
 * @str: entry
 * Return: value 0 or 1
 */

char *_strdup(char *str)
{
	char *ch;

	int x, s = 0;

	if (str == NULL)
		return (NULL);
	x = 0;

	while (str[x] != '\0')
		x++;

	ch = malloc(sizeof(char) * (x + 1));

	if (ch == NULL)
		return (NULL);
	for (s = 0; str[s]; s++)
		ch[s] = str[s];
	return (ch);
}


