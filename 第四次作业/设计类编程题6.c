#include<stdio.h>
#include<string.h>
void input(int s[20], char name[20][100])
{
	int i;
	printf("Please input 20 students and their mark:\n");
	for (i = 0;i < 20;i++)/*输入学生的姓名和成绩*//*应提供多种输入方式！！*/
	{
		gets(name[i]);
		scanf_s("%d", &s[i]);	
	}
}
void sort(int x[20], char y[20][100])
{
	int i,j,temp;
	char t[100];
	for (i = 0;i < 19;i++)/*降序排列*/
		for (j = 19;j > 0;j--)
			if (x[j] > x[j - 1])
			{
				temp = x[j - 1];/*交换成绩*/
				x[j - 1] = x[j];
				x[j] = temp;
				strcpy(t, y[j - 1]);/*交换学生姓名*/
				strcpy(y[j-1], y[j]);
				strcpy(y[j], t);
			}
}
void display(int x[20], char y[20][100])
{	
	int i, j;
	for (i = 0;i < 20;i++)/*输出*/
	{
		puts(y[i]);
		printf("%d\n",x[i]);
	}
}
int search(int x[20], char y[20][100], char z[100])
{
	int i, j,flag=0;
	for (i = 0;i < 20;i++)/*利用数组的strcmp函数进行检索*/
	{
		if (strcmp(z, y[i]) == 0)
		{
			flag = x[i];/*将目标成绩赋给返回值*/
			break;
		}
	}
	return (flag);/*返回目标成绩*/
}
int main()
{
	int mark[20],i,j,flag;
	char student[20][100], serstu[100];
	input(mark, student);
	sort(mark, student);
	display(mark, student);
	printf("Please input the student you want to search:\n");
	gets(serstu);/*输入查找的学生*/
	if ((search(mark, student, serstu)) != 0)
	{
		puts(serstu);/*输出目标学生及其成绩*/
		printf("%d", (search(mark, student, serstu)));
	}
	else
		printf("Failed searching!");/*查找失败则提示失败*/
	return 0;
}