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

	printf("%d美分等于%d个50美分，加上%d个25美分，加上%d个10美分，加上%d个5美分，加上%d个1美分。\n",x,h,q,d,n,c);

	return 0;
	
}