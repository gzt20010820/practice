#include<stdio.h>
#include<string.h>
#define N 20
void update(char* p, int n)
{
	int i;
	for (i = 6;i<9;i++)
	{
		*(p + i) = '\#';		
	}
	*(p + 9) = '\0';
}

int main()
{
	char a[N];
	int n = N, i;
	do
	{
		printf("Please input an array(数组最大长度为10):\n");
		gets(a);
		if(strlen(a) > 9)
		printf("The length of the array is beyond limit!(^._.^)..........\n");
	} while (strlen(a) > 9);
	update(a, N);
	printf("%s", a);
	return 0;
}