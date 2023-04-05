#include "lists.h"

/**
 * sum_listint - returns the sum of all the data (n) of a listint_t linked list
 * @head: pointer to the head node of the linked list
 * Return: sum of all the data in the linked list, or 0 if the list is empty
 */

int sum_listint(listint_t *head)
{
listint_t *temp;
int sum = 0;

for (temp = head; temp != NULL; temp = temp->next)
{
sum += temp->n;
}

return (sum);
}
