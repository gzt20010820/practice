#include<stdio.h>
#include<math.h>
#define ROW 10/*������ʱ��2��*/
#define COLUMN 7
int main()
{
	printf("������10��ѧ���ĸ��Ƴɼ���\n");
	int str[ROW][COLUMN], num=1, sum = 0, ave, i, j, flag = 1;
	/*��������ѧ���ĸ��Ƴɼ�*/
	/*for (i = 0;i < ROW;i++)
		for (j = 0;j < 4;j++)
		{
			if (j == 0)
			{
				num = i +1;
				printf("%d   ", num);
				break;
			}
			scanf_s("%d", &str[i][j]);
		}*/
	for (i = 0;i < ROW;i++)/*�����ά�ɼ�����*/
	{
		str[i][3] = 0;
		str[i][4] = 0;
		str[i][5] = 'Y';
		for (j = 0;j < 3;j++)
		{
			scanf_s("%d", &str[i][j]);
			str[i][3] += str[i][j];/*���*/
			str[i][4] = str[i][3] / (j + 1);/*��ƽ��ֵ*/
			if (str[i][j] <= 90)/*�ж�*/
				str[i][5] = 'N';
		}
	}
	printf("NO\tMT\tEN\tPH\tSUM\tAVE\t>90\n");/*�����ͷ*/
	printf("---------------------------------------------------\n");
	for (i = 0;i < ROW;i++)/*�������*/
	{
		printf("%d\t", num);/*���ѧ�����*/
		num++;
		for (j = 1;j < COLUMN-1;j++)/*����ɼ�*/
			printf("%d\t", str[i][j - 1]);
		if (j == COLUMN - 1)/*���ַ������ƽ���ɼ��Ƿ����90*/
			printf("%c\n", str[i][j - 1]);
	}
	return 0;
}