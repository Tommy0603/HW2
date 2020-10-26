#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	float  money, total;

	printf("Enter sales in dollars ¡]-1 to end¡^¡G");
	scanf_s("%f", &money);


	while (money != -1)
	{
		total = (money * 0.09) + 200;
		printf("Salary is¡G$%.2f\n\n",total);
		printf("Enter sales in dollars ¡]-1 to end¡^¡G");
		scanf_s("%f", &money);
	}
	if (money == -1)
	{
		system("pause");
		return 0;
	}

}