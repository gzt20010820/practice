#include <stdio.h>
#include <math.h>
int main()
{
	int i,j, k,flag, sum=0;/*����̫��ΪʲôҪ��ʼ����sum*/
	for (i = 2;i <= 100;i++)
	{
		flag = 1;/*��Ĭ��iΪ�������ٽ����ж�*/
		k = sqrt(i);/*���i������������i������������ض���һ��С��i������ƽ�������ɾ�ֵ����ʽ�ɵã�*/
		for (j = 2;j <= k;j++)
			if (i % j == 0)
			{
				flag = 0;
				break;
			}
		if (flag == 1)
			sum += i;
	}
	
	printf("0��100�������������ĺ�Ϊ%d\n", sum);

	return 0;

}
