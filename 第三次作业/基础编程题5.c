#include<stdio.h>
#define SIZE 6
int main()
{
	int sum=0, i, j,n;
	int str[SIZE][SIZE];
	
	do {/*��ȡ����Ľ���*/
		scanf_s("%d", &n);
		if(n < 1 || n>6)
			printf("Number error!\n");
	} while (n < 1 || n>6);
	
	for (i = 0;i < n;i++)/*���벢��ȡ����*/
		for (j = 0;j < n;j++)
			scanf_s("%d", &str[i][j]);/*ÿ�е�Ԫ��֮����ô������*/	
	
	for (i = 0;i <n - 1;i++)/*����͵�ֵ*//*ȥ�����һ��*/
		for (j = 0;j < n - 1;j++)/*ȥ�����һ��*/
			if (i + j != n - 1)/*ȥ�����Խ���*/
				sum += str[i][j];
	
	printf("\sum=%d", sum);/*����͵�ֵ*/
	
	return 0;
}