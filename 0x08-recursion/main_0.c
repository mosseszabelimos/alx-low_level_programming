#include <stdio.h>

int wildcmp(char *, char *);

/**
 *  * main - check the code .
 *   *
 *    * Return: Always 0.
 *     */
int main(void)
{
		int r;

			r = wildcmp("school.c", "*.c");
				printf("%d\n", r);
					return (0);
}
