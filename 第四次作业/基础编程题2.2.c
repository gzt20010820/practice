#include<stdio.h>
void decrypt(int str1[5])/*将此处进行修改成为上题的逆运算*/
{
	int i, temp;
	for (i = 0;i<4;i++)/*将该数每一位上的数字加9，然后除以10 取余，作为该位上的新数字*/
		str1[i] = (str1[i] + 10-9) % 10;
	temp = str1[0];/*将第1 位和第3 位上的数字互换*/
	str1[0] = str1[2];
	str1[2] = temp;
	temp = str1[1];/*第2 位和第4 位上的数字互换*/
	str1[1] = str1[3];
	str1[3] = temp;
}

int main()
{
	int str[5],i;
	for (i = 0;i < 4;i++)
		scanf_s("%1d", &str[i]);/*输入整型数组*/
	decrypt(str);/*调用自定义函数*/
	for (i = 0;i < 4;i++)
		printf("%d", str[i]);
	return 0;
}

