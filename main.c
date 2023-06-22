#include "monty.h"

int main(int argc, char *argv[])
{
		char *fileName = NULL;
		FILE *file = NULL;
		int exit_code = EXIT_SUCCESS;

		if (argc != 2)
		{
				fprintf(stderr, "USAGE: monty file\n");
				exit_code = EXIT_FAILURE;
		}
		else
		{
				fileName = argv[1];
				file = open_file(fileName);
				if (file == NULL)
				{
						exit_code = EXIT_FAILURE;
				}
				else
				{
						exit_code = read_file(file);
						close_file(file);
				}
		}
		return (exit_code);
}

