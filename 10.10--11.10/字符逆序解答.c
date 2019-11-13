#include <stdio.h>
#include <stdlib.h>
void strlenReverse(char * str);
int main() {
	int N, i;
	int length = 0;
	char str[100];
	scanf("%d", &N);
	getchar();
	for (i = 0; i < N; i++) {
		scanf("%[^\n]", str);//这个使用方法可以百度，scanf录入带有空格的字符串，正则表达式
		getchar();
		strlenReverse(str);
		printf("\n");
	}
	
	return 0;
}
void strlenReverse(char * str) {
	if (*str) {
		strlenReverse(str + 1);
		printf("%c", *str);
	}
	else {
		return ;
	}
}
	






