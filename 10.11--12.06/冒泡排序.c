#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void ascend(int arr[]);
void descend(int arr[]);
int main() {
	int N;//用来接收多少组数据
	int symbol;//用来接收每组数据的第一位数字
	int arr[10];//每组数据后面的十个待排序的数字
	int i, j;
	scanf("%d", &N);
	for (i = 0; i < N; i++) {
		scanf("%d", &symbol);//先得到标志位
		for (j = 0; j < 10; j++) {
			scanf("%d", &arr[j]);//再得到一组数据
		}
		if (symbol == 1) {//根据标志位，选择升序还是降序
			ascend(arr);
		}
		else {
			descend(arr);
		}
	}

	//system("pause");
	return 0;
}

void ascend(int arr[]) {//升序
	int temp;
	int i, j;
	int flag = 0;//表示是否进行过交换，0表示没有交换
	for (i = 0; i < 10 - 1; i++) {
		for (j = 0; j < 10 - 1 - i; j++) {
			if (arr[j] > arr[j + 1]) {
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
				flag = 1;
			}
		}
		if (flag == 0) {//表示数组没有发生过交换，已经是排好序的
			break;
		}
		else {
			flag = 0;//为了下一次使用flag，恢复原位
		}
	}
	printf("Ascending order: ");
	for (i = 0; i < 10; i++) {
		printf("%d ", arr[i]);
	}
	printf("\n");
}
void descend(int arr[]) {//降序
	int temp;
	int i, j;
	int flag = 0;
	for (i = 0; i < 10 - 1; i++) {
		for (j = 0; j < 10 - 1 - i; j++) {
			if (arr[j] < arr[j + 1]) {
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
				flag = 1;
			}
		}
		if (flag == 0) {
			break;
		}
		else {
			flag = 0;
		}
	}
	printf("Descending order: ");
	for (i = 0; i < 10; i++) {
		printf("%d ", arr[i]);
	}
	printf("\n");

}
