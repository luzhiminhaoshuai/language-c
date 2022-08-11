#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//数组指针

//int main()
//{
//	int a = 10;
//	int*p1 = &a;
//
//	char ch = 'w';
//	char* p2 = &ch;
//
//	char arr[6] = {0};
//	char (*p3)[6] = &arr;
//
//	return 0;
//}

//数组指针到底怎么用？

//void print1(int arr[10], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//}
//
//void print1(int *arr, int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", *(arr+i));
//	}
//	printf("\n");
//}
//
//void print2(int(*p)[10], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", (*p)[i]);//arr;
//	}
//	printf("\n");
//}
//
//void test1()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//
//	//print1(arr, sz);
//	print2(&arr, sz);
//}
//
//void print3(int arr[3][5], int r, int c)
//{		 
//	int i = 0;
//	for (i = 0; i < r; i++)
//	{
//		int j = 0;
//		for (j = 0; j < c; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//}
//
//void print4(int (*p)[5], int r, int c)
//{
//	int i = 0;
//	for (i = 0; i < r; i++)
//	{
//		int j = 0;
//		for (j = 0; j < c; j++)
//		{
//			printf("%d ", *(*(p + i) + j));
//		}
//		printf("\n");
//	}
//}
//
//void test2()
//{
//	int arr[3][5] = { {1,2,3,4,5},{2,3,4,5,6},{3,4,5,6,7} };
//	//print3(arr, 3, 5);
//	print4(arr, 3, 5);
//}
//
//int main()
//{
//	//test1();
//	test2();
//	return 0;
//}

//
//int Add(int x, int y)
//{
//	return x + y;
//}
//
//int main()
//{
//	//pf就是函数指针变量
//	//int (*pf)(int x, int y) = &Add;
//	int (* pf)(int x, int y) = Add;
//	int sum = (*pf)(3, 5);
//	//int sum = Add(3, 5);
//
//	printf("%d\n", sum);
//
//	//int arr[10] = {0};
//	//int (*p)[10] = &arr;
//	//printf("%p\n", &arr);//取出数组的地址
//	//printf("%p\n", arr);//取出数组的地址
//
//	//Add 和 &Add都是函数的地址，没有区别
//	//printf("%p\n", Add);
//	//printf("%p\n", &Add);
//
//	
//
//	return 0;
//}

//int test(const char* str, double d)
//{
//
//}
//
//int main()
//{
//	//int (*pt)(const char*, double) = &test;
//	//int (*pt)(const char* str, double d) = &test;
//
//	return 0;
//}
//void (* )();


//typedef unsigned int uint;
//
//int main()
//{
//	//0 - int
//	//( void (*)() )0 - 把0当做一个函数的地址
//	//
//	//( *( void (*)() )0 )();
//	//
//	//把0直接转换成一个void (*)()的函数指针，然后去调用0地址处的函数
//	//int float
//	void(*signal(int, void(*)(int)))(int);
//
//	typedef void(*pf_t)(int) ;
//	pf_t signal( int, pf_t);
//
//	//
//	//上述代码是一次函数声明
//	//声明的函数叫：signal
//	//signal函数的第一个参数是int类型的
//	//signal函数的第二个参数是一个函数指针类型，该函数指针指向的函数参数是int，返回类型是void
//	//signal函数的返回类型也是一个函数指针类型，该函数指针指向的函数参数是int，返回类型是void
//	//void (*)(int) signal(int, void(*)(int)); //err
//
//	return 0;
//}

//int Add(int x, int y)
//{
//	return x + y;
//}
//
//int main()
//{
//	int (*pf)(int, int) = Add;
//
//	return 0;
//}
//
//int Add(int x, int y)
//{
//	return x + y;
//}
//
//int Sub(int x, int y)
//{
//	return x - y;
//}
//
//int main()
//{
//	//函数指针数组
//	//可以存放多个【参数相同、返回类型相同】的函数的地址
//	int (* pfArr[2])(int, int) = {Add, Sub};
//	
//	int ret = pfArr[0](2, 3);
//	printf("%d\n", ret);
//	
//	ret = pfArr[1](2, 3);
//	printf("%d\n", ret);
//
//	return 0;
//}

//
//写一个计算器
//整数的加、减、乘、除
//
//
//int Add(int x, int y)
//{
//	return x + y;
//}
//
//int Sub(int x, int y)
//{
//	return x - y;
//}
//
//int Mul(int x, int y)
//{
//	return x * y;
//}
//
//int Div(int x, int y)
//{
//	return x / y;
//}
//
//
//void menu()
//{
//	printf("***************************\n");
//	printf("***** 1.add    2. sub  ****\n");
//	printf("***** 3.mul    4. div  ****\n");
//	printf("***** 0.exit           ****\n");
//	printf("***************************\n");
//}
//
//int main()
//{
//	int input = 0;
//	int x = 0;
//	int y = 0;
//	int ret = 0;
//	do
//	{
//		menu();
//		printf("请选择:>");
//		scanf("%d", &input);
//		
//		switch (input)
//		{
//		case 1:
//			printf("请输入2个操作数:>");
//			scanf("%d %d", &x, &y);
//			ret = Add(x, y);
//			printf("%d\n", ret);
//			break;
//		case 2:	
//			printf("请输入2个操作数:>");
//			scanf("%d %d", &x, &y);
//			ret = Sub(x, y);
//			printf("%d\n", ret);
//			break;
//		case 3:
//			printf("请输入2个操作数:>");
//			scanf("%d %d", &x, &y);
//			ret = Mul(x, y);
//			printf("%d\n", ret);
//			break;
//		case 4:
//			printf("请输入2个操作数:>");
//			scanf("%d %d", &x, &y);
//			ret = Div(x, y);
//			printf("%d\n", ret);
//			break;
//		case 0:
//			printf("退出计算器\n");
//			break;
//		default:
//			printf("选择错误\n");
//			break;
//		}
//	} while (input);
//}

//简化一下代码

int Add(int x, int y)
{
	return x + y;
}

int Sub(int x, int y)
{
	return x - y;
}

int Mul(int x, int y)
{
	return x * y;
}

int Div(int x, int y)
{
	return x / y;
}


void menu()
{
	printf("***************************\n");
	printf("***** 1.add    2. sub  ****\n");
	printf("***** 3.mul    4. div  ****\n");
	printf("***** 0.exit           ****\n");
	printf("***************************\n");
}

int main()
{
	int input = 0;
	int x = 0;
	int y = 0;
	int ret = 0;

	//函数指针数组   - 转移表
	int (*pfArr[])(int, int) = { 0, Add, Sub, Mul, Div };

	do
	{
		menu();
		printf("请选择:>");
		scanf("%d", &input);
		if (input == 0)
		{
			printf("退出计算器\n");
			break;
		}

		if (input >= 1 && input <= 4)
		{
			printf("请输入2个操作数:>");
			scanf("%d %d", &x, &y);
			ret = pfArr[input](x, y);
			printf("%d\n", ret);
		}
		else
		{
			printf("选择错误\n");
		}	
	} while (input);
}
