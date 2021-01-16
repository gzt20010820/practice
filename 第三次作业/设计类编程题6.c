#include<stdio.h>
#include<math.h>
#define ROW 10/*测试暂时用2行*/
#define COLUMN 7
int main()
{
	printf("请输入10个学生的各科成绩：\n");
	int str[ROW][COLUMN], num=1, sum = 0, ave, i, j, flag = 1;
	/*输入三个学生的各科成绩*/
	/*for (i = 0;i < ROW;i++)
		for (j = 0;j < 4;j++)
		{
			if (j == 0)
			{
				num = i +1;
				printf("%d   ", num);
				break;
			}
			scanf_s("%d", &str[i][j]);
		}*/
	for (i = 0;i < ROW;i++)/*输入二维成绩数组*/
	{
		str[i][3] = 0;
		str[i][4] = 0;
		str[i][5] = 'Y';
		for (j = 0;j < 3;j++)
		{
			scanf_s("%d", &str[i][j]);
			str[i][3] += str[i][j];/*求和*/
			str[i][4] = str[i][3] / (j + 1);/*求平均值*/
			if (str[i][j] <= 90)/*判断*/
				str[i][5] = 'N';
		}
	}
	printf("NO\tMT\tEN\tPH\tSUM\tAVE\t>90\n");/*输出表头*/
	printf("---------------------------------------------------\n");
	for (i = 0;i < ROW;i++)/*输出数组*/
	{
		printf("%d\t", num);/*输出学生序号*/
		num++;
		for (j = 1;j < COLUMN-1;j++)/*输出成绩*/
			printf("%d\t", str[i][j - 1]);
		if (j == COLUMN - 1)/*用字符型输出平均成绩是否大于90*/
			printf("%c\n", str[i][j - 1]);
	}
	return 0;
}