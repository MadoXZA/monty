#include "monty.h"
void f_swap(stack_t **head, unsigned int counter)
{
    if (*head == NULL || (*head)->next == NULL)
    {
        fprintf(stderr, "L%d: can't swap, too short stack\n", counter);
        fclose(bus.file);
        free(bus.content);
        free_stack(*head);
        exit(EXIT_FAILURE);
    }

    stack_t *top = *head;
    stack_t *second = top->next;

    top->prev = second;
    top->next = second->next;
    second->prev = NULL;
    second->next = top;

    if (top->next != NULL)
        top->next->prev = top;

   *head = second;
}
