#include<stdio.h>
#define ROW 3
#define COLUMN 81
int main()
{
	int i,j, count = 0;
	char str[ROW][COLUMN];
	for (i = 0;i < ROW;i++)/*�����ά�ַ�����*/
		gets(str[i]);/*��scanf����ôд�أ�*/
	for(i=0;i<ROW;i++)
		for (j = 0;j < COLUMN;j++)/*ͳ�ƴ�д������ĸ�ĸ���*/
		{
			if (str[i][j] - 'A' >= 0 && str[i][j] - 'Z' <= 0 && str[i][j] != 'A' && str[i][j] != 'E' && str[i][j] != 'I' && str[i][j] != 'O' && str[i][j] != 'U')
				count++;
		}
	printf("There are %d capital consonant letters in this paper.\n",count);/*���*/

	return 0;

}