#include<stdio.h>
#define N 6//�γ���//
#define M 6//ѧ����//
int average(int a[M][N], int n)
{
	int sum = 0, i;
	for (i = 0;i < M;i++)
		sum += a[M][n-1];
	return (sum / N);
}
void findfail(int a[M][N], int fail[M])
{
	int i, j, k = 0, flag = 0;
	for (i = 0;i < N;i++)
	{
		flag = 0;
		for (j = 0;j < N-1;j++)
			if (a[i][j] < 60)
				flag++;
		if (flag >= 2)
		{
			fail[k] = i;
			fail[k+1]='\0';
			k++;
		}
	}
}
void findgood(int a[M][N], int good[M])
{
	int i, j, k = 0, flag = 0;
	for (i = 0;i < N;i++)
	{
		flag = 0;
		for (j = 0;j < N-1;j++)
			if (a[i][j] >= 90)
				flag++;
		if (flag >= 2)
		{
			good[k] = i;
			good[k+1]='\0';
			k++;
		}
	}
}
int main()
{
	int str[M][N], i, j, x = N, y = M, n, fail[N], good[N];/*��������ʱ����һ����Ϊƽ���ɼ�*/
	char studentnum[20];
	for (i = 0;i < M;i++)/*����ѧ��һά���鼰�ɼ���ά����*/
	{
		printf("��%d��ѧ����ѧ�ţ�\n",i+1);
		scanf("%s", studentnum);
		for (j = 0;j < N-1;j++)
		{	
			printf("��%d��ѧ���ĵ�%d�Ƴɼ���\n",i+1,j+1);
			scanf_s("%d", &str[i][j]);
		}
	}
	for (i = 0;i < M;i++)/*����ƽ���ɼ�*/
	{
		str[i][N-1] = 0;
		for (j = 0;j < N-1;j++)
			str[i][N-1] += str[i][j];
		str[i][N - 1] /= N - 1;
	}
	printf("�����__����Ŀ��ƽ���֣�");/*��һ��������������*/
	scanf("%d", &n);
	printf("%d", average(str, n));/*�����ֱ�ӵ��õ�һ������*/
	findfail(str, fail);/*���õڶ�������*/
	printf("�ɼ��Ϻõ�ѧ���У�\n");
	for (i = 0;fail[i] != '\0';i++)
	{	
		printf("%s   ", studentnum[fail[i]]);/*�ֱ����ѧ��*/
		for (j = 0;j < N ;j++)
			printf("%d   ", str[fail[i]][j]);/*�ֱ�������Ƴɼ�����ƽ���ɼ�*/
	}
	findgood(str, good);/*���õ���������*/
	printf("�ɼ��Ϻõ�ѧ���У�\n");
	for (i = 0;good[i] != '\0';i++)
	{
		printf("%s   ", studentnum[good[i]]);/*�ֱ����ѧ��*/
		for (j = 0;j < N ;j++)
			printf("%d   ", str[good[i]][j]);/*�ֱ�������Ƴɼ�����ƽ���ɼ�*/
	}
	return 0;
}