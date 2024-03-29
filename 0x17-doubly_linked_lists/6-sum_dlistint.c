#include "lists.h"

/**
 * sum_dlistint - returns the a_sum of all the data (n) of a dlistint_t list.
 * @pls: pointer to the list.
 * Return: a sum of all data in the list, 0 if the lost is empty.
 */

int sum_dlistint(dlistint_t *pls)
{
	dlistint_t *node = pls;
	int a_sum = 0;

	while (node)
	{
		a_sum += node->n;
		node = node->next;
	}

	return (a_sum);
}
