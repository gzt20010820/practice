#include <stdio.h>
#define SIZE 10
int main()
{
	int str[10], i,j, count=0,t;
	printf("Please input 10 integer\n");
	for (i = 0;i < 10;i++)/*输入数组*/
		scanf_s("%d", &str[i]);
	for(i=0;i<10;i++)
	printf("%d ", str[i]);
	for (i = 0;i < SIZE - 1;i++)/*排序过程*/
		for (j = 0;j < SIZE - i;j++)
		{
			if (str[j] < str[j + 1])
			{
				t = str[j];str[j] = str[j + 1];str[j + 1] = t;
				count += 1;
			}
		}
	printf("排序后的数组为：\n");
	for(i=0;i<10;i++)/*输出排序后的数组*/
	printf("%d ",str[i]);
	printf("\n%d exchanges have been made.\n", count);

	return 0;

}