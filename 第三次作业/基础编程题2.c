#include <stdio.h>
#define SIZE 10
int main()
{
	int str[SIZE + 1], i, j, count = 0, t, sum = 0, flag = 0, average = 0;
	printf("Please input 10 integer:\n");
	for (i = 0;i < 10;i++)/*输入数组*/
		scanf_s("%d", &str[i]);
	/*for (i = 0;i < 10;i++)
		printf("%d ", str[i]);*/
	for (i = 0;i < SIZE - 1;i++)/*排序过程*/
		for (j = 0;j < SIZE - i;j++)
		{
			if (str[j] < str[j + 1])
			{
				t = str[j];str[j] = str[j + 1];str[j + 1] = t;
				count += 1;
			}
		}
	for (i = 0;i < SIZE;i++)/*求和*/
		sum += str[i];
	average = sum / SIZE;/*求平均值*/
	for (i = SIZE - 1;i >= 0;i--)/*这里使用了一次循环与if判断语句完成了平均值的插入*/
	{
		str[i + 1] = str[i];
		if (str[i] >= average)
		{
			flag = i;
			break;
		}
	}
	str[flag + 1] = average;
	printf("\n");
	for (i = 0;i < SIZE+1;i++)/*输出最终的数组*/
		printf("%d ", str[i]);
	printf("\n(%d exchanges have been made.)\n", count);

	return 0;

}