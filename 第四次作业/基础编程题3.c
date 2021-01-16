#include<stdio.h>
#define MAX(x,y) (x>y?x:y)/*使用带参数的宏求两个数中的较大者*/
int max(i, j)/*使用函数求两个数中的较大者*/
{
	return(i > j ? i : j);
}

int main()
{
	int a, b,c;
	printf("Please input 3 intanger viriables:\n");
	scanf_s("%d%d%d", &a, &b, &c);/*输入*/
	printf("The biggest number is %d.\n", (max(MAX(a, b), c)));/*输出*/
	return 0;
}