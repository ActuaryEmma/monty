#include "monty.h"
void pint(stack_t **stack, unsigned int line_number)
{
		(void) stack;
		(void) line_number;
}
int _pint(stack_t **head, unsigned int line_number)
{
		int exit_code = EXIT_SUCCESS;

		if (*head == NULL)
		{
				fprintf(stderr, "L%d: can't pint, stack empty\n", line_number);
				exit_code = EXIT_FAILURE;
		}
		printf("%d\n", (*head)->n);
		return (exit_code);
}
