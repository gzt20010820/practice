#include<stdio.h>
#include<string.h>
#include<conio.h>
#define N 10
#define M 80
void input(char p[N][M],int len)/*利用二维字符数组*/
{
	int n = 0;
	printf("Input %d strings:\n", len);/*交互*/
	while (n < len)
		gets(p[n++]);/*输入字符数组*/
}
void min_str(char(*str)[M], int len)/*使用一维数组指针变量*/
{
	char* min, (*p)[M], temp[M];
	min = str[0];
	for (p = str + 1;p < str + len;p++)
		if (strlen(*p)<strlen(min))/*比较相应字符数组的长度*/
			min = *p;
	strcpy(temp, min);/*交换第一个字符数组和最短的字符数组*/
	strcpy(min, *str);
	strcpy(*str, temp);
}
void output(char s[][M], int len)
{
	int n;
	printf("\nThe result is:\n");
	for (n = 0;n < len;n++)
		printf("%s\n", s[n]);
}
void main()
{
	char str[N][M];
	int n;
	printf("Input n (<10):");/*输入数组的数量*/
	scanf_s("%d", &n);
	getchar();
	input(str, n);/*调用输入函数*/
	min_str(str,n);/*调用最小值函数*/
	output(str, n);/*输出交换后的数组*/
	printf("\n\nPress any key to continue...\\(^._.^)/...");//(May my teacher no see this.hahahaha)//
	getch();
}
//版权所有，翻版必究（^-.-^）//