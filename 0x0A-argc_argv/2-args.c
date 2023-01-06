#include <stdio.h>
#include "main.h"

/**
 * main - print the name of the program
 * @argc: argument 1
 * @argv: argument 2
 * Return: 0 and 1
 */

int main(int argc, char *argv[])
{
	int c = 0;

	if (argc > 0)
	{
		while (c < argc)
		{
			printf("%s\n", argv[c]);
			c++;
		}
	}
	return (0);
}
