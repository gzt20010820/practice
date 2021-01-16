#include <stdio.h>
int main()
{
	int a, b,c,n=4;
	for (a = 1;a <= n;a++)
	{
		for (b = a;n - b > 0;b++)
			printf(" ");
		for (c = 1;c <=2*a-1;c++)
			printf("*");
		printf("\n");

	}
	
	for (a = n+1;a <= 2*n-1;a++)
	{
		for (b = 1;b <=a-n;b++)
			printf(" ");
		for (c = 1;c <= 2*n-1-2*(a-n) ;c++)/*此处若使用c=a-b会是后来一行*的输出数量意外少1！*//*expr1、expr2中要只有一个里有随循环次数而改变的量！*/
			printf("*");
		printf("\n");

	}
	
	char q = 67, w = 111, e = 112, r = 121, t = 114, y = 105, u = 103, i = 104, o = 116;？/*我在学习使用版权信息。。。*/
	printf("\n%c%c%c%c%c%c%c%c%c\n", q, w, e, r, t, y, u, i, o);


	return 0;

}