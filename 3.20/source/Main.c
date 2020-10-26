#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	float money ,total;
	int hours;
	printf("Enter # of hours worked¡]-1 to end¡^¡G");
	scanf_s("%d", &hours);


	while (hours != -1)
	{

		printf("Enter hourly rate of the worker¡G");
		scanf_s("%f", &money);
		if (hours >= 40)
		{
			total = (money * 40) + ((money *1.5) * (hours - 40));
		}
		else
		{
			total = hours * money;
		}
		printf("Salary is¡G$%.2f\n\n", total);
		printf("Enter # of hours worked¡]-1 to end¡^¡G");
		scanf_s("%d", &hours);
	}
	if (hours == -1)
	{
		system("pause");
		return 0;
	}

}