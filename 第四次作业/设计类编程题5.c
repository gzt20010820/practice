#include<stdio.h>
division(int s[2])/*约分函数*/
{	
	int i,flag;
	for (i = 0, flag = 0;i < s[0] && i < s[1];i++)
		while (1)
		{/*如果分子分母都能被i整除，则一直除到分子分母不能被i整除*/
			if (s[0] % i == 0 && s[1] % i == 0)
			{
				s[0] /= i;
				s[1] /= i;
			}
		}
}
int plus(int str1[100],int r[2])/*加*//*str1[4]:分母；str1[5]分子*/
{
	r[0] = str1[1] * str1[3];
	r[1] = (str1[0] * str1[3]) + (str1[2] * str1[1]);
	division(r);
}
int minus(int str1[100],int r[2])/*减*/
{
	r[0] = str1[1] * str1[3];
	r[1] = (str1[0] * str1[3]) - (str1[2] * str1[1]);
	division(r);
}
void multiply(int str1[100],int r[2])/*乘*/
{
	r[0] = str1[0] * str1[2];
	r[1] = str1[1] * str1[3];
	division(r);
}
void divide(int str1[100],int r[2])/*除*/
{	
	r[0] = str1[0] * str1[3];
	r[1] = str1[1] * str1[2];
	division(r);
}
int main()
{
	/*int n0, d0,null,n1,d1,n2,d2,i,flag=0;*/
	int  s[100][10], num[4], r[2] = {0,0}, i, j, flag = 0;
	char str[100],op;
	printf("Input a expression:\n");/*输入表达式*/
	/*for (i = 0;i < 2;i++)	
		scanf_s("%d", &num[i]);
	scanf_s("%c", &op);
	for (i = 2;i < 4;i++)
		scanf_s("%d", &num[i]);*/
	/*scanf_s("%d%d%c%d%d", &num[0], & num[1], & op, & num[2], & num[3]);*/
	/*scanf_s("%d%d", &num[0], &num[1]);
	scanf_s("%c", &op);
	scanf_s("%d%d", &num[2], &num[3]);*/
	scanf_s("%d/%d%c%d/%d", &num[0], &num[1], &op, &num[2], &num[3]);
	switch (op)/*选择函数*/
	{
	case '+':
		plus(num,r);	
		break;
	case'-':
		minus(num,r);
		break;
	case'*':
		multiply(num,r);
		break;
	case'/':
		divide(num,r);
		break;
	}
	/*约分:for (i = 1, flag = 0;(i < str[4] && i < str[5]);i++)
		while (1)
			if (str[4] % i == 0 && str[5] % i == 0)
			{
				str[4] /= i;
				str[5] /= i;
			}
			else break;*/
	printf("%d/%d",r[0],r[1]);/*输出*/
	return 0;


}