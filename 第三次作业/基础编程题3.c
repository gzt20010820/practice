#include<stdio.h>
#define ROW 3
#define COLUMN 81
int main()
{
	int i,j, count = 0;
	char str[ROW][COLUMN];
	for (i = 0;i < ROW;i++)/*输入二维字符数组*/
		gets(str[i]);/*用scanf该怎么写呢？*/
	for(i=0;i<ROW;i++)
		for (j = 0;j < COLUMN;j++)/*统计大写辅音字母的个数*/
		{
			if (str[i][j] - 'A' >= 0 && str[i][j] - 'Z' <= 0 && str[i][j] != 'A' && str[i][j] != 'E' && str[i][j] != 'I' && str[i][j] != 'O' && str[i][j] != 'U')
				count++;
		}
	printf("There are %d capital consonant letters in this paper.\n",count);/*输出*/

	return 0;

}