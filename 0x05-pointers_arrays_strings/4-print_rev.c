#include "main.h"

/**
 * print_rev - write a function that  print a string in reverse
 * @s: the string to be printed
 */
void print_rev(char *s)
{
	int a, b;

	b = 0;
	while (s[b] != '\0')
		b++;
	for (a = b - 1; a >= 0; a--)
	{
		_putchar(s[a]);
	}
	_putchar('\n');
}





