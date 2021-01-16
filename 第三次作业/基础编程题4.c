#include<stdio.h>
#include<string.h>
#define SIZE1 100
#define SIZE2 100
int main()
{
	int i,flag=0;
	char str1[SIZE1], str2[SIZE2];/*定义两个字符数组*/
	gets(str1);
	gets(str2);
	for (i = 0;i < SIZE2;i++)/*检索\0的位置并标记*/
		if (str1[i] == '\0')
		{
			flag = i;
			str1[i] = ' ';/*将第一个数组中的\0改为空格的ASCⅡ码*/
			break;
		}	
	for (i = 0;i < SIZE2;i++)/*字符串连接*/
	{
		str1[flag + i +1] = str2[i];/*若将SIZE1定义为2，则：警告C6386，表明指定缓冲区的可写范围可能小于用于写入它的索引。 这可能会导致缓冲区溢出。警告 C6201： <变量 > 缓冲区溢出，这可能是堆栈分配的：索引 <名称 > 超出有效索引范围 <最小 > 到 <最大 >
此警告表明指定堆栈数组的整数偏移量超过了该数组的最大界限。 此缺陷可能会导致随机行为或发生崩溃。
此缺陷的一个常见原因是使用数组的大小作为数组中的索引。 由于 C/C++ array 索引是从零开始的，因此数组中的最大合法索引小于数组元素的数目。*/
		if (str2[i] == '\0')
		{
			str1[flag + i + 1] = '\0';
			break;/*使用判断来结束连接*/
		}		
	}
	puts(str1);/*输出*/
	return 0;
}