#include <stdio.h>
#include <stdlib.h>
int isPalindrome(char * str, int length);
int main() {
	int N, i, j = 0, res;
	scanf("%d", &N);
	getchar();
	for (i = 0; i < N; i++) {
		int length = 0;
		j=0;
		char str[100];
		scanf("%s", str);
		getchar();
		while (str[j++] != '\0') {
			length++;
		}
		res = isPalindrome(str, length);
		if (res == 1) printf("YES!\n");
		else printf("No!\n");
	}

	return 0;
}
int isPalindrome(char * str, int length) {

	if (length == 0 || length == 1) {
		return 1;
	}

	if (str[0] == str[length - 1]) {
		return isPalindrome(str + 1, length - 2);
	}
	else return 0;
}
