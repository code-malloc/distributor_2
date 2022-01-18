#include <stdio.h>
 
int car_t()
{
    int num, sum;

	/* считывание файла */
	FILE * file;
	const char *filename = "source/txt/car.txt";
	const char *mode = "r";

	/////////////////////////////////////////////////////
	/* сумма */
	num=0, sum=0;

	file = fopen(filename, mode);
    while(fscanf(file, "%d", &num) == 1)
	{
        sum += num;
	}	
	printf("На автомобиль: %d\n" , sum);

	/////////////////////////////////////////////////////
	/* вывод содержимого файла */
	num=0;

	file = fopen(filename, mode);
    while (!feof(file) && !ferror(file))	
    {
        num = getc(file);
        if (num != EOF)
        {
            putchar(num);
        }
    }

	return 0;
}
