#define _CRT_SECURE_NO_WARNINGS 1


#include <stdio.h>
//
//int main()
//{
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		if (i = 5)
//			printf("%d ", i);
//	}
//	return 0;
//}

//
//int main()
//{
//	int d = 0;
//	scanf("%d", &d);
//
//	switch (d)
//	{
//	case 2:
//		printf("2\n");
//		break;
//	case 1:
//		printf("1\n");
//		break;
//
//	default:
//		printf("选择错误\n");
//		break;
//	}
//	return 0;
//}
//


//写一个代码打印1-100之间所有3的倍数的数字

//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 100; i++) 
//	{
//		//判断i是否是3的倍数
//		if (i % 3 == 0)
//		{
//			printf("%d ", i);
//		}
//	}
//
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	for (i = 3; i <= 100; i+=3)
//	{
//		printf("%d ", i);
//	}
//
//	return 0;
//}
//

//写代码将三个整数数按从大到小输出。
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	scanf("%d %d %d", &a, &b, &c);
//	int t = 0;
//	if (a < b)
//	{
//		t = a;
//		a = b;
//		b = t;
//	}
//	if (a < c)
//	{
//		t = a;
//		a = c;
//		c = t;
//	}
//	if (b < c)
//	{
//		t = b;
//		b = c;
//		c = t;
//	}
//
//	printf("%d %d %d\n", a, b, c);
//	return 0;
//}

//写一个代码：打印100~200之间的素数
//素数-质数
//只能被1和它本身整除
//7
//2~6
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		int flag = 1;//表示是素数
//		//判断i是否为素数
//		//使用2~i-1之间的数字去试除i
//		int j = 0;
//		for (j = 2; j < i; j++)
//		{
//			//拿j来试除i
//			if (i % j == 0)
//			{
//				flag = 0;
//				break;
//			}
//		}
//		if (1 == flag)
//		{
//			count++;
//			printf("%d ", i);
//		}
//	}
//	printf("\ncount = %d\n", count);
//	return 0;
//}

//i = m*n
//m和n中至少由一个数字是 <= 开平方i的
//2~开平方i之间 找到一个i的因子
//16 = 2*8
//16 = 4*4
//
//库函数sqrt，是用来开平方的
//math.h
//
#include <math.h>
//
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		int flag = 1;//表示是素数
//		//判断i是否为素数
//		//使用2~i-1之间的数字去试除i
//		int j = 0;
//		for (j = 2; j <= sqrt(i); j++)
//		{
//			//拿j来试除i
//			if (i % j == 0)
//			{
//				flag = 0;
//				break;
//			}
//		}
//		if (1 == flag)
//		{
//			count++;
//			printf("%d ", i);
//		}
//	}
//	printf("\ncount = %d\n", count);
//	return 0;
//}
//


//
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 101; i <= 200; i+=2)
//	{
//		int flag = 1;//表示是素数
//		//判断i是否为素数
//		//使用2~i-1之间的数字去试除i
//		int j = 0;
//		for (j = 2; j <= sqrt(i); j++)
//		{
//			//拿j来试除i
//			if (i % j == 0)
//			{
//				flag = 0;
//				break;
//			}
//		}
//		if (1 == flag)
//		{
//			count++;
//			printf("%d ", i);
//		}
//	}
//	printf("\ncount = %d\n", count);
//	return 0;
//}
//
//
//试除法
//
//《素数求解的N种境界》
//


//
//打印1000年到2000年之间的闰年
//闰年判断的规则
//1. 能被4整除，不能被100整除，是闰年
//2. 能被400整除是闰年
//
//
//int main()
//{
//	int year = 0;
//	int count = 0;
//	for (year=1000; year<=2000; year++)
//	{
//		//判断year是不是闰年
//		if (year % 4 == 0)
//		{
//			if (year % 100 != 0)
//			{
//				count++;
//				printf("%d ", year);
//			}
//		}
//		if (year % 400 == 0)
//		{
//			count++;
//			printf("%d ", year);
//		}
//	}
//	printf("\ncount = %d\n", count);
//	return 0;
//}

