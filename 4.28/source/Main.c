#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int code;
	printf("Please enter your own pay code¡G");
	scanf_s("%d",&code);

	switch (code)
	{
	case 1:
		printf("You are a manager, you can receive a fixed weekly salary.\n");
	break;
	case 2:
		printf("You are a  hourly wokers, you can recive a fixed hourly wage for up to the first 40 hours worked.\n");
	break;
	case 3:
		printf("You are a commission workers, you can receive $250 puls 5.7¢H of their gross weekly sales.\n");
	break;
	case 4:
		printf("You are a pieceworker, you can receive a fixed amount of money for each of the item they produce each pieceworker.\n");
	break;
	default: break;
		
	}
	system("pause");
	return 0;

}
