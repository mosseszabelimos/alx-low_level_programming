#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 * chk_number - check if thery are a number
 * @ch: string
 * Return: value 0 or 1
 */

int chk_number(char *ch)
{
	unsigned int c;

	c = 0;

	while (c < strlen(ch))
	{
		if (!isdigit(ch[c]))
		{
			return (0);
		}
		c++;
	}
	return (1);
}

/**
 * main - function
 * @argc: argument 1
 * @argv: argument 2
 * Return: value 0 or 1
 */

int main(int argc, char *argv[])
{
	int c;
	int cc;
	int tot;

	c = 1;

	while (c < argc)
	{
		if (chk_number(argv[c]))
		{
			cc = atoi(argv[c]);
			tot += cc;
		}
		else
		{
			printf("Error\n");
			return (1);
		}
		c++;
	}
	printf("%d\n", tot);
	return (0);
}
