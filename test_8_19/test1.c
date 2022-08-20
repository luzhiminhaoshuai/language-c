#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
int main()
{
	 double x[5] = { 2.0, 4.0, 6.0, 8.0, 10.0 };
	 char c2[] = { '\x10', '\xa', '\8' };

	//int[5 + 3] = { 1 };错误定义
	return 0;
}

//oj练习题
//输入数字 n，按顺序打印出从 1 到最大的 n 位十进制数。比如输入 3，则打印出 1、2、3 一直到最大的 3 位数 999。
//1. 用返回一个整数列表来代替打印
//2. n 为正整数，0 < n <= 5
/**
 * 代码中的类名、方法名、参数名已经指定，请勿修改，直接返回方法规定的值即可
 *
 *
 * @param n int整型 最大位数
 * @return int整型一维数组
 * @return int* returnSize 返回数组行数
 *
 * C语言声明定义全局变量请加上static，防止重复定义
 */

int* printNumbers(int n, int* returnSize)
{

    int i = 0;
    int k = 1;
    for (i = 0; i < n; i++)
    {
        k = k * 10;
    }
    int* arr = (int*)malloc(k * sizeof(int));

    int j = 1;
    for (i = 0; i < k - 1; i++)
    {
        arr[i] = j;
        j++;
    }
    *returnSize = k - 1;
    return arr;
}
//根据输入的日期，计算是这一年的第几天。
//保证年份为4位数且日期合法。
//进阶：时间复杂度：O(n)\O(n) ，空间复杂度：O(1)\O(1)
//输入描述：
//输入一行，每行空格分割，分别是年，月，日
//
//输出描述：
//输出是这一年的第几天
#include<stdio.h>
int main()
{
    int arr[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
    int year = 0;
    int month = 0;
    int day = 0;
    scanf("%d %d %d", &year, &month, &day);
    if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
    {
        arr[1]++;
    }
    int i = 0;


    for (i = 0; i < month - 1; i++)
    {

        day = day + arr[i];
    }
    printf("%d", day);

    return 0;
}



