#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int a, b;

	for(a = 1; a <= 3; a++)
	{
		for (b = 1; b <= 12; b++)
		{
			if ((a == 1) || (a == 3) || (b == 1) || (b == 12))
			{
				printf("*");
			}
			else
			{
				printf(" ");
			}
		}
		printf("\n");
	}
	system("pause");
	return 0;
}