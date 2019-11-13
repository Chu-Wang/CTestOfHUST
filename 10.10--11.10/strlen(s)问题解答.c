#include <stdio.h>
#include <stdlib.h>
int strlens(char * str);
int main() {
	int N, i;
	int length = 0;
	char str[100];
	scanf("%d", &N);
	getchar();
	for (i = 0; i < N; i++) {
		scanf("%[^\n]", str);//这个使用方法可以百度，scanf录入带有空格的字符串，正则表达式
		getchar();
		length = strlens(str);
		printf("%d\n", length);
	}
	system("pause");
	return 0;
}
int strlens(char * str) {
	if (*str == '\0') {
		return 0;
	}
	else {
		return 1 + strlens(str + 1);
	}
}
	






