#include<stdio.h>
#define M 100
#define N 100
int main() 
{
    int a[M][N], row[M],col[N],ro,co, flag = 0, i, j;
    printf("Please input the number of row:\n");/*ȷ����������*/
    scanf_s("%d", &ro);
    printf("Please input the number of column:\n");
    scanf_s("%d", &co);
    printf("Input array:\n");/*����*/
    for (i = 0;i < ro;i++)
        for (j = 0;j < co;j++)
            scanf_s("%d",& a[i][j]);
    for (i = 0;i < ro;i++)/*ȷ��ÿ�е����Ԫ��*/
    {
        row[i] = a[i][0];
        for (j = 0;j < co;j++)
            if (a[i][j] > row[i])
                row[i] = a[i][j];
    }
    for (j = 0;j < co;j++)/*ȷ��ÿ�е���СԪ��*/
    {
        col[j] = a[0][j];
        for (i = 0;i < ro;i++)
            if (a[i][j] < col[j])
                col[j] = a[i][j];
    }
    for (i = 0;i < ro;i++)/*�������*/
        for (j = 0;j < co;j++)
            if (a[i][j] == row[i] && a[i][j] == col[j])
            {
                flag++;
                printf("The saddle point of this matrix is(%d,%d):%d\n", i+1, j+1, a[i][j]);
            }
    if (flag == 0)
        printf("This matrix have no saddle point.\n");
    return 0;
}
