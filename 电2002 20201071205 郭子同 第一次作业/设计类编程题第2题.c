#include <stdio.h>

int main()
{
	int a1,a2,a3,a4, b,c1,c2,c3,c4,d;/*b作为交换用的临时中间量*/
	
	printf("The original numble is:\n");
	scanf_s("%1d%1d%1d%1d", &a1,&a2,&a3,&a4);
	
	c1 = (a1 + 9) % 10;
	c2 = (a2 + 9) % 10;
	c3 = (a3 + 9) % 10;
	c4 = (a4 + 9) % 10;
	
	b = c1;/*将1、3位的数字互换*/
	c1 = c3;
	c3 = b;

	b = c2;/*将2、4位的数字互换*/
	c2 = c4;
	c4 = b;

	d = 1000 * c1 + 100 * c2 + 10 * c3 + c4;/*这两行等价于各个位数按顺序输出*/

	printf("The encrypted number is:\n%d",d);

	return 0;

}