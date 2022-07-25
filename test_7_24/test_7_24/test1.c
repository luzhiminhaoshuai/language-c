//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
////递归和非递归分别实现求n的阶乘（不考虑溢出的问题）
//int fun1(int x)//非递归实现
//{
//	int i = 0;
//	int sum = 1;
//	if (0 == x)
//	{
//		return 1;
//	}
//	if (x > 0)
//	{
//		for (i = 1; i <= x; i++)
//		{
//			sum *= i;
//		}
//		return sum;
//	}
//
//}
//int fun2(int y)//递归实现
//{
//	if (0 == y)
//	{
//		return 1;
//	}
//	if (y > 0)
//	{
//		return y * fun2(y - 1);
//	}
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	printf("非递归实现：%d\n", fun1(n));
//	printf("递归实现：  %d\n", fun2(n));
//	return 0;
//}