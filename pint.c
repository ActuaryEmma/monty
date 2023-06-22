#include "monty.h"
/**
  * pint - return the top value in the stack
  * @stack: pointer to the top of the stack
  * @line_number: the number of a line in a file
  * Return: void
  */
void pint(stack_t **stack, unsigned int line_number)
{
	(void) stack;
	(void) line_number;
}

/**
  * _pint - return the top value in the stack
  * @head: pointer to the top of the stack
  * @line_number: the number of a line in a file
  * Return: EXIT_SUCCESS on success else EXIT_FAILURE
  */
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
