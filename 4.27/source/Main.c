#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int a, b, c, e;
	float d;

	for (a = 2; a <= 16; a++)
	{
		for (b = 2; b <= 16; b++)
		{
			for (c = 2; c <= 23; c++) 
			{
				if ((c * c) == ((a * a) + (b * b)))
				{
					printf("�����T���ΤT�䬰�G%d %d %d \t����M���G%d\n", a, b, c,(c*c));
				}
			}			
		}
	}
	system("pause");
	return 0;
}