//
//int main()
//{
//	int year = 0;
//	int count = 0;
//	for (year = 1000; year <= 2000; year++)
//	{
//		//判断year是不是闰年
//		if (((year%4==0)&&(year%100!=0)) || (year%400==0))
//		{
//			printf("%d ", year);
//			count++;
//		}
//	}
//
//	printf("\ncount = %d\n", count);
//	return 0;
//}
//
//

//给定两个数，求这两个数的最大公约数
//
//int main()
//{
//	//18 12
//	int m = 0;
//	int n = 0;
//	scanf("%d %d", &m, &n);
//	//求最大公约数
//	int min = (m < n ? m : n);
//	while (1)
//	{
//		if (m % min == 0 && n % min == 0)
//		{
//			printf("%d\n", min);
//			break;
//		}
//		min--;
//	}
//
//	return 0;
//}


//辗转相除法
//
//int main()
//{
//	//18 12
//	int m = 0;
//	int n = 0;
//	int r = 0;
//	scanf("%d %d", &m, &n);
//	while (r=m % n)
//	{
//		m = n;
//		n = r;
//	}
//	printf("%d\n", n);
//
//	return 0;
//}
//


//在屏幕上输出9*9乘法口诀表
//1*1=1
//2*1=2 2*2=4
//3*1=3 3*2=6 3*3=9
//...
//

#include <stdio.h>

//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 9; i++)
//	{
//		//打印一行
//		int j = 0;
//		for (j=1; j<=i; j++)
//		{
//			printf("%d*%d=%-2d ", i, j, i * j);
//		}
//		printf("\n");
//	}
//	return 0;
//}

//求10 个整数中最大值

//int main()
//{
//	int arr[] = { -1,-2,-3,-4,-5,-6,-7,-8,-9,-10 };
//	int max = arr[0];
//	int i = 0;
//	for (i = 1; i < 10; i++)
//	{
//		if (arr[i] > max)
//			max = arr[i];
//	}
//	
//	printf("%d\n", max);
//
//	return 0;
//}
//


//
//C语言的编译器提供了一些库函数
//printf
//scanf
//strlen
//
//C语言就是语法
//C语言标准就做了一些工作：
//scanf - 函数名，功能，参数，返回类型，怎么实现（不管），实现是交给编译器厂商实现的
//prinf
//strlen
//.....
//VS - 微软
//gcc - gcc官方
//clang - 苹果
//

//
//1. 开发效率低
//2. 标准
//3. 容易出bug
//

#include <string.h>
//
//int main()
//{
//	char arr1[20] = "xxxxxxxxxxxxxxx";
//	char arr2[] =   "hello bit";
//	strcpy(arr1, arr2);
//	printf("%s\n", arr1);
//
//	return 0;
//}

//int main()
//{
//	char arr[] = "hello bit";
//	memset(arr, 'x', 5);
//	printf("%s\n", arr);
//
//	return 0;
//}

//int get_max(int x, int y)
//{
//	//if (x > y)
//	//	return x;
//	//else
//	//	return y;
//	return (x > y ? x : y);
//}
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);//输入
//	//函数的使用-场景
//	int m = get_max(a, b);
//	printf("%d\n", m);
//
//	return 0;
//}

//写一个函数可以交换两个整形变量的内容
//
//void Swap(int x, int y)
//{
//	int z = 0;
//	z = x;
//	x = y;
//	y = z;
//}

//
//当函数调用的时候
//实参传给形参时，形参将是实参的一份临时拷贝
//所以对形参的修改是不影响实参的
//

void Swap(int* px, int* py)
{
	int t = 0;
	t = *px;  //t = a;
	*px = *py;//a=b;
	*py = t;  //b =t
}

int main()
{
	int a = 0;
	int b = 0;
	scanf("%d %d", &a, &b);//输入

	printf("交换前:a=%d b=%d\n", a, b);
	//传值调用
	//Swap(a, b);
	//传地址，传址调用
	Swap(&a, &b);
	printf("交换后:a=%d b=%d\n", a, b);
	return 0;
}

//
//int main()
//{
//	int a = 10;
//	int* p = &a;
//	*p = 20;
//	printf("%d\n", a);
//	return 0;
//}