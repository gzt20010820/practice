#include<stdio.h>
#include<string.h>
#include<conio.h>
#define N 10
void sort(char *s[N], int n)
{
	int i,j;
	char temp[100];/*���彻����������*/
	for (i = 0;i < N-1;i++)/*��ѡ������*/
		for (j = i + 1;j < N;j++)
			if (strlen((s[j])) < strlen((s[i])))
			{
				strcpy(temp, s[j]);/*������Ӧ����ʵ���ַ����Ľ���*/
				strcpy(s[j], s[i]);
				strcpy(s[i], temp);
			}
}

int main()
{
	char a[N][100];/*����һ����ά����Ϊʮ�Ķ�ά�ַ�����*/
	char* s[N];
	int i;
	printf("Please input 10 char arrays with different lenths:\n");
	for (i = 0;i < N;i++)/*����*/
		gets(a[i]);
	for (i = 0;i < N;i++)
		s[i] = a+i;
	sort(s, 100);/*�����Զ��庯��*/
	printf("The result is:\n");
	for (i = 0;i < N;i++)
		printf("%s\n",a[i]);/*���*/
	getch();
	return 0;
}