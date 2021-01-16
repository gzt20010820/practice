#include <stdio.h>
#define SIZE 12
int main()
{
	int year, month, fday = 5, daysofyears=0, daysofthisyear=0;/*为什么要初始化dayssofyears呢？*/
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
			daysofthisyear += dayinmonth[inimonth];/*元素引用时，[]中既可为常量又可为变量。*/

		fday = (daysofyears + daysofthisyear + fday ) % 7;/*这一行看了提示之后与下面的space<fday不匹配导致了错误（如果-1那么下面应写space<=fday），看来写程序还是要自己理解透彻才行啊！*/

		printf("*****************************************************\n");
		printf("    MON    TUE    WED    THU    FRI    SAT    SUN\n");
		for (space = 1;space < fday;space++)
			printf("       ");
		for (i = 0;i< dayinmonth[month-1];i++, fday++)/*之前这行的[]里写的是i，费了我俩小时。。。*/
		{
			printf("%7d", i+1);
			if (fday ==7)
			{
				printf("\n");
				fday = 0;
			}
		}

		printf("\nWould you like to display another month?(y/n)");/*这个判断好像失效了！但是我们找不出原因。？？*/
		fflush(stdin);
		judger = getchar();
		if (judger == 'n' || judger == 'N')
			break;

	}
	return 0;
}