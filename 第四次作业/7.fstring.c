#include<stdio.h>
void delchar(char s[100], char c)
{
	int i, flag;
	char t[100];
	/*for (i = 0;s[i] != '\0';i++)
		if (s[i] == c)
		{
			s[i] = '0';
			flag++;
		}
	for(i=0;flag>0;i)
		if(s[i]=='\0')*/
	for (i = 0, flag = 0;s[i] != '\0';i++, flag++)
		if (s[i] != c)/*将符合要求的单个字符放到辅助字符串中*/
			t[flag] = s[i];
	t[flag + 1] = '\0';
	strcpy(s, t);/*将辅助字符串还给目标字符串*/
}
void strreverse(char s[100])
{
	int i, flag = 0, temp;
	for (i = 0;s[i] != '\0';i++, flag++)/*确定字符的长度以便后续控制循环*/
		;
	for (i = 0;i < flag - i;i++)/*交换对应位置的字符*/
	{
		temp = s[i];
		s[i] = s[flag - i];
		s[flag - 1] = temp;
	}
}