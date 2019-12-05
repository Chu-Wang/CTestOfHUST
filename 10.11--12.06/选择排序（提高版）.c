#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void seclectSort(int arr[], int length, int caseNum);//函数声明
int main() {
	int N;
	int rec[21];//用来接收少于21个整数的数组
	int caseNum = 0;
	while (scanf("%d", &N) != EOF) {
		caseNum++;
		int i = 0;
		for (i = 0; i < N; i++) {
			scanf("%d", &rec[i]);

		}
		getchar();
		seclectSort(rec, N, caseNum);//调用选择排序函数

	}
	//system("pause");
	return 0;
}

void seclectSort(int arr[], int length, int caseNum) {//arr[]为待排序的数组，length是该数组的长度
	int i = 0, k;
	printf("CASE %d:\n", caseNum);
	printf("Original data:");
	for (i = 0; i < length; i++) {
		printf("%5d", arr[i]);
	}
	printf("\n");
	for (i = 0; i < length - 1; i++) {
		int minIndex = i;//用于记录最小值的下标，初始为0
		int min = arr[i];//用于记录最小值，初始值为arr[0]
		int j;
		for (j = i + 1; j < length; j++) {
			if (min > arr[j]) {//如果找到比假定的min还要小的值，那么需要更新最小值
				min = arr[j];
				minIndex = j;
			}
		}
		if (minIndex != 0) {//这段代码的意思是：如果minIndex的值发生了变化，也就是找到了更小的值，
			//那么需要把这个更小的值，放在i处，而把之前位于i处的值挪到最新的最小值所在的下标处
			arr[minIndex] = arr[i];
			arr[i] = min;
		}
		printf("After turn %2d:", i + 1);
		for (k = 0; k < length; k++) {
			printf("%5d", arr[k]);
		}
		printf("\n");

	}
	printf("\n");
	/*for (int i = 0; i < length - 1; i++) {//假如数组有三个数，则先输出两个数，数字后面带有空格
		printf("%d ", arr[i]);
	}
	printf("%d\n", arr[length - 1]);//用于输出最后一个数，最后一个数字后面没有空格，直接是换行
	*/
}
