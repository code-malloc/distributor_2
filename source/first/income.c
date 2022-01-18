#include <stdio.h>

int income(int sum)
{
	FILE *file;
	const char *filename = "source/txt/income.txt";
	const char *mode = "a";
	
	file = fopen(filename, mode);
	
	fprintf(file, "%d ", sum);
	fclose(file);

	return sum;
}

