#include <stdio.h>

int food(int sum)
{
	int money = 0;

	money = sum*15/100;
	printf("На еду:  %d\n", money);

	/* создание файла */
	FILE * file;
	const char *filename = "source/txt/food.txt";
	const char *mode = "a";
	file = fopen(filename, mode);

	/* запись инфо. в файл food.txt*/
	fprintf(file, "%d ", money);

	fclose(file);

	return money;
}
