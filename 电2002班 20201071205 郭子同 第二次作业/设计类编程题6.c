#include <stdio.h>
#include <stdlib.h>
#include <time.h>/*���������ļ���*/
int main()
{	
	int data1 , data2 , c ,op, output, input;/*���ڿ�ʼʱû��ʹ��srand����������������α�����*/
	srand((unsigned)time(NULL));/*ѡȡ�����ļ�����*/
	data1 = rand() % 9 + 0, data2 = rand() % 9 + 0, c = rand() % 4 + 0;/*�ֱ�����0-9��0-9��0-3֮��������*/
	switch (c)
	{
	case 0:
		op = '+';
		output = data1 + data2;
		break;
	case 1:
		op = '-';
		output = data1 - data2;
		break;	
	case 2:
		op = '*';
		output = data1 * data2;
		break;
	case 3:
		op = '/';
		output = data1 / data2;
		break;
	}
	
	printf("%d%c%d=", data1, op, data2);
	scanf_s("%d", &input);

	if (output == input)
		printf("Correct!");
	else
		printf("Error!");

	return 0;

}