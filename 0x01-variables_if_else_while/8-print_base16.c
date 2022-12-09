#include <stdio.h>
/**
 * main -Entry point
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	char cha1;

	int num;

	cha1 = 'a';
	num = 0;
	while
		(num < 10) {
			putchar(num + '0');
			num++;
		}
	while
		(cha1 <= 'f') {
			putchar(cha1);
			cha1++;
		}
	putchar('\n');
	return (0);
}

