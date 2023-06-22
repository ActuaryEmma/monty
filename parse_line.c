#include "monty.h"

int parse_line(stack_t **head, char *line, unsigned int line_number)
{
		char *opcode = NULL, *operand = NULL;
		int exit_code = EXIT_SUCCESS, index = 0;

		instruction_t instructions[] = {
				{"push", push},
				{"pall", pall},
				{"pint", pint},
				{"pop", pop},
				{"swap", swap},
				{"add_two", add_two},
				{NULL, NULL}
		};
		opcode = strtok(line, DELIM);
		operand = strtok(NULL, DELIM);

		if (opcode != NULL)
		{
				for (; instructions[index].opcode != NULL; index++)
				{
						if (strcmp(instructions[index].opcode, opcode) == 0)
						{
								instructions[index].f(head, line_number);
								exit_code = caller(head, opcode, operand, line_number);
								break;
						}
				}
				if (instructions[index].opcode == NULL)
				{
						fprintf(stderr, "L%d: unknown instruction %s\n", line_number, opcode);
						exit_code = EXIT_FAILURE;
				}
		}
		

		return (exit_code);
}
