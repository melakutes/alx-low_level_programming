#include <string.h>
#include <stdlib.h>
#include "lists.h"
/**
 * _strlen - Calculates length of a string
 * @s: string
 *
 * Return: length of the string
 */
int _strlen(const char *s)
{
	int len = 0;

	while (s[len] != '\0')
		len++;
	return (len);
}
/**
 * add_node - Adds a new node at the beginning
 * @str: String of the new node
 * @head: address of the head element
 *
 * Return: Address of the new element
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	new->str = strdup(str);
	new->len = _strlen(str);
	new->next = *head;
	*head = new;
	return (new);
}
