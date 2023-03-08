#include "main.h"

/**
 * _strlen_recursion - gets the lenght of a string
 * @s: string whose lenght is to be calculated
 * Return: lenght of string
 */
int _strlen_recursion(char *s)
{
	return (*s ? (1 + _strlen_recursion(++s)) : 0);
}
