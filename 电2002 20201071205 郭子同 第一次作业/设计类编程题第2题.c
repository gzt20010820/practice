#include <stdio.h>

int main()
{
	int a1,a2,a3,a4, b,c1,c2,c3,c4,d;/*b��Ϊ�����õ���ʱ�м���*/
	
	printf("The original numble is:\n");
	scanf_s("%1d%1d%1d%1d", &a1,&a2,&a3,&a4);
	
	c1 = (a1 + 9) % 10;
	c2 = (a2 + 9) % 10;
	c3 = (a3 + 9) % 10;
	c4 = (a4 + 9) % 10;
	
	b = c1;/*��1��3λ�����ֻ���*/
	c1 = c3;
	c3 = b;

	b = c2;/*��2��4λ�����ֻ���*/
	c2 = c4;
	c4 = b;

	d = 1000 * c1 + 100 * c2 + 10 * c3 + c4;/*�����еȼ��ڸ���λ����˳�����*/

	printf("The encrypted number is:\n%d",d);

	return 0;

}