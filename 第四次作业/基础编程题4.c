#include<stdio.h>
#define ROW 6
#define COLUMN 6
void transpose(int str[ROW][COLUMN],int m)/*����ת�ú���*/
/*��һ��˼·���������ж����������飬���ݸ��Զ��庯������������Ϊ����*/
{
	int temp, i, j;
	for(i=0;i<m;i++)/*���˽���ת��*/
		for(j=0;j<m;j++)
			if (j >= i)/*����ת������*/
			{
				temp = str[i][j];/*�������ڶԳ�λ�õ�����Ԫ��*/
				str[i][j] = str[j][i];
				str[j][i] = temp;
			}
}

int main()
{
	int a[ROW][COLUMN], n,i,j;
	printf("Please input a 'n':\n");
	scanf_s("%d", &n);/*���뷽��Ľ���*/
	printf("Please input your matrix:\n");
	for (i = 0;i < n;i++)/*���뷽��ĸ�Ԫ��*/
		for (j = 0;j < n;j++)
			scanf_s("%d", &a[i][j]);
	transpose(a, n);/*����ת�ú���*/
	printf("The result is:\n");
	for (i = 0;i < n;i++)/*���*/
	{
		for (j = 0;j < n;j++)
			printf("%3d", a[i][j]);
		printf("\n");
	}
	return 0;
}