#include<stdio.h>
#define N 6//课程数//
#define M 6//学生数//
int average(int a[M][N], int n)
{
	int sum = 0, i;
	for (i = 0;i < M;i++)
		sum += a[M][n-1];
	return (sum / N);
}
void findfail(int a[M][N], int fail[M])
{
	int i, j, k = 0, flag = 0;
	for (i = 0;i < N;i++)
	{
		flag = 0;
		for (j = 0;j < N-1;j++)
			if (a[i][j] < 60)
				flag++;
		if (flag >= 2)
		{
			fail[k] = i;
			fail[k+1]='\0';
			k++;
		}
	}
}
void findgood(int a[M][N], int good[M])
{
	int i, j, k = 0, flag = 0;
	for (i = 0;i < N;i++)
	{
		flag = 0;
		for (j = 0;j < N-1;j++)
			if (a[i][j] >= 90)
				flag++;
		if (flag >= 2)
		{
			good[k] = i;
			good[k+1]='\0';
			k++;
		}
	}
}
int main()
{
	int str[M][N], i, j, x = N, y = M, n, fail[N], good[N];/*定义数组时加上一列作为平均成绩*/
	char studentnum[20];
	for (i = 0;i < M;i++)/*输入学号一维数组及成绩二维数组*/
	{
		printf("第%d名学生的学号：\n",i+1);
		scanf("%s", studentnum);
		for (j = 0;j < N-1;j++)
		{	
			printf("第%d名学生的第%d科成绩：\n",i+1,j+1);
			scanf_s("%d", &str[i][j]);
		}
	}
	for (i = 0;i < M;i++)/*计算平均成绩*/
	{
		str[i][N-1] = 0;
		for (j = 0;j < N-1;j++)
			str[i][N-1] += str[i][j];
		str[i][N - 1] /= N - 1;
	}
	printf("输出第__个科目的平均分：");/*第一个函数操作部分*/
	scanf("%d", &n);
	printf("%d", average(str, n));/*输出处直接调用第一个函数*/
	findfail(str, fail);/*调用第二个函数*/
	printf("成绩较好的学生有：\n");
	for (i = 0;fail[i] != '\0';i++)
	{	
		printf("%s   ", studentnum[fail[i]]);/*分别输出学号*/
		for (j = 0;j < N ;j++)
			printf("%d   ", str[fail[i]][j]);/*分别输出各科成绩及其平均成绩*/
	}
	findgood(str, good);/*调用第三个函数*/
	printf("成绩较好的学生有：\n");
	for (i = 0;good[i] != '\0';i++)
	{
		printf("%s   ", studentnum[good[i]]);/*分别输出学号*/
		for (j = 0;j < N ;j++)
			printf("%d   ", str[good[i]][j]);/*分别输出各科成绩及其平均成绩*/
	}
	return 0;
}