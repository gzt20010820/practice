#include <stdio.h>
int main()
{
	char x,y ;

	printf("������һ������ת����Сд��ĸ�Ĵ�д��ĸ��\n");
	scanf_s("%c", &x);                         /*����ֱ���á�x = getchar();��*/
	
	y = x + 32;

	printf("�õ���Сд��ĸ�ǣ�% c\n", y);      /*�������á�printf("",);��,���á�putchar(y);��*/
	
	return 0;

}