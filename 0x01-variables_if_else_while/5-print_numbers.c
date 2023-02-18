#include <stdio.h>

/**
 * main - print all single digit numbers of
 * base 10 from 0
 * Return: Aways 0 (success}
 */

int main(void)
{
	int a;

	for (a = 0; a < 10; a++)
	{
		printf("%d", a);
	}

	putchar('\n');

	return (0);
}
