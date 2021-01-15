#include <stdio.h>
#include <math.h>
int main()
{
	float a, b;/*这里用double的话怎么办？*/
	
	printf("The input is：\n");
	scanf_s("%f", &a);
	
	b = sqrt(a);/*课件上的double sqrt(double x)是什么意思？*/
	
	printf("The Square root of %.1f is %.1f \n",a,b);

	return 0;
}