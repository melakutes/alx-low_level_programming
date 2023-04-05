#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a
 * given position.
 * @head: head of a list.
 * @idx: index of the list where the new node is added.
 * @n: integer element.
 *
 * Return: the address of the new node,
 * or NULL if it failed.
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *insertedNode;
	listint_t *temp = *head;
	size_t count = 0;

	insertedNode = malloc(sizeof(listint_t));
	if (insertedNode == NULL)
		return (NULL);
	insertedNode->n = n;
	insertedNode->next = NULL;
	if (idx == 0)
	{
		insertedNode->next = *head;
		*head = insertedNode;
		return (insertedNode);
	}
	while (temp != NULL)
	{
		if (count == (idx - 1))
		{
			insertedNode->next = temp->next;
			temp->next = insertedNode;
			return (insertedNode);
		}
		count++;
		temp = temp->next;
	}
	return (NULL);
}
