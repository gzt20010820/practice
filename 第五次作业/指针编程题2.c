#include<stdio.h>
void value(int a[], int* p1, int* p2, int n)
{/*将整型数组a的首地址传给形参数组a，将max、min的地址分别传给指针p1、p2，数组长度传给循环控制变量n*/
    int i;
    for (i = 0;i < n;i++)/*从下标为0的元素到下标为(n-1)的元素循环进行判断*/
    {
        if (a[i] > * p1)/*若a[i]比最大值大，则将a[i]的值赋给最大值对应的指针变量p1的值*/
            *(p1) = a [i];
        if (a[i] < *p2)/*若a[i]比最小值小，则将a[i]的值赋给最小值对应的指针变量p2的值*/
            *(p2) = a[i];
    }
}/*函数执行结束，由于是地址传递，max，min的值发生了改变而不会被清空*/
void main()
{
    int max = 0, min = 0, * mx, * mn;
    int arr[] = { 1,2,3,-5,0,7,15,4,-8,10 };
    mx = &max, mn = &min;
    value(arr, mx, mn, 10);
    printf("最大值为%d, 最小值为%d\n", max, min);
}
