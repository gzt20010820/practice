#include <stdio.h>
#include <math.h>
int main()
{
	int i,j, k,flag, sum=0;/*（不太懂为什么要初始化）sum*/
	for (i = 2;i <= 100;i++)
	{
		flag = 1;/*先默认i为素数，再进行判断*/
		k = sqrt(i);/*如果i不是素数，则i的两个因子里必定有一个小于i的算数平方根（由均值不等式可得）*/
		for (j = 2;j <= k;j++)
			if (i % j == 0)
			{
				flag = 0;
				break;
			}
		if (flag == 1)
			sum += i;
	}
	
	printf("0到100以内所有素数的和为%d\n", sum);

	return 0;

}
