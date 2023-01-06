#include <stdio.h>
#include <stdlib.h>

/**
 * main - function
 * @argc: argument 1
 * @argv: argument 2
 * Return: value 0 or 1
 */

int main(int argc, char *argv[])
{
	int x, y, z, tot;

	int ar[] = {25, 10, 5, 2, 1};
	x = 0;
	tot =0;
       	y = 0;
	z = 0;
	
	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	tot = atoi(argv[1]);
	if (tot <= 0)
	{
		printf("0\n");
		return (0);
	}
	while (ar[x] != '\0')
	{
		if (tot >= ar[x])
		{
			z = (tot /ar[x]);
			y += z;
			tot = ar[x] * z;
		}
		x++;
	}
	printf("%d\n", y);
	return (0);
}
