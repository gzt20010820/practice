#include<stdio.h>
#include<string.h>
#include"fstring.c"
int main()
{
	int flag;
	char a, str[100], del;
	while (1)/*当用户输入N或n时结束循环*/
	{
		printf("1.Reverse a string.\n");
		printf("2.Delete a character in a string.\n");
		printf("Please input your choice:");/*选择操作*/
		scanf_s("%d", &flag);
		printf("Enter a string:");/*输入数组*/
		gets(str);
		if (flag == 1)/*1：执行字符串反转功能*/
		{
			strreverse(str);
			printf("Reversed string is:%s", str);
		}
		else if (flag == 2)/*2：执行删除字符功能*/
		{
			printf("Enter a character you want to delete:");
			scanf_s("%c", &del);
			delchar(str, del);
			printf("Deleted string is %s", str);
		}
		printf("Would you like to continue?(y/n)");/*选择是否继续执行功能*/
		scanf_s("%c", &a);
		if (a == 'n' || a == 'N')/*输入N或n时结束*/
			break;
	}

	return 0;
}