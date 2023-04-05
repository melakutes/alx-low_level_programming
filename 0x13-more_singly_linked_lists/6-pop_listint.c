#include "lists.h"

/**
 * pop_listint - deletes the head node of
 * a linked list
 * @head: head of a list.
 *
 * Return: head node's data.
 */

int pop_listint(listint_t **head)
{
	listint_t *temp;
	int num;

	if (*head == NULL || head == NULL)
		return (0);
	if (*head != NULL)
	{
		temp = *head;
		*head = (*head)->next;
		num = temp->n;
		free(temp);
	}
	return (num);
}
