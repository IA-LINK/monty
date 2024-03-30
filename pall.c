#include "monty.h"
/**
 * pall_func - pall print all node
 * @stack: the data structure
 * @line_number: line number
 * Return: done
 */
void pall_func(stack1_t **head, unsigned int counter)
{
	stack1_t *h = *head;
	(void)counter;
	(void)head;

	h = *head;
	if (h == NULL)
		return;
	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
}
