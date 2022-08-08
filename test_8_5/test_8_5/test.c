#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>


//int Add(int x, int y)
//{
//	int z = x + y;
//	return z;
//}
//
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6 };
//	char ch[] = "abcdef";
//	int a = 10;
//	int b = 20;
//	int ret = Add(a, b);
//	printf("%d\n", ret);
//	return 0;
//}

//
//void test2()
//{
//	printf("test2\n");
//}
//
//void test1()
//{
//	test2();
//}
//
//void test()
//{
//	test1();
//}
//
//int main()
//{
//	test();
//	return 0;
//}
//

//实现代码：求 1！ + 2！ + 3！ ... + n!；不考虑溢出。
//n! = 1*2*3..*n
//

//int main()
//{
//	int n = 0;
//	int i = 0;
//	int ret = 1;
//	int sum = 0;
//	//1!+2!+3! = 1+2+6 = 9
//	for (n = 1; n <= 3; n++)
//	{
//		ret = 1;
//		for (i = 1; i <= n; i++)
//		{
//			ret = ret * i;
//		}
//		sum = sum + ret;
//	}
//	printf("%d\n", sum);
//	return 0;
//}


//#include <stdio.h>
//
//int main()
//{
//	int i = 0;
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//
//	//printf("%p\n", &i);
//	//printf("%p\n", &arr[0]);
//	//printf("%p\n", &arr[9]);
//	
//	//0~9
//	for (i = 0; i <= 12; i++)
//	{
//		arr[i] = 0;
//		printf("hehe\n");
//	}
//
//	return 0;
//}


//
//<c陷阱和缺陷>
//
//模拟实现库函数：strcpy
#include <string.h>

//void my_strcpy(char* dest, char* src)
//{
//	while (*src != '\0')
//	{
//		*dest++ = *src++;
//	}
//	*dest = *src;
//}

//void my_strcpy(char* dest, char* src)
//{
//	while (*dest++ = *src++)
//	{
//		;
//	}
//}

#include <assert.h>

//void my_strcpy(char* dest, char* src)
//{
//	//assert(dest != NULL);//断言
//	//assert(src != NULL);//断言
//
//	//assert(dest);//断言
//	//assert(src);//断言
//
//	assert(dest && src);//断言
//
//	while (*dest++ = *src++)
//	{
//		;
//	}
//}
//
//健壮性（鲁棒性）
//函数返回的是目标空间的起始地址
//
//char* my_strcpy(char* dest, const char* src)
//{
//	char* ret = dest;
//	assert(dest && src);//断言
//
//	while (*dest++ = *src++)
//	{
//		;
//	}
//	return ret;
//}
//
//int main()
//{
//	char arr1[20] = "xxxxxxxxxx";
//	//xxxxxxxxxx
//	char arr2[] = "hello";
//
//	printf("%s\n", my_strcpy(arr1, arr2));
//
//	return 0;
//}


//const修饰指针，放在*的左边，表示的是指针指向的内容不能通过指针来修改，但是指针变量本身可修改
//*p = 0;//err
//p = &ret;//ok
//
//const修饰指针，放在*的右边，表示的是指针变量本身不能修改，但是指针指向的内容可以通过指针来修改
//p = &ret;//err
//*p = 0;//ok
//

//int main()
//{
//	const int num = 10;
//	//num = 20;//err
//	int ret = 100;
//
//	const int * p = &num;
//	//*p = 20;
//	//p = &ret;
//
//	printf("%d\n", num);
//	printf("%d\n", *p);
//
//
//	return 0;
//}
//

//
//int my_strlen(const char* str)
//{
//	assert(str);
//	int count = 0;
//	while (*str)
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//
//










