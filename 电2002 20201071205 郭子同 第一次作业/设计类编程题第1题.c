#include <stdio.h>

int main()
{
	int time1=0, time2=0,hour1,minute1,hour2,minute2,duration,hour3,minute3;

	printf("departure time;\n");

	scanf_s("%d", &time1);

	printf("arrival time:\n");

	scanf_s("%d", &time2);

	hour1 = time1 / 100;
	hour2 = time2 / 100;
	
	minute1 = time1 % 100;
	minute2 = time2 % 100;

	duration = (hour1*60+minute1) - (hour2*60+minute2);
	
	if (duration < 0)
		duration = -duration;

	hour3 = duration / 60;
	minute3 = duration % 60;

	printf("The train journey time is %d hrs %d mins" ,hour3,minute3);

	return 0;
}