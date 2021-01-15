#include <stdio.h>
int main()
{
	char x,y ;

	printf("请输入一个将被转换成小写字母的大写字母：\n");
	scanf_s("%c", &x);                         /*或者直接用“x = getchar();”*/
	
	y = x + 32;

	printf("得到的小写字母是：% c\n", y);      /*或者先用“printf("",);”,再用“putchar(y);”*/
	
	return 0;

}