#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * argstostr - function that concatinates all the arguments
 * @ac: first entry
 * @av: second entry
 * Return: value 1 or 0
 */

char *argstostr(int ac, char **av)
{

	int x, y, n1, n2;
	char *ch;

	n1 = 0;
	n2 = 0;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (x = 0; x < ac; x++)
	{
		for (y = 0; av[x][y]; y++)
			n2++;
	}
	n2 += ac;
	ch = malloc(sizeof(char) * n2 + 1);

	if (ch == NULL)
		return (NULL);

	for (x = 0; x < ac; x++)
	{
		for (y = 0; av[x][y]; y++)
		{
			ch[n1] = av[x][y];
			n1++;
	}
	if (ch[n1] == '\0')
	{
		ch[n1++] = '\n';
	}
	}
	return (ch);
}
