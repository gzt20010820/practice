#include <stdio.h>
int main()
{
	int a = 0, n,  e = 1;
	float c = 0, d = 1;
	printf("Please input the lower and upper boundries:");
	scanf_s("%d", &n);
	for (a = 1;a <= n;a++)
	{
		for (e = 1;e <= a;e++)
			d *= e;

		c = c + 1.0 / d;
		d = 1;
	}
	
		
	printf("%.4f", c);

	return 0;

}