#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//int main()
//{
//       int n = 1;
//       int m = 2;
//    switch (n)
//    {
//    case 1:
//        m++;
//    case 2:
//        n++;
//    case 3:
//        switch (n)
//        {//switch允许嵌套使用
//        case 1:
//            n++;
//        case 2:
//            m++;
//            n++;
//            break;
//        }
//    case 4:
//        m++;
//        break;
//    default:
//        break;
//    }
//    printf("m = %d, n = %d\n", m, n);
//    return 0;
//}
//#include <stdio.h>
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

//打印3的倍数数字，范围是1~100
//int main()
//{
//	int i = 0;
//	for (i = 3; i < 101; i += 3)
//		printf(" %d \n", i);
//
//	return 0;
//}
//
//从大到小输出3个数字

//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	scanf("%d %d %d", &a, &b, &c);
//	bj(a, b, c);
//	return 0;
//}
//int bj(int x, int y, int z)
//{
//	if (x < y)
//	{
//		if (y < z)
//		{
//			printf("%d>%d>%d", z,y, x);
//		}
//		else
//		{
//			printf("%d>%d>%d", y, z, x);
//		}
//	}
//	else if (y < x)
//	{
//		if (x < z)
//		{
//			printf("%d>%d>%d", z, x, y);
//
//		}
//		else
//		{
//			printf("%d>%d>%d", x, z, y);
//
//		}
//	}
//}


//打印100~200之间的素数
//int main()
//{   
//	int i = 0;
//	int j = 0;
//	for (i = 100;i < 201; i++)
//	{
//		for (j = 2; j < i; j++)
//		{
//			if (i % j == 0)//如果能整除，就继续循环
//				break;
//
//		}
//		if (i == j)
//		{
//			printf("%d\n", i);
//		}
//		
//
//	}
//	return 0;
//}
//打印1000年到2000年的闰年
// 不整百能被4整除
// 整百能被400整除
//
//int main()
//{
//	int i = 0;
//	
//	for (i = 1000; i < 2001; i++)
//	{
//		   
//			if (i % 100==0)
//            {
//				if(0==i%400)//如果能被一百整除又能被400整除
//				printf(" %d ", i);
//			}
//			else if(i%100!=0&&i%4==0)
//				printf(" %d ", i);
//          
//  
//			
//	
//
//	}
//	return 0;
//}
//求最大公约数
//int main()
//{    
//	scan
//	return 0;
//}
//输入两个数求最大公约数
//
//int main()
//{
//	int a = 1;
//	int b = 1;
//	int c = (a%b);
//	int d = (b%a);
//
//	while (scanf("%d %d", &a, &b) != EOF)
//	{
//
//
//		if (a >= b)
//		{
//			while (c != 0)
//			{
//				a = b;
//				b = c;
//				c = (b % a);
//			}
//			printf("最大公约数为：%d\n", b);
//		}
//		else if (b > a)
//
//		{
//			while (d != 0)
//			{
//				b = a;
//				a = c;
//				d = (b % a);
//			}
//			printf("最大公约数为：%d\n", a);
//
//		}
//		
//	}
//	return 0;
//}

int main()
{   
	int i = 0;
	int j = 0;
	int arr1[9] = { 1,2,3,4,5,6,7,8,9 };
	int arr2[9] = { 1,2,3,4,5,6,7,8,9 };
	for (i = 0; i < 9; i++)
	{   for(j=0;j<=i;j++)
		printf("%d * %d = %d ", arr1[i], arr2[j],arr1[i]*arr2[j]);
		
	    printf("\n");
	}
	return 0;
}