#include <stdio.h>
#include <stdlib.h>
#define swap(x,y) {int t;t=x;x=y;y=t;}
int main()
{

	int N;
	scanf("%d", &N);
	getchar();
	while (N--) {
		int x, y;
		scanf("%d%d", &x, &y);
		getchar();
		printf("Before Swap: x=%d, y=%d\n", x, y);
		swap(x, y);
		printf("After Swap: x=%d, y=%d\n\n", x, y);
	}
	return 0;
}




