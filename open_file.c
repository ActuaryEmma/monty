#include "monty.h"

FILE *open_file(char *fileName)
{
		FILE *file;
		file = fopen(fileName, "r");

		if (file == NULL)
		{
				fprintf(stderr, "Error: Can't open file %s\n", fileName);
		}
		return (file);
}
