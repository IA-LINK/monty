#include "monty.h"

/**
 * f_pall - prints the stack
 * @head: stack head
 * @counter: no used
 * Return: no return
 */
void f_pall(stack1_t **head, unsigned int counter)
{
	stack1_t *h;
	(void)counter;

	h = *head;
	if (h == NULL)
		return;
	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
}
