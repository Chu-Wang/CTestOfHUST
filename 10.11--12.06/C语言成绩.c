#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct Student {
	int score;//学生成绩
	char name[20];//学生名字，假设20字节大小
}Student[20];//建立学生结构，假设只能容纳20个学生
int main() {
	int N;//n表示多少组数据
	int i, j;
	while (scanf("%d", &N) != EOF) {//只要遇到的不是文件结束符
		for (i = 0; i < N; i++) {
			scanf("%s%d", Student[i].name, &Student[i].score);//录入成绩和姓名
		}

		for (i = 0; i < N - 1; i++) {//这里使用了简单的冒泡排序，以学生的成绩进行排序,并未设置flag等标志位
			for (j = 0; j < N - 1 - i; j++) {
				if (Student[j].score < Student[j + 1].score) {
					Student[N].score = Student[j].score;
					strcpy(Student[N].name, Student[j].name);
					Student[j].score = Student[j + 1].score;
					strcpy(Student[j].name, Student[j + 1].name);
					Student[j + 1].score = Student[N].score;
					strcpy(Student[j + 1].name, Student[N].name);
				}
			}
		}
		printf("\n");//题目要求的格式，输入和输出之间隔一行
		for (i = 0; i < N; i++) {
			printf("%s %d\n", Student[i].name, Student[i].score);
		}
		printf("\n");//题目要求，每组之间有空行

	}
	//system("pause");
	return 0;
}
