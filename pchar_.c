#include "monty.h"
/**
 * f_pchar - char at top of stack prints,
 * followed by new line
 * @head: head stack
 * @counter: line_number
 * Return: none
 */
void f_pchar(stack_t **head, unsigned int counter)
{
	stack_t *h;

	h = *head;
	if (!h)
	{
		fprintf(stderr, "L%d: cant pchar, empty stack\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	if (h->n > 127 | | h->n < 0)
	{
		fprintf(stderr, "L%d: cant pchar, value ot of range\n", counter)
		fclose(bus.file);
		free(bus.content);
		exit(EXIT_FAILURE);
	}
	printf("%c\n", h->n);
}
