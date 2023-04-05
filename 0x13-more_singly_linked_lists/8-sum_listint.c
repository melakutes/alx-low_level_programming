#include "lists.h"

/**
 * sum_listint -Calculate and returns the sum of all the data (n)
 * of a linked list.
 * @head: head of a list.
 *
 * Return: sum of all the data (n).
 */

int sum_listint(listint_t *head)
{
	listint_t *temp = head;
	int sum = 0;

	if (temp == NULL)
		return (0);
	while (temp != NULL)
	{
		sum += temp->n;
		temp = temp->next;
	}
	return (sum);
}
