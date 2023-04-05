/**
 * pop_listint - deletes the head node of a linked list
 * @head: pointer to a pointer to the first element in the linked list
 *
 * Return: the data inside the elements that was deleted,
 * or 0 if the list is empty
 */
int pop_listint(listint_t **head)
{

if (head == NULL || *head == NULL)
return (0);
int num = (*head)->n
listint_t *temp = (*head)->next;
free(*head);
*head = temp;
return (num);
}
