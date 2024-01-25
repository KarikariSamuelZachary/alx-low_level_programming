#include "lists.h"
/**
 * print_dlistint - Prints all the nodes of doubly linked list
 * @m: pointer to node structure
 * Return: the number of nodes
 */
size_t print_dlistint(const dlistint_t *m)
{
	int node_add = 0;

	while (m != NULL)
	{
		printf("%d\n", m->n);
		m = m->next;
		node_add++;
	}
	return (node_add);
}
