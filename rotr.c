#include "monty.h"

/**
 * f_rotr - rotates the stack to thebottom.
 * @head: stack head
 * @counter: line_number
 * Return: no return
 */
void f_rotr(stack1_t **head, unsigned int counter)
{
	stack1_t *copy = *head;
	
	(void)counter;

	copy = *head;
	if (*head == NULL || (*head)->next == NULL)
		return;
	while (copy->next)
	{
		copy = copy->next;
	}
	copy->next = *head;
	copy->prev->next = NULL;
	copy->prev = NULL;
	(*head)->prev = copy;
	(*head) = copy;
}
