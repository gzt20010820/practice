#include<stdio.h>
#include<string.h>
#include"fstring.c"
int main()
{
	int flag;
	char a, str[100], del;
	while (1)/*���û�����N��nʱ����ѭ��*/
	{
		printf("1.Reverse a string.\n");
		printf("2.Delete a character in a string.\n");
		printf("Please input your choice:");/*ѡ�����*/
		scanf_s("%d", &flag);
		printf("Enter a string:");/*��������*/
		gets(str);
		if (flag == 1)/*1��ִ���ַ�����ת����*/
		{
			strreverse(str);
			printf("Reversed string is:%s", str);
		}
		else if (flag == 2)/*2��ִ��ɾ���ַ�����*/
		{
			printf("Enter a character you want to delete:");
			scanf_s("%c", &del);
			delchar(str, del);
			printf("Deleted string is %s", str);
		}
		printf("Would you like to continue?(y/n)");/*ѡ���Ƿ����ִ�й���*/
		scanf_s("%c", &a);
		if (a == 'n' || a == 'N')/*����N��nʱ����*/
			break;
	}

	return 0;
}