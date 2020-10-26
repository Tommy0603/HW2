#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	float interest, principal, rate;
	int days;
	printf("Enter loan principal¡]-1 to end¡^¡G");
	scanf_s("%f", &principal);


	while (principal != -1)
	{

		printf("Enter interest rate¡G");
		scanf_s("%f", &rate);
		printf("Enter term of the loan in day¡G");
		scanf_s("%d", &days);
		interest = ((principal * rate) * days) / 365;
		printf("The interest charge is¡G$%.2f\n\n",interest);
		printf("Enter loan principal¡]-1 to end¡^¡G");
		scanf_s("%f", &principal);
	}
	if (principal == -1)
	{
		system("pause");
		return 0;
	}

}