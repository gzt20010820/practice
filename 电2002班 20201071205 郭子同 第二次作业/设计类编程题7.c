#include <stdio.h>
int main()
{
	int y, m, d,flag=0;
	printf("Please input the date of today(use year, month and day while use \"-\" to between the number you input):");
	scanf_s("%d-%d-%d", &y, &m, &d);
	d += 1;
	switch (m)
	{
	case 1:case 3:case 5:case 7:case 8:case 10:case 12:
		/*31����·�*/
		if (d == 32)/*�����*/
		{
			d = 1;
			m += 1;
		}
		else if (d > 32)/*���뱨�����*/
		{
			printf("Error��");
			exit();
		}
		if (m ==13)/*�����*/
		{
			m = 1;
			y += 1;
		}
		break;
	case 4:case 6:case 9:case 11:
		/*30����·�*/
		if (d ==31)/*�����*/
		{
			d = 1;
			m += 1;
		}
		else if (d > 31)
		{
			printf("error!");
			exit();
		}
		if (m ==13)/*�����*/
		{
			m = 1;
			y += 1;
		}
		break;
	case 2:
		/*������������2��ʱ�����*/
		if ((y % 4 == 0 && y % 100 != 0)||y%400==0)
		{
			if (d ==30)
			{
				d = 1;
				m += 1;
			}
			else if (d > 30)
			{
				printf("Error!");
				exit();
			}
		}

		else 
		{
			if (d == 29)
			{
				d = 1;
				m += 1;
			}
			else if (d > 29)
			{
				printf("Error!");
				exit();
			}
		}
		break;
	default:
		{
			printf("Error!");
			exit();
		}
	}
	
	printf("%d-%02d-%02d", y, m, d);

	return 0;
}