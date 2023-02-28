#include "main.h"

/**
 *  _strlen - to return the lenght of a string
 *  @s: check string lenght
 *  Return: 0
 */
int _strlen(char *s)
{
	int a = 0;  /* start the counter from 0*/

	for (; *s++;)
		a++;
	return (a);
}
