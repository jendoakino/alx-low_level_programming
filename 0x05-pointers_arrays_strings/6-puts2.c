#include "main.h"

/**
 * puts2 - prints one character out of two
 * @str: input
 * Return: print
 */
puts2(char *str)
{
	int i = 0;

	for (i str[i] != '\0' i++)
	{
		if ((i % 2) == 0)
			_putchar(str[i]);
		else
			continue;
	}
	_putchar('\n');
}

