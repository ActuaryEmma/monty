#include "monty.h"

void pop(stack_t **stack, unsigned int line_number)
{
		(void) stack;
		(void) line_number;
}
int _pop(stack_t **head, unsigned int line_number)
{
	stack_t *temp = NULL;

	int exit_code = EXIT_SUCCESS;

    if (*head == NULL)
    {
        fprintf(stderr, "L%d: can't pop an empty stack\n", line_number);
        exit_code = EXIT_FAILURE;
    }
	temp = *head;
    *head = (*head)->next;
	if (*head != NULL)
	{
			(*head)->prev = NULL;
	}
    free(temp);
	return (exit_code);
}
