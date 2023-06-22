#include "monty.h"
<<<<<<< HEAD

/**
 * pint - Prints the value at the top of the stack.
 * @stack: Double pointer to the stack's head.
 * @line_number: Line number of the current operation.
 */
void pint(stack_t **stack, unsigned int line_number)
{
	(void)stack;
	(void)line_number;
}

/**
 * _pint - Prints the value at the top of the stack.
 * @head: Double pointer to the stack's head.
 * @line_number: Line number of the current operation.
 * Return: EXIT_SUCCESS if successful, otherwise EXIT_FAILURE.
 */
=======
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
>>>>>>> 36b3a71761a14019ef3d4782f63d397577ff1f63
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
