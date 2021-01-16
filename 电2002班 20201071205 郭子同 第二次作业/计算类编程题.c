#include <stdio.h>
int main()
{
	float a=0, b=0, x,fa=0,fb=0,fx;

	do {
		printf("Please input the lower and upper boundries:\n");
		scanf_s("%f%f", &a, &b);

		fa = 2 * a * a * a - 4 * a * a + 3 * a - 6;
		fb = 2 * b * b * b - 4 * b * b + 3 * b - 6;
		if (fa * fb >= 0)
			printf("No root in this boundry!\n");
	} while (fa * fb >= 0);

	do{	
			x = (a + b) / 2;
			fx = 2 * x * x * x - 4 * x * x + 3 * x - 6;
			if (fa * fx <= 0)
			{
				b = x;
				fb = fx;
			}
			if (fa * fx > 0)
			{
				a = x;
				fa = fx;
			}
	}while (fx >= 1e-5||fx<=-1e-5);	/*我的这一行之前由于丢了绝对值导致结果错误！！！！*/
		printf("The root is %.2f", x);	

	return 0;
}