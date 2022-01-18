#include <stdio.h>

int black_day(int sum)
{
	int money = 0;

	/* на черный день - 5%*/
	money = sum*5/100;
	printf("Чёрный день:  %d\n", money);

	/* создание файла */
	FILE * file;
	const char *filename = "source/txt/black_day.txt";
	const char *mode = "a";
	file = fopen(filename, mode);

	/* запись инфо. в файл black_day.txt*/
	fprintf(file, "%d ", money);

	fclose(file);

	return money;
}
