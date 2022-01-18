#include <stdio.h>

int car(int sum)
{
	int money = 0;

	money = sum*35/100;
	printf("На автомобиль:  %d\n", money);

	/* создание файла */
	FILE * file;
	const char *filename = "source/txt/car.txt";
	const char *mode = "a";
	file = fopen(filename, mode);

	/* запись инфо. в файл car.txt*/
	fprintf(file, "%d ", money);

	fclose(file);

	return money;
}
