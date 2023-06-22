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

		return (exit_code);
}

