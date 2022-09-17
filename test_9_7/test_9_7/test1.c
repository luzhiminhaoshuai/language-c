#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int main()
//{
//	int arr[2][3] = { {1,2,3},{4,5,6} };
//	return 0;
//}
//判断运行的结果
// 判断三角形
//int main()
//{
//    int a[4] = { 1, 2, 3, 4 };
//    int* ptr1 = (int*)(&a + 1);
//    int* ptr2 = (int*)((int)a + 1);
//    printf("%x,%x", ptr1[-1], *ptr2);
//    return 0;
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	while (scanf("%d %d %d", &a, &b, &c) != EOF)
//	{
//		if (a + b > c && a + c > b && b + c > a)
//		{
//			if (a == b && b == c)
//			{
//				printf("Equilateral triangle!\n");
//			}
//			else if (a == b || a == c || b == c)
//			{
//				printf("Isosceles triangle!\n");
//			}
//			else
//			{
//				printf("Ordinary triangle!\n");
//			}
//		}
//		else
//		{
//			printf("Not a triangle!\n");
//		}
//	}
//
//	return 0;
//}
////竞选社长
//int main()
//{   
//	char s = '1';
//	int count = 0;
//	while (s = getchar() != '0')
//	{
//		if (s == 'A')
//		{
//			count++;
//		}
//		else
//		{
//			count--;
//		}
//
//	}
//	if (count == 0)
//	{
//		printf("E");
//	}
//	else if (count > 0)
//	{
//		printf("A");
//	}
//	else
//	{
//		printf("B");
//	}
//	return 0;
//}
//float pingjun(int arr[]);
//
//int main()
//{
//	
//	while (1)
//	{  
//		int arr[7] = { 0 };
//		for (int i = 0; i < 7; i++)
//		{
//			scanf("%d", &arr[i]);
//		}
//		if (arr[0] == NULL)
//		{
//			break;
//		}
//		float p = pingjun(arr);
//		printf("%.2f\n", p);
//		
//	}
//	
//	return 0;
//}
//float pingjun(int arr[])
//{
//	int min = 100;
//	int max = 0;
//	for (int j = 0; j < 7; j++)
//	{
//		if (arr[j] < min)
//			min = arr[j];
//		if (arr[j] > max)
//			max = arr[j];
//	}
//	int sum = 0;
//	for (int j = 0; j < 7; j++)
//	{
//		sum = sum + arr[j];
//	}
//	sum = sum - max - min;
//	float p = (float)sum / 5;
//	return p;
//}

int main()
{
	int input = 0;
	while (scanf("%d", &input) != EOF)
	{
		if (input == 200)
		{
			printf("OK\n");
		}
		if (input == 202)
		{
			printf("Accepted\n");
		}
		if (input == 400)
		{
			printf("Bad-Request\n");
		}
		if (input == 403)
		{
			printf("Forbidden\n");
		}
		if (input == 404)
		{
			printf("No Found\n");
		}
		if (input == 500)
		{
			printf("internal Sever Error\n");
		}
		if (input == 502)
		{
			printf("Bad Gateway\n");
		}
	}
	return 0;
}



