#include "main.h"

/**
 * reverse_array -  a function that reverses the content of an array of int
 * @n: is the number of element of the array
 * @a: array
 * Return: rev
 */
void reverse_array(int *a, int n)
{
	int i;
	int j;

	for (i = 0; i < n; i++)
	{
		n--;
		j = a[i];
		a[i] = a[n];
		a[n] = j;
	}
}
