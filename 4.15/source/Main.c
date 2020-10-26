#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int a;
	float b = 1, c, d;
	for (d = 0.1; d <= 0.125; d += 0.005)
	{
		for (a = 1; a <= 15; a++)
		{
			b = b * (1 + d);
		}
		c = 5000 * b;
		printf("³Ì²×ª÷ÃB¡G%.2f\n", c);
		b = 1;
	}
}