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
		for (c = 1;c <= 2*n-1-2*(a-n) ;c++)/*�˴���ʹ��c=a-b���Ǻ���һ��*���������������1��*//*expr1��expr2��Ҫֻ��һ��������ѭ���������ı������*/
			printf("*");
		printf("\n");

	}
	
	char q = 67, w = 111, e = 112, r = 121, t = 114, y = 105, u = 103, i = 104, o = 116;��/*����ѧϰʹ�ð�Ȩ��Ϣ������*/
	printf("\n%c%c%c%c%c%c%c%c%c\n", q, w, e, r, t, y, u, i, o);


	return 0;

}