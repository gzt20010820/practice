#include<stdio.h>
#define MAX(x,y) (x>y?x:y)/*ʹ�ô������ĺ����������еĽϴ���*/
int max(i, j)/*ʹ�ú������������еĽϴ���*/
{
	return(i > j ? i : j);
}

int main()
{
	int a, b,c;
	printf("Please input 3 intanger viriables:\n");
	scanf_s("%d%d%d", &a, &b, &c);/*����*/
	printf("The biggest number is %d.\n", (max(MAX(a, b), c)));/*���*/
	return 0;
}