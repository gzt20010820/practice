#include <stdio.h>
#define SIZE 12
int main()
{
	int year, month, fday = 5, daysofyears=0, daysofthisyear=0;/*ΪʲôҪ��ʼ��dayssofyears�أ�*/
	int dayinmonth[SIZE] = {31,28,31,30,31,30,31,31,30,31,30,31};
	int iniyear, inimonth;
	int space,i;
	char judger;

	do
	{	printf("Enter which year you want to display(2010-2020):");
		scanf_s("%d", &year);
	} while (year - 2010 < 0 || year - 2020 > 0);
	if ((year % 4 == 0 && year % 100 != 0)||year % 400 == 0)
		dayinmonth[1] = 29;

	for (iniyear = 2010;iniyear < year;iniyear++)
	{
		if ((iniyear % 4 == 0 && iniyear % 100 != 0)||year % 400 == 0)
		{
			dayinmonth[1] = 29;
			daysofyears += 366;
		}
		else
			daysofyears += 365;
	}

	while(1)
	{	daysofthisyear = 0;
		fday = 5;
		do
		{
			printf("\nEnter which month in %d to display calender(1-12):", year);
			scanf_s("%d", &month);
		} while (month - 1 < 0 || month - 12 > 0);
		for (inimonth = 0;inimonth +1< month;inimonth ++)
			daysofthisyear += dayinmonth[inimonth];/*Ԫ������ʱ��[]�мȿ�Ϊ�����ֿ�Ϊ������*/

		fday = (daysofyears + daysofthisyear + fday ) % 7;/*��һ�п�����ʾ֮���������space<fday��ƥ�䵼���˴������-1��ô����Ӧдspace<=fday��������д������Ҫ�Լ����͸�����а���*/

		printf("*****************************************************\n");
		printf("    MON    TUE    WED    THU    FRI    SAT    SUN\n");
		for (space = 1;space < fday;space++)
			printf("       ");
		for (i = 0;i< dayinmonth[month-1];i++, fday++)/*֮ǰ���е�[]��д����i����������Сʱ������*/
		{
			printf("%7d", i+1);
			if (fday ==7)
			{
				printf("\n");
				fday = 0;
			}
		}

		printf("\nWould you like to display another month?(y/n)");/*����жϺ���ʧЧ�ˣ����������Ҳ���ԭ�򡣣���*/
		fflush(stdin);
		judger = getchar();
		if (judger == 'n' || judger == 'N')
			break;

	}
	return 0;
}