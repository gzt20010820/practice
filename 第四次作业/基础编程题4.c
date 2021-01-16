#include<stdio.h>
#define ROW 6
#define COLUMN 6
void transpose(int str[ROW][COLUMN],int m)/*定义转置函数*/
/*另一种思路：主函数中定义两个数组，传递给自定义函数两个数组作为参数*/
{
	int temp, i, j;
	for(i=0;i<m;i++)/*依此进行转置*/
		for(j=0;j<m;j++)
			if (j >= i)/*设置转置条件*/
			{
				temp = str[i][j];/*交换处于对称位置的两个元素*/
				str[i][j] = str[j][i];
				str[j][i] = temp;
			}
}

int main()
{
	int a[ROW][COLUMN], n,i,j;
	printf("Please input a 'n':\n");
	scanf_s("%d", &n);/*输入方阵的阶数*/
	printf("Please input your matrix:\n");
	for (i = 0;i < n;i++)/*输入方阵的各元素*/
		for (j = 0;j < n;j++)
			scanf_s("%d", &a[i][j]);
	transpose(a, n);/*调用转置函数*/
	printf("The result is:\n");
	for (i = 0;i < n;i++)/*输出*/
	{
		for (j = 0;j < n;j++)
			printf("%3d", a[i][j]);
		printf("\n");
	}
	return 0;
}