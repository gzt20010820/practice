#include<stdio.h>
int sum(int x)/*求阶乘之和的自定义函数*/
{	
	int i,j,product=1,sum1=1;/*0的阶乘等于0→sum1=1*/
	for(i=1;i<=x;i++)/*依次求和*/
		{	product=1;
			for (j = 1;j <= i;j++)/*求积*/
				product *= j;
			sum1+=product;
		}
	return (sum1);/*返回sum1的值*/
}

int main()
{
	int n,s;
	printf("Please input an integer variable:\n");
	scanf_s("%d",&n);/*输入n*/
	s=sum(n);/*调用自定义函数*/
	printf("n=%d,s=%d\n(0!included.)",n,s);/*输出*/
	return 0;
}