#include<stdio.h>
#include<string.h>
#include<conio.h>
#define N 10
#define M 80
void input(char p[N][M],int len)/*���ö�ά�ַ�����*/
{
	int n = 0;
	printf("Input %d strings:\n", len);/*����*/
	while (n < len)
		gets(p[n++]);/*�����ַ�����*/
}
void min_str(char(*str)[M], int len)/*ʹ��һά����ָ�����*/
{
	char* min, (*p)[M], temp[M];
	min = str[0];
	for (p = str + 1;p < str + len;p++)
		if (strlen(*p)<strlen(min))/*�Ƚ���Ӧ�ַ�����ĳ���*/
			min = *p;
	strcpy(temp, min);/*������һ���ַ��������̵��ַ�����*/
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
	printf("Input n (<10):");/*�������������*/
	scanf_s("%d", &n);
	getchar();
	input(str, n);/*�������뺯��*/
	min_str(str,n);/*������Сֵ����*/
	output(str, n);/*��������������*/
	printf("\n\nPress any key to continue...\\(^._.^)/...");//(May my teacher no see this.hahahaha)//
	getch();
}
//��Ȩ���У�����ؾ���^-.-^��//