#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <math.h>

//
//int get_max(int x, int y)
//{
//	return (x > y ? x : y);
//}
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	int m = get_max(a, b);
//	printf("%d\n", m);
//
//	return 0;
//}

//
//void Swap1(int x, int y)//形式参数
//{
//	int tmp = 0;
//	tmp = x;
//	x = y;
//	y = tmp;
//}
//
//void Swap2(int *px, int *py)
//{
//	int tmp = *px;
//	*px = *py;
//	*py = tmp;
//}
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//
//	printf("交换前：a=%d b=%d\n", a, b);
//	//传值调用
//	//Swap1(a, b);//实参
//	
//	//传址调用
//	Swap2(&a, &b);//实参
//	printf("交换后：a=%d b=%d\n", a, b);
//
//	return 0;
//}

//是素数返回1
//不是素数返回0
//int is_primer(int n)
//{
//	int j = 0;
//	for (j = 2; j <= sqrt(n); j++)
//	{
//		if (n % j == 0)
//		{
//			return 0;
//		}
//	}
//	return 1;
//}
//
//int main()
//{
//	//打印100~200之间的素数
//	int i = 0;
//	int count = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		//判断i是否为素数
//		if (is_primer(i) == 1)
//		{
//			count++;
//			printf("%d ", i);
//		}
//	}
//	printf("\ncount = %d\n", count);
//  return 0;
//}

//void print(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//}
//
//int main()
//{
//	int arr[10] = {1,2,3,4,5,6,7,8,9,10};
//	print(arr, 10);
//
//	return 0;
//}
//

//函数，如果不写返回值，函数默认会返回一个值
//有些编译器上返回的是：最有一条指令产品的结果
//int test()
//{
//	int a = 10;
//	int b = 20;
//	int c = a + b;
//}
//
//int main()
//{
//	printf("%d\n", test());
//	return 0;
//}
//

//int is_leap_year(int year)
//{
//	if (((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0))
//		return 1;
//	else
//		return 0;
//}


//int is_leap_year(int year)
//{
//	return ((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0);
//}
//
//
//int main()
//{
//	int y = 0;
//	int count = 0;
//	for (y = 1000; y <= 2000; y++)
//	{
//		//判断y是不是闰年
//		if (is_leap_year(y) == 1)
//		{
//			count++;
//			printf("%d ", y);
//		}
//	}
//	printf("\ncount = %d\n", count);
//	return 0;
//}

//写一个函数，实现一个整形有序数组的二分查找


//int binary_search(int* arr, int k, int sz)
//int binary_search(int arr[], int k, int sz)
//{
//	int left = 0;
//	int right = sz-1;
//	while (left<=right)
//	{
//		int mid = left + (right - left) / 2;
//		if (arr[mid] > k)
//		{
//			right = mid - 1;
//		}
//		else if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else
//		{
//			return mid;//找到了
//		}
//	}
//
//	return -1;//找不到
//}
//
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//
//	int k = 7;
//	//找到了返回下标，0~9
//	//找不到返回 -1
//	//数组传参，传递的是数组首元素的地址
//	int ret = binary_search(arr, k, sz);
//
//	if (-1 == ret)
//		printf("找不到\n");
//	else
//		printf("找到了，下标是:%d\n", ret);
//
//	return 0;
//}
//

//void Add(int* p)
//{
//	*p = *p+1;
//}
//
//int Add(int n)
//{
//	return n + 1;
//}
//
//int main()
//{
//	int num = 0;
//	num = Add(num);
//	printf("%d\n", num);
//	num = Add(num);
//	printf("%d\n", num);
//
//	/*Add(&num);
//	printf("%d\n", num);
//	Add(&num);
//	printf("%d\n", num);
//	Add(&num);
//	printf("%d\n", num);*/
//	return 0;
//}
//

#include <string.h>

//
//int main()
//{
//	//int len = strlen("abcdef");
//	//printf("%d\n", len);
//
//	//printf("%d\n", strlen("abcdef"));
//
//	return 0;
//}
//

//#include <stdio.h>
//int main()
//{
//	printf("%d", printf("%d", printf("%d", 43)));
//	//43 2 1
//	//结果是啥？
//	//注：printf函数的返回值是打印在屏幕上字符的个数
//	return 0;
//}
//

//函数声明
//int Add(int, int);
//int Add(int x, int y);
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	
//	int s = Add(a, b);
//	printf("%d\n", s);
//
//	return 0;
//}
//
//int Add(int x, int y)
//{
//	return x + y;
//}

//VS2019 是编译器吗？其实是集成开发环境，IDE
//编辑器，编译器，链接器，调试器
//

//#include "add.h"

//引入静态库的方式
//#pragma comment(lib, "add.lib")
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	scanf("%d %d", &a, &b);
//
//	int s = Add(a, b);
//	
//	printf("%d\n", s);
//
//	return 0;
//}
//

//int main()
//{
//	printf("hehe\n");
//	main();
//	return 0;
//}

//
//递归的思考方式：大事化小
//
//print(1234)
//print(123) 4
//print(12) 3 4
//print(1) 2 3 4
//1 2 3 4
//


//void print(unsigned int n)//1234
//{
//	if (n < 10)
//		printf("%d ", n);
//	else
//	{
//		print(n / 10);//123
//		printf("%d ", n%10);
//	}
//}

void print(unsigned int n)
{
	if (n > 9)
	{
		print(n / 10);
	}
	printf("%d ", n % 10);
}

int main()
{
	unsigned int num = 0;
	scanf("%u", &num);//1
	print(num);//按照顺序打印num的每一位


	//while (num)
	//{
	//	printf("%d ", num % 10);
	//	num = num / 10;
	//}
	//1234%10 = 4
	//1234/10=123
	//123%10=3
	//123/10=12
	//12%10=2
	//12/10=1
	//1%10=1
	//1/10=0
	return 0;
}





































