#include "monty.h"

int caller(stack_t **head, char *opcode, char *operand, unsigned int line_number)
{
		int exit_code = EXIT_SUCCESS;

		if (strcmp(opcode, "push") == 0)
		{
				exit_code = _push(head, line_number, operand);
		}
		else if (strcmp(opcode, "pall") == 0)
		{
				exit_code = _pall(head);
		}
		else if (strcmp(opcode, "pint") == 0)
		{
				exit_code = _pint(head, line_number);
		}
		else if (strcmp(opcode, "pop") == 0)
		{
				exit_code = _pop(head, line_number);
		}
		else if (strcmp(opcode, "swap") == 0)
		{
				exit_code = _swap(head, line_number);
		}
		else if (strcmp(opcode, "add_two") == 0)
		{
				exit_code = _add_two(head, line_number);
		}

		return (exit_code);
}

