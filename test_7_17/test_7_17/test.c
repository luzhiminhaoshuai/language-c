#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>


//int main()
//{
//	//printf("%d\n", 8 / 2);
//	printf("%d\n", 7 / 2);//7 / 2=3...1
//	printf("%.2lf\n", 7.0 / 2);//3.5
//
//	return 0;
//}

//int main()
//{
//	printf("%d\n", 8 % 2);//8/2=4...0
//	return 0;
//}

//int main()
//{
//	int a = 1;
//	//a >> 1;
//	//a << 1;
//	return 0;
//}

//int main()
//{
//	int a = 0;
//	a = 10;//=就是赋值操作符
//
//	//a = a + 5;
//	//a += 5;
//
//	//a = a - 3;
//	//a -= 3;
//
//	//a *= 3;
//	//a /= 3;
//	printf("a=%d\n", a);
//
//	return 0;
//}

//C语言是如何表示真假的？
//0表示假
//非0表示真
//1 5 -1 
//0

//int main()
//{
//	int a = 0;
//	scanf("%d", &a);//
//
//	printf("%d\n", a);//
//	printf("%d\n", !a);//
//
//	return 0;
//}


//int main()
//{
//	int flag = 0;
//	if (flag)//flag 为真，打印hehe
//	{
//		printf("hehe\n");
//	}
//
//	if (!flag)//flag为假，打印haha
//	{
//		printf("haha\n");
//	}
//
//	return 0;
//}

//int main()
//{
//	int a = -10;
//	int b = -a;
//	printf("%d\n", b);
//
//	int c = +a;
//	printf("%d\n", c);
//
//	return 0;
//}

//sizeof 操作符
//sizeof 计算的结果单位是字节
//sizeof不是函数，是操作符
//
//int main()
//{
//	int a = 10;
//	printf("%d\n", sizeof(a));//4
//	printf("%d\n", sizeof a );//4
//	printf("%d\n", sizeof(int));
//
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 0 };
//	printf("%d\n", sizeof(arr));//40，计算的是数组的总大小，单位是字节
//	printf("%d\n", sizeof(arr[0]));//4
//	printf("%d\n", sizeof(arr) / sizeof(arr[0]));//40 /4=10
//
//	//数组的元素个数如何计算
//	int sz = sizeof(arr) / sizeof(arr[0]);
//
//	return 0;
//}
#include <string.h>

//int main()
//{
//	char arr1[] = "abc";
//	char arr2[] = { 'a', 'b','c' };
//
//	printf("%d\n", strlen(arr1));
//	printf("%d\n", strlen(arr2));
//
//	printf("%d\n", sizeof(arr1));
//	printf("%d\n", sizeof(arr2));
//
//	return 0;
//}


//int main()
//{
//	//int a = 10;
//	//int b = ++a;//前置++，先++，后使用
//	//a=a+1,b=a;
//	//printf("a=%d b=%d\n", a, b);
//
//	//int b = a++;//后置++，先使用，后++
//	//b=a,a=a+1;
//
//	//int b = --a;
//	//a=a-1,b=a;
//
//	// int b = a--;
//	//b=a,a=a-1;
//	//printf("a=%d b=%d\n", a, b);
//
//	return 0;
//}

#include <stdio.h>
//是一个错位的代码，在不同的编译器上有不同的结果
//int main()
//{
//	int a = 1;
//	int b = (++a) + (++a) + (++a);
//	printf("b=%d\n", b);
//
//	return 0;
//}
//

//int main()
//{
//	//int   double
//	int a = (int)3.14;
//	printf("%d\n", a);
//
//	return 0;
//}

//
//int main()
//{
//	//int a = 0;
//	//int b = 0;
//	//
//	//if (a && b)//并且
//	//{
//	//	printf("hehe\n");
//	//}
//	//if (a || b)
//	//{
//	//	printf("hehe\n");
//	//}
//
//	//int age = 20;
//	////if (18 <= age <= 35)//err
//	//if(age>=18 && age<=35)
//	//{
//	//	printf("青年\n");
//	//}
//
//	//int age = 10;
//	////<10 >70
//	//if (age < 10 || age>70)
//	//{
//	//}
//	int a = 0;
//	int b = 0;
//	int m = 0;
//	scanf("%d %d", &a, &b);
//
//	//if (a > b)
//	//	m = a;
//	//else
//	//	m = b;
//
//	m = (a > b ? a : b);
//
//	printf("%d\n", m);
//	return 0;
//}

//int main()
//{
//	int a = 3;
//	int b = 0;
//	int c = 4;
//
//	int d = (a=b-3,b=a+c,c=a-b,a=c+3);
//	        //a=-3 b=1   c=-4  a=-1
//
//	printf("%d\n", d);
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//
//	printf("%d\n", arr[7]);//[]就是下标引用操作符,arr,7
//
//	//2 + 3;//2+3
//	return 0;
//}
//int Add(int x, int y)
//{
//	return x + y;
//}
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int c = Add(a, b);//()就是函数调用操作符
//
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	unsigned int num;
//
//	return 0;
//}


//typedef unsigned int unit;
//
//int main()
//{
//	unsigned int num1 = 10;
//	unit num2 = 20;
//
//	return 0;
//}

//数据结构

//typedef struct Node
//{
//	int data;
//	struct Node* next;
//}Node;

//
//int main()
//{
//	//register 起一个建议的作用
//	int num = 10;
//
//	return 0;
//}
//

//void test()
//{
//	int a = 1;	
//	++a;
//	printf("%d ", a);
//}
//
//int main()
//{
//	int i = 0;
//	while (i<10)
//	{
//		test();
//		i++;
//	}
//	return 0;
//}

//extern是声明外部符号的
//extern int g_val;
//
//int main()
//{
//	printf("%d\n", g_val);
//
//	return 0;
//}
//

//声明外部来的函数
extern int Add(int x, int y);

int main()
{
	int a = 10;
	int b = 20;
	int sum = Add(a, b);

	printf("%d\n", sum);

	return 0;
}






