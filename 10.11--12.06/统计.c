#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void count(char rec[]);
int main() {
	int N;//用来接收多少组数据的N
	scanf("%d", &N);
	getchar();
	while (N--) {
		char rec[100];//表示接收到的字符数组
		scanf("%[^#]", rec);
		getchar();
		getchar();
		count(rec);
	}
	
	
	//system("pause");
	return 0;
}

void count(char rec[]) {//传入的是字符数组
	int result[12] = { 0 };
	//该整型数组，有12个元素，分别存储数字、字母、其他、出现的次数，即数组的每个元素就是计数器
	//首先计算长度
	int length = 0;
	while (rec[length] != '\0') {
		length++;
	}
	//经过while循环后，得到的值即为字符数组的length
	for (int i = 0; i < length; i++) {
		char ch = rec[i];
		if (ch == '0') {
			result[0]++;
		}
		else if (ch == '1') {
			result[1]++;
		}
		else if (ch == '2') {
			result[2]++;
		}
		else if (ch == '3') {
			result[3]++;
		}
		else if (ch == '4') {
			result[4]++;
		}
		else if (ch == '5') {
			result[5]++;
		}
		else if (ch == '6') {
			result[6]++;
		}
		else if (ch == '7') {
			result[7]++;
		}
		else if (ch == '8') {
			result[8]++;
		}
		else if (ch == '9') {
			result[9]++;
		}
		else if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) {
			result[10]++;
		}
		else {
			result[11]++;
		}
	}

	for (int i = 0; i < 10; i++) {
		printf("Number %d: %d\n",i,result[i]);
	}
	printf("characters: %d\n", result[10]);
	printf("others: %d\n\n", result[11]);
	return;
}
