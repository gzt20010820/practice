#include<stdio.h>
#include<string.h>
void input(int s[20], char name[20][100])
{
	int i;
	printf("Please input 20 students and their mark:\n");
	for (i = 0;i < 20;i++)/*����ѧ���������ͳɼ�*//*Ӧ�ṩ�������뷽ʽ����*/
	{
		gets(name[i]);
		scanf_s("%d", &s[i]);	
	}
}
void sort(int x[20], char y[20][100])
{
	int i,j,temp;
	char t[100];
	for (i = 0;i < 19;i++)/*��������*/
		for (j = 19;j > 0;j--)
			if (x[j] > x[j - 1])
			{
				temp = x[j - 1];/*�����ɼ�*/
				x[j - 1] = x[j];
				x[j] = temp;
				strcpy(t, y[j - 1]);/*����ѧ������*/
				strcpy(y[j-1], y[j]);
				strcpy(y[j], t);
			}
}
void display(int x[20], char y[20][100])
{	
	int i, j;
	for (i = 0;i < 20;i++)/*���*/
	{
		puts(y[i]);
		printf("%d\n",x[i]);
	}
}
int search(int x[20], char y[20][100], char z[100])
{
	int i, j,flag=0;
	for (i = 0;i < 20;i++)/*���������strcmp�������м���*/
	{
		if (strcmp(z, y[i]) == 0)
		{
			flag = x[i];/*��Ŀ��ɼ���������ֵ*/
			break;
		}
	}
	return (flag);/*����Ŀ��ɼ�*/
}
int main()
{
	int mark[20],i,j,flag;
	char student[20][100], serstu[100];
	input(mark, student);
	sort(mark, student);
	display(mark, student);
	printf("Please input the student you want to search:\n");
	gets(serstu);/*������ҵ�ѧ��*/
	if ((search(mark, student, serstu)) != 0)
	{
		puts(serstu);/*���Ŀ��ѧ������ɼ�*/
		printf("%d", (search(mark, student, serstu)));
	}
	else
		printf("Failed searching!");/*����ʧ������ʾʧ��*/
	return 0;
}