#include <stdio.h>
#include <math.h>
int main()
{
	float a, b;/*������double�Ļ���ô�죿*/
	
	printf("The input is��\n");
	scanf_s("%f", &a);
	
	b = sqrt(a);/*�μ��ϵ�double sqrt(double x)��ʲô��˼��*/
	
	printf("The Square root of %.1f is %.1f \n",a,b);

	return 0;
}