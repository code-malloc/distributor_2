#include <stdio.h>
#include "../../header/distributor.h"

int distributor()
{
	int sum;

	printf("Введите сумму: ");
	scanf("%d", &sum);

	income(sum);
	black_day(sum);
	food(sum);
	car(sum);

	return 0;
}
