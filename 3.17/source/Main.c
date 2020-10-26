#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int number1;
	float  balance, charge, credit, limit,total;

	printf("Enter account number¡]-1 to end¡^¡G");
	scanf_s("%d", &number1);
	

	while(number1 != -1)
	{ 

		printf("Enter beginning balance¡G");
		scanf_s("%f", &balance);
		printf("Enter total charge¡G");
		scanf_s("%f", &charge);
		printf("Enter total credit¡G");
		scanf_s("%f", &credit);
		printf("Enter credit limit¡G");
		scanf_s("%f", &limit);
		
		total = balance + charge - credit;
		
		if (total > limit)
		{
			printf("Account¡G%d\n", number1);
			printf("Credit Limit¡G%.2f\n", limit);
			printf("Balance¡G%.2f\n", total);
			printf("Credit Limit Exceeded.\n\n");
			printf("Enter account number¡]-1 to end¡^¡G");
			scanf_s("%d", &number1);
		}
		else
		{
			printf("\n");
			printf("Enter account number¡]-1 to end¡^¡G");
			scanf_s("%d", &number1);
		}
		
	}
	if (number1 == -1)
	{
		system("pause");
		return 0;
	}
	
}