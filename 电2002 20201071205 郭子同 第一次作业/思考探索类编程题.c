#include <stdio.h>
int main()
{
	int x=0, h, h1, q, q1, d, d1, n, n1, c;
	
	printf("The change is:\n");
	scanf_s("%d",&x);

	h = x / 50;
	h1 = x % 50;

	q = h1 / 25;
	q1 = h1 % 25;

	d = q1 / 10;
	d1 = q1 % 10;

	n = d1 / 5;
	n1 = d1 % 5;

	c = n1 / 1;

	printf("%d���ֵ���%d��50���֣�����%d��25���֣�����%d��10���֣�����%d��5���֣�����%d��1���֡�\n",x,h,q,d,n,c);

	return 0;
	
}