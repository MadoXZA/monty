#include "monty.h"
/**
 * f_pop - top prints
 * @head: head stack
 * @counter: line_number
 * Return: none
 */
void f_pop(stack_t **head, unsigned int counter)
{
	stack_t *h;

	if (*head == NULL)
	{
		fprintf(stderr, "L%d: cant pop an mpty stack\n", counter);
		flocse(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	h = *head;
	*head = h->next;
	free(h);
}
