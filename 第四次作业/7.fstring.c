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
		if (s[i] != c)/*������Ҫ��ĵ����ַ��ŵ������ַ�����*/
			t[flag] = s[i];
	t[flag + 1] = '\0';
	strcpy(s, t);/*�������ַ�������Ŀ���ַ���*/
}
void strreverse(char s[100])
{
	int i, flag = 0, temp;
	for (i = 0;s[i] != '\0';i++, flag++)/*ȷ���ַ��ĳ����Ա��������ѭ��*/
		;
	for (i = 0;i < flag - i;i++)/*������Ӧλ�õ��ַ�*/
	{
		temp = s[i];
		s[i] = s[flag - i];
		s[flag - 1] = temp;
	}
}