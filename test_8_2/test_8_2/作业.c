#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int main()
//{
//	int a = 0;
//	printf("%d", a);
//
//	return 0;
//}
//
//int main()
//{
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int* p = arr;
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d", *p);
//	}
// 
//}
//描述
//KiKi想获得某年某月有多少天，请帮他编程实现。输入年份和月份，计算这一年这个月有多少天。
//
// 输入描述：
//多组输入，一行有两个整数，分别表示年份和月份，用空格分隔。
//
// 输出描述：
//针对每组输入，输出为一行，一个整数，表示这一年这个月有多少天。

//int daycount(int a, int b)
//{
//	int c=0;
//	if (b == 1 || b == 3 || b == 5 || b == 7 || b == 8 || b == 10 || b == 12)
//	{
//		c = 0;
//	}
//	else if (b == 4 || b == 6 || b == 9 || b == 11)
//	{
//		c = 1;
//	}
//	else
//	{
//		c = 2;
//	}
//	
//	switch (c)
//	{
//	case 0:
//		return 31;
//	case 1:
//		return 30;
//	case 2:
//		if ((a%4 == 0 && a%100!= 0) ||( a%400 == 0))
//		{
//			return 29;
//		}
//		else
//		{
//			return 28;
//		}
//	default:
//		return 0;
//	}
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	printf("请输入年 ——月；\n");
//	scanf("%d %d", &a,&b);
//	int x=daycount(a,b);
//	printf("%d", x);
//
//	return 0;
//}
//
//判断输入的是不是字母
//int main()
//{
//	char a = 0;
//	while ((a=getchar()) != EOF)
//	{
//		if (('a' <= a && a <= 'z') || ('A' <= a && a <= 'Z'))
//		{
//			printf("%c is an alphabet.\n", a);
//		}
//		else
//		{
//			printf("%c is not an alphabet.\n", a);
//		}
//		getchar();
//	}
//	return 0;
//}
//
//
//字母大小写转换
//int main()
//{
//	char ch=0;
//	while ((ch = getchar()) != EOF)
//	{
//		
//		if (ch >= 'A' && ch <= 'Z')
//		{
//			printf("%c\n", ch + 32);
//		}
//		else if (ch >= 'a' && ch <= 'z')
//		{
//			printf("%c\n", ch - 32);
//		}
//		else
//		{
//			continue;
//		}
//		
//	}
//	return 0;
//}
//
//KiKi非常喜欢网购，在一家店铺他看中了一件衣服，他了解到，
//如果今天是“双11”（11月11日）则这件衣服打7折，
//“双12” （12月12日）则这件衣服打8折，如果有优惠券可以额外减50元（优惠券只能在双11或双12使用），
//求KiKi最终所花的钱数。
//
//一行，四个数字，第一个数表示小明看中的衣服价格，第二和第三个整数分别表示当天的月份、当天的日期、
// 第四个整数表示是否有优惠券（有优惠券用1表示，无优惠券用0表示）。 注：输入日期保证只有“双11”和“双12”
//
//int main()
//{
//	float money = 0;
//	int month = 0;
//	int day = 0;
//	int coupon=0;
//	scanf("%f %d %d %d", &money,&month,&day,&coupon);
//	if (day == 11)
//	{
//		if (coupon == 1)
//		{
//			money = (money * 0.7) - 50;
//		}
//		else
//		{
//			money = money * 0.7;
//		}
//
//	}
//	else if (day == 12)
//	{
//
//		if (coupon == 1)
//		{
//			money = (money * 0.8) - 50;
//		}
//		else
//		{
//			money = money * 0.8;
//		}
//	}
//	if (money <= 0)
//	{
//		money = 0;
//	}
//	printf("%.2f\n", money);
//	return 0;
//}
//写一个函数打印arr数组的内容，不使用数组下标，使用指针。

//arr是一个整形一维数组。
//
//void print(int *p)
//{
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", *(p + i));
//	}
//}
//
//int main()
//{   
//	int arr[10] = { 0,1,2,3,4,5,6,7,8,9 };
//	print(arr);
//
//
//	
//	return 0;
//}
//写一个函数，字符串逆序

//void swap (int *p, int sz)
//{
//	int i = 0;
//	for (i=0; i < sz; i++)
//	{
//		printf("%d", *(p+sz-1)-i);
//	}
//
//}
//
//int main()
//{
//	int arr[] = { 0,1,2,3,4,5,6,7,8,9 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	swap(arr, sz);
//    
//	return 0;
//}

//#include<stdio.h> 
//	int main()
//	{
//		int n, i, m, j, k;
//		scanf("%d", &n);
//		m = (n + 1) / 2;
//		for (i = 1; i <= n; i++)  //一行一行的循环打印
//		{
//			if (i <= m)           //分两种情况，上半部分和下半部分
//			{
//				for (j = m - i; j > 0; j--)
//					printf(" ");
//				for (k = i; k > 0; k--)
//					printf("* ");
//			}
//			else
//			{
//				for (j = i - m; j > 0; j--)
//					printf(" ");
//				for (k = 2 * m - i; k > 0; k--)
//					printf("* ");
//			}
//			printf("\n");        //注意换行
//		}
//
//
//	return 0;
// 
//}

//求水仙花数100~10000

#include<stdio.h>
//int main()
//{
//	printf("输出水仙花数:\n");
//	int i, a, b, c,d;
//	for (i = 100; i <= 999; i++) //整数的取值范围
//	{
//		int a = i % 10;//个位数 
//		int b = (i / 10) % 10;//十位数 
//		int c = i / 100;//百位数 
//
//		if (i == a * a * a + b * b * b + c * c * c) //各位上的立方和是否与原数n相等
//			printf("%d\t", i);
//	}
//	for (i = 1000; i <= 9999; i++) //整数的取值范围
//	{
//		int a = i % 10;//个位数 
//		int b = (i / 10) % 10;//十位数 
//		int c = (i/100)%10;//百位数 
//		int d = i / 1000;//千位数
//
//		if (i == (a * a * a* a) + (b * b * b * b) + (c * c * c * c)+(d*d*d*d)) //各位上的立方和是否与原数n相等
//			printf("%d\t", i);
//	}
//
//	return 0;
//}
//求Sn = a + aa + aaa + aaaa + aaaaa的前5项之和，其中a是一个数字，

//例如：2 + 22 + 222 + 2222 + 22222
int main()
{
	int i = 0;
	int n = 0;
	int temp = 0;
	int sum = 0;
	int j = 0;
	scanf("%d %d", &j, &n);
	for (i=1; i<=j ; i++)
	{
		temp= temp * 10 + n;
		sum = sum + temp;
	}
	printf("%d", sum);


	return 0;
}
