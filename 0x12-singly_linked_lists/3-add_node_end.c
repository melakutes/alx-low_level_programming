#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
 * _strlen - Calculates length of a string
 * @str: string
 *
 * Return: Length of the string
 */
int _strlen(const char *str)
{
	int len = 0;

	while (str[len] != '\0')
		len++;
	return (len);
}
/**
 * add_node_end - A function that adds a new node at the end of a list
 * @head: head element
 * @str: Data of the new node
 *
 * Return: Address of the new element
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new;
	list_t *last = *head;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	new->str = strdup(str);
	new->len = _strlen(str);
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}
	while (last->next != NULL)
		last = last->next;
	last->next = new;
	return (new);
}
