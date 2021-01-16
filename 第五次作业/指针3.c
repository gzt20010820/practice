#include<stdio.h>
#include<string.h>
#include<conio.h>
#define N 10
void sort(char *s[N], int n)
{
	int i,j;
	char temp[100];/*定义交换辅助数组*/
	for (i = 0;i < N-1;i++)/*简单选择排序*/
		for (j = i + 1;j < N;j++)
			if (strlen((s[j])) < strlen((s[i])))
			{
				strcpy(temp, s[j]);/*利用相应函数实现字符串的交换*/
				strcpy(s[j], s[i]);
				strcpy(s[i], temp);
			}
}

int main()
{
	char a[N][100];/*定义一个二维长度为十的二维字符数组*/
	char* s[N];
	int i;
	printf("Please input 10 char arrays with different lenths:\n");
	for (i = 0;i < N;i++)/*输入*/
		gets(a[i]);
	for (i = 0;i < N;i++)
		s[i] = a+i;
	sort(s, 100);/*调用自定义函数*/
	printf("The result is:\n");
	for (i = 0;i < N;i++)
		printf("%s\n",a[i]);/*输出*/
	getch();
	return 0;
}