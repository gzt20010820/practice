#include<stdio.h>
#define SIZE 6
int main()
{
	int sum=0, i, j,n;
	int str[SIZE][SIZE];
	
	do {/*读取矩阵的阶数*/
		scanf_s("%d", &n);
		if(n < 1 || n>6)
			printf("Number error!\n");
	} while (n < 1 || n>6);
	
	for (i = 0;i < n;i++)/*输入并读取矩阵*/
		for (j = 0;j < n;j++)
			scanf_s("%d", &str[i][j]);/*每行的元素之间怎么隔开？*/	
	
	for (i = 0;i <n - 1;i++)/*计算和的值*//*去掉最后一行*/
		for (j = 0;j < n - 1;j++)/*去掉最后一列*/
			if (i + j != n - 1)/*去掉副对角线*/
				sum += str[i][j];
	
	printf("\sum=%d", sum);/*输出和的值*/
	
	return 0;
}