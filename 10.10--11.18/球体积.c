#include <stdio.h>
#include <stdlib.h>
#define PI 3.1415926
#define Ballvol(r) {r = (4 * PI * r * r * r / 3);}
int main()
{

	int m, n, i;
	double r;
	scanf("%d%d", &m, &n);
	getchar();
	while (m >= 0 && n >= 0) {
		printf("radius  volume\n");
		for (i = m; i <= n; i++) {
			double r = (double) i;
			Ballvol(r);
			printf("%-8d%.6lf\n", i, r);
		}
		printf("\n");
		scanf("%d%d", &m, &n);
		getchar();
	}
	
	return 0;
}




