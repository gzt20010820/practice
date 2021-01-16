#include <stdio.h>
#include <stdlib.h>
#include <time.h>/*产生种子文件？*/
int main()
{	
	int data1 , data2 , c ,op, output, input;/*我在开始时没有使用srand函数，导致生成了伪随机数*/
	srand((unsigned)time(NULL));/*选取种子文件？？*/
	data1 = rand() % 9 + 0, data2 = rand() % 9 + 0, c = rand() % 4 + 0;/*分别生成0-9，0-9，0-3之间的随机数*/
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