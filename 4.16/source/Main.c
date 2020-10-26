#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int a, b,c;
	printf("¡]1¡^\n");
	for (a = 1; a <= 10; a++)
	{
		for (b = 1; b <= a; b++)
		{
			printf("*");
		}
		printf("\n");
	}
	printf("¡]2¡^\n");
	for (a = 0; a < 10; a++)
	{
		for (b = 1; b <= (10 - a); b++)
		{
			printf("*");
		}
		printf("\n");
	}
	printf("¡]3¡^\n");
	for (a = 1; a <= 10; a++)
	{
		for (b = 1; b < a; b++)
		{
			printf(" ");
		}
		for (c = 0; c <= (10 - a); c++)
		{
			printf("*");
		}
		printf("\n");
	}
	printf("¡]4¡^\n");
	for (a = 1; a <= 10; a++)
	{
		for (c = 0; c < (10 - a); c++)
		{
			printf(" ");
		}
		for (b = 1; b <= a; b++)
		{
			printf("*");
		}
		printf("\n");
	}
	system("pause");
	return 0;
}