#include "monty.h"

void swap(stack_t **stack, unsigned int line_number)
{
		(void) stack;
		(void) line_number;
}
int _swap(stack_t **head, unsigned int line_number)
{
		stack_t *node1 = NULL;
		stack_t *node2 = NULL;
		int exit_code = EXIT_SUCCESS;

		if (*head == NULL)
		{
				fprintf(stderr, "L%d: can't swap, stack too short\n", line_number);
				exit_code = EXIT_FAILURE;
		}
		node1 = *head;
		node2 = (*head)->next;

		node1->next = node2->next;
		node2->prev = NULL;
		node2->next = node1;
		node1->prev = node2;

		*head = node2;
		return (exit_code);
}
