#include "main.h"
/**
 * _puts - print a string followed by a new line to the stdout
 * @str: the string to print
 * Return: 0
 */

void _puts(char *str)
{
	int a = 0;

	while (str[a] != '\0')
	{
		_putchar(str[a]);
			a++;
	}

	_putchar('\n');
}
