#define _CRT_SECURE_NO_WARNINGS 1
//
//写一个代码在屏幕上打印hello bit

//头文件的包含
//#include <stdio.h>
//
//int main()
//{
//	//打印hello bit
//	printf("hello bit\n");
//	return 0;
//}

//
//main是主函数的意思
//main 是程序的入口，有且仅有一个
//F10
//

//stdio std input output 
//.h header
//标准输入输出
#include <stdio.h>
//
//整型
//
//printf是库函数，库函数的使用是需要包含头文件的
//
//int main()
//{
//	//printf("hello bit\n");//""括起来的叫字符串
//	printf("hello zhangsan\n");
//	return 0;
//}

//下面的代码是可以的
//int main(void)//void表示main函数不需要参数
//{
//
//	return 0;
//}
//不建议这样写
//void main()
//{
//	//这种写法是非常古老
//}

//不标准的写法
//main()
//{
//
//}

//ctrl+k+c 注释
//ctrl+k+u 取消注释

//
//%d 打印10进制的整数
//sizeof 
//int main()
//{
//	//printf("%d\n", 100);
//	printf("%d\n", sizeof(char));
//	printf("%d\n", sizeof(short));
//	printf("%d\n", sizeof(int));
//	printf("%d\n", sizeof(long));
//	printf("%d\n", sizeof(long long));
//	printf("%d\n", sizeof(float));
//	printf("%d\n", sizeof(double));
//
//	return 0;
//}
//
//
//int main()
//{
//	//int a$b;//err
//	//int _2b;
//	//int _2B;
//	//int float;
//	return 0;
//}
//


//int b = 20;//全局变量
//
//void test()
//{
//	int c;//?
//}
//
//int main()
//{
//	int a = 10;//局部变量
//
//	return 0;
//}

//int a = 20;
//
//int main()
//{
//	int a = 10;
//	//局部变量和全局变量的名字可以相同，当我们既可以使用局部，又可以使用全局变量的时候，局部变量优先。
//	printf("%d\n", a);
//
//	return 0;
//}

//写一个程序计算2个整数的和
//printf - 输出/打印
//scanf -  输入
//& 取地址
//
//scanf
//strcpy
//strcat
//...
//
//int main()
//{
//	int num1 = 0;
//	int num2 = 0;
//	int sum = 0;
//
//	//1.输入2个整数
//	scanf("%d %d", &num1, &num2);
//	//2.求和
//	sum = num1 + num2;
//	//3.输出
//	printf("%d\n", sum);
//
//	return 0;
//}
//

//int main()
//{
//	int b = 20;
//	{
//		int a = 10;
//		printf("1:%d\n", a);
//	}
//
//	printf("2:%d\n", a);
//
//	return 0;
//}

//int a = 10;
//
//void test()
//{
//	printf("test-->%d\n", a);
//}
//
//int main()
//{
//	printf("%d\n", a);
//	test();
//	return 0;
//}

//声明来自外部的符号
//extern是用来声明外部符号的

//extern int g_val;
//
//int main()
//{
//	printf("%d\n", g_val);
//
//	return 0;
//}


//int main()
//{
//	{
//		int a = 0;
//		printf("%d\n", a);
//	}
//
//	return 0;
//}

int main()
{

	return 0;
}