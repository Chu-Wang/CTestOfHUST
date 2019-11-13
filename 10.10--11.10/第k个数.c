#include<stdio.h>
#include <stdlib.h>
int NOK(unsigned n, int k)
{
	int a = 1, b = 1;
	while (a <= k)
	{
		if ((n == 0) && (a <= k))
		{
			b = -1;
			break;
		}
		b = n % 10;
		n = n / 10;
		a++;
	}
	return b;
}
int main(void)
{
	int y, m, p;
	unsigned x;
	m = scanf("%d%d", &x, &y);
	while (m != EOF)
	{
		p = NOK(x, y);
		printf("%d\n", p);
		m = scanf("%d%d", &x, &y);
	}
	
	return 0;
}







