#include<stdio.h>
int sum(int x)/*��׳�֮�͵��Զ��庯��*/
{	
	int i,j,product=1,sum1=1;/*0�Ľ׳˵���0��sum1=1*/
	for(i=1;i<=x;i++)/*�������*/
		{	product=1;
			for (j = 1;j <= i;j++)/*���*/
				product *= j;
			sum1+=product;
		}
	return (sum1);/*����sum1��ֵ*/
}

int main()
{
	int n,s;
	printf("Please input an integer variable:\n");
	scanf_s("%d",&n);/*����n*/
	s=sum(n);/*�����Զ��庯��*/
	printf("n=%d,s=%d\n(0!included.)",n,s);/*���*/
	return 0;
}