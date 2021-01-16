
#include <stdio.h>
int main()
{
	int a, b,c=1,num=0;
	
	scanf_s("%d", &a);
	
	while (c)
	{
		b = a % 10;
		a = a / 10;
		if (b == 7)
			num += 1;	
		if (a == 0)
			c = 0;
	}

	printf("数据中7的个数为%d", num);

	return 0;

}




/*自主创新到此宣告失败！！！:
int lenth;
	scanf_s("%s", &lenth);
	lenth = strlen(lenth);*/
	/*int count = 0, a,num;
	scanf_s("%d", &num);
	num = strlen(num);*/

	/*	int a[2],i,j=1,num,count;
		scanf_s("%d", &a[0]);
		for (i = 1;i <3;i ++)
			a[i] = a[i-1];

		num = strlen(num);


		while (j<=num)
		{
			scanf_s("%1d", a[1]);
			j += 1;
			if (a == 7)
				count += 1;

		}

		printf("数据中7的个数为%d", count);

		return 0;


	*/