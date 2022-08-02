#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//int main()
//{
//	int a = 10;
//	char ch;
//	int * pa = &a;
//	*pa = 20;//解引用操作符（间接访问操作符）
//	printf("%d\n", a);
//	//char * pc = &ch;
//
//	//printf("%d\n", sizeof(pa));
//	//printf("%d\n", sizeof(pc));
//
//	//printf("%p\n",  &a);
//	return 0;
//}


//int main()
//{
//	int* pa;
//	char* pc;
//	float* pf;
//
//	//ptr_t p;
//
//	printf("%d\n", sizeof(pa));
//	printf("%d\n", sizeof(pc));
//	printf("%d\n", sizeof(pf));
//
//	return 0;
//}
//
//int main()
//{
//	int a = 0x11223344;
//	//int*pa = &a;
//	//*pa = 0;
//	char* pc = &a;
//	*pc = 0;
//
//	return 0;
//}



//int main()
//{
//	int a = 0x11223344;
//	int*  pa = &a;
//	char* pc = &a;
//
//	printf("pa=%p\n", pa);
//	printf("pc=%p\n", pc);
//
//	printf("pa+1=%p\n", pa -1);
//	printf("pc+1=%p\n", pc -1);
//
//	return 0;
//}


//int main()
//{
//	int arr[10] = { 0 };
//	int* p = arr;//数组名就是数组首元素的地址arr->&arr[0];
//
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		*(p + i) = i + 1;
//	}
//
//	//1~10
//	//char* p = arr;
//	
//	//int i = 0;
//	//for (i = 0; i < 10; i++)
//	//{
//	//	*p = i + 1;
//	//	p++;
//	//}
//
//	return 0;
//}
//

//int main()
//{
//	int* p;//p就是野指针
//	*p = 20;
//
//	return 0;
//}

//int main()
//{
//	int arr[10] = {0};
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int* p = arr;
//	for (i = 0; i <= sz; i++)
//	{
//		*p = i;
//		p++;
//	}
//
//	return 0;
//}


//int* test()
//{
//	int num = 100;
//	return &num;
//}
//
//int main()
//{
//	int* p = test();
//	*p = 200;
//
//	return 0;
//}


//int main()
//{
//	int a = 10;
//	int* pa = &a;//明确初始化
//
//	//NULL - 0，就是初始化指针的
//	int* p = NULL;
//
//
//	return 0;
//}

//
//int main()
//{
//	int a = 10;
//	int* p = NULL;
//	//*p = 20;
//
//	//int* p = &a;
//
//	if (p != NULL)
//	{
//		printf("%d\n", *p);
//	}
//
//	return 0;
//}

//int main()
//{
//	double arr[5] = {0};
//	double* p = arr;
//	int i = 0;
//	for (i = 0; i < 5; i++)
//	{
//		printf("%lf ", *(p + i));
//	}
//
//	return 0;
//}
//
//#define N_VALUES 5
//float values[N_VALUES];
//float* vp;
//
//int main()
//{
//	for (vp = &values[N_VALUES - 1]; vp >= &values[0]; vp--)
//	{
//		*vp = 1;
//	}
//	return 0;
//}

//int main()
//{
//	//两个指针相减的前提是：指针指向的同一块连续的空间
//	int arr[10] = {0};
//	printf("%d\n", &arr[9] - &arr[0]);
//	printf("%d\n", &arr[0] - &arr[9]);
//
//	int a = 10;
//	char c = 'w';
//	printf("%d\n", &a - &c);//err
//
//	return 0;
//}
//


#include <string.h>

//1. 计数器
//int my_strlen(char* str)
//{
//	int count = 0;
//	while (*str)
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//2. 递归的版本

//3. 指针-指针
//int my_strlen(char* str)
//{
//	char* start = str;
//	while (*str)
//		str++;
//	return str - start;
//}
//
//int main()
//{
//	char arr[] = "abc";
//	int len = my_strlen(arr);
//	printf("%d\n", len);
//
//	return 0;
//}
//

int main()
{
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int* p = arr;
	int i = 0;
	int sz = sizeof(arr) / sizeof(arr[0]);
	/*for (i = 0; i < sz; i++)
	{
		printf("%d ", *p);
		p++;
	}*/

	for (i = 0; i < sz; i++)
	{
		printf("%d ", *(p + i));
	}

	return 0;
}



