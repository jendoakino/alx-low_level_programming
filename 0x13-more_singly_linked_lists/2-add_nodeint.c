#include "lists.h"

/**
 * add_nodeint - adds a new node at the beginning of a linked list
 * @head: pointer to the first node in the list
 * @n:the  data to insert in that new node
 *
 * Return: pointer to the new node,  NULL if it fails
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *new_node;

/* Allocate memory for the new node */
new_node = malloc(sizeof(listint_t));
if (new_node == NULL)
return (NULL);


new_node->n = n;
new_node->next = *head;


*head = new_node;

/* Return a pointer to the new node */
return (new_node);
}

