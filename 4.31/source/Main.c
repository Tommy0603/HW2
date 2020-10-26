#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	unsigned int a,b,c;
	a = 1;
	for (b = 1; b <= 9; b++)
	{
		for (c = 1; c <= 10; c++)
		{
			if (((c <= (5-b)) || (c >= (5+b))) && (b<=5))
				printf(" ");
			else if(((c <= a) || (c >= (10 - a))) && (b >=6))
				printf(" ");
			else
				printf("*");
		}
		if (b >= 6)
			a++;
		printf("\n");
	}
	system("pause");
	return 0;
}

