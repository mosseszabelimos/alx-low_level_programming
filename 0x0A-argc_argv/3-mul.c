#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * main - prints the multiplication of two numbers
 * @argc: argument 1
 * @argv: argument 2
 * Return: 1 or 0
 */

int main(int argc, char *argv[])
{
	int x, y;

	if (argc == 3)
	{
		x = atoi(argv[1]);
		y = atoi(argv[2]);
		printf("%d\n", x * y);
	return (0);
	}
	printf("Error\n");
	return (1);
}

