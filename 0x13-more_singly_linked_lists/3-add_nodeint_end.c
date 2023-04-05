#include "lists.h"

/**
 * add_nodeint_end - add a new node at the end
 * of a linked list
 * @head: head of a list.
 * @n: n element.
 *
 * Return: address of the new element.
 * NUll if it failed.
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *lastNode = NULL;
	listint_t *node = *head;

	lastNode = malloc(sizeof(listint_t));
	if (lastNode == NULL)
		return (NULL);
	lastNode->n = n;
	lastNode->next = NULL;

	if (*head == NULL)
	{
		*head = lastNode;
		return (lastNode);
	}
	while (node->next != NULL)
		node = node->next;
	node->next = lastNode;
	return (lastNode);
}
