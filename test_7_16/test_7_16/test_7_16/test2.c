#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>

//
//int main()
//{
//	printf("haha\n");
//	return 0;
//}

//字面常量
//
//#define MAX 100
//int main()
//{
//	//1.字面常量
//	//100;
//	//3.14;
//	//'a';
//	//"abcdef";
//
//	//2. const修饰的常变量
//	//const int num = 10;
//	//num = 20;
//	//printf("%d\n", num);//20
//
//	//int arr[10] = {0};//数组
//	//int n = 10;
//	//int arr[n] = { 0 };
//	
//	//3. #define 定义的标识符常量
//	//printf("%d\n", MAX);
//	//MAX = 200;//err
//
//	return 0;
//}

//4. 枚举常量
//枚举 -> 一一列举
//性别：男、女、保密
//血型：
//三原色：R、G、B
//枚举的关键字

//enum Sex
//{
//	//下面是enum Sex类型变量的可能取值，这三个可能取值就是枚举常量
//	MALE,
//	FEMALE,
//	SECRET
//};
//
//int main()
//{
//	//enum Sex s = MALE;//性别
//	printf("%d\n", MALE);
//	printf("%d\n", FEMALE);
//	printf("%d\n", SECRET);
//	return 0;
//}

//int main()
//{
//	//printf("hello bit\n");
//	char arr1[] = "abc";
//	char arr2[] = { 'a', 'b', 'c','\0'};
//	//string length
//	//strlen是库函数，是专门求字符串长的函数
//	//
//	printf("%d\n", strlen(arr1)); 
//	printf("%d\n", strlen(arr2));
//
//	//printf("%s\n", arr1);
//	//printf("%s\n", arr2);
//
//	return 0;
//}
//
//int main()
//{
//	printf("abc\\0def");
//	return 0;
//}

//转义字符
//转变了原来的意思

//int main()
//{
//	//printf("c:\test\test.c");
//	printf("abcndef");
//	printf("abc\ndef");
//
//	return 0;
//}


//三字母词

//单引号引起来的是字符
//双引号是字符串
//
//int main()
//{
//	//printf("(are you ok\?\?)");
//	//(are you ok]
//	//??) --> ]
//	//??( --> [
//
//	//printf("%c\n", '\'');
//	//printf("%s\n", "abc");
//	//printf("%s\n", "a");
//	//printf("%s\n", "\"");
//
//	//printf("c:\\test\\test.c");
//	//printf("\a\a\a\a");
//
//
//	return 0;
//}
//%d - 打印整型
//%s - 打印字符串
//%c - 打印字符


//int main()
//{
//	//printf("%c\n", '\130');
//	//printf("%c\n", '\x40');
//	//0~7
//	printf("%d\n", strlen("c:\test\628\test.c"));
//	//
//
//	return 0;
//}
//

//
//int main()
//{
//	//创建变量a，并赋值10
//	//C++ 的注释风格
//
//	/*
//	C语言的注释风格
//	int a = 10;
//	*/
//
//	return 0;
//}
//

//笔试-在线
//在线OJ
//online judge
//

//实现加法操作
//int Add(int x, int y)
//{
//	return x + y;
//}
//
//int main()
//{
//	//
//	return 0;
//}
//

//int main()
//{
//	int input = 0;
//	printf("加入比特\n");
//	printf("要好好学习吗？(1/0)");
//	scanf("%d", &input);
//
//	if (input == 1)
//	{
//		printf("好offer\n");
//	}
//	else if(input == 0)
//	{
//		printf("卖红薯\n");
//	}
//
//	return 0;
//}

//
//if else
//switch
//

//
//int main()
//{
//	int line = 0;
//	printf("加入比特\n");
//	
//	while (line<20000)
//	{
//		printf("写代码:%d\n", line);
//		line++;
//	}
//
//	if (line == 20000)
//		printf("好offer\n");
//
//	return 0;
//}
//
//
//int Add(int x, int y)
//{
//	int z = x + y;
//	return z;
//}
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int sum = 0;
//	scanf("%d %d", &a, &b);
//	//写一个函数求2个整数的和
//	//sum = a + b;
//	 
//	//函数调用
//	sum = Add(a, b);
//
//	int d = Add(10, 100);
//
//	printf("%d\n", sum);
//	printf("%d\n", d);
//	return 0;
//}
//


//数组
// 一组相同类型元素的集合
//一组数

//
//int main()
//{
//	int n = 0;
//
//	int a = 1;
//	int b = 2;
//	int c = 3;
//	//1~10
//	//定义
//	//int arr[10];
//	//char ch[5];
//	//int count[26];
//	//初始化
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int arr1[10] = { 1,2,3 };//不完全初始化，只初始化前3个，剩余的初始化为0
//	int arr2[] = { 1,2,3 };
//	//int arr3[];//err
//	int arr4[10];
//
//	int age;
//
//	return 0;
//}
//gcc c99
//int main()
//{
//	int n = 10;
//	int arr[n];//C99 变长数组，允许数组在创建的时候，数组大小用变量指定，但是这种数组不能初始化
//
//	return 0;
//}
//
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	//printf("%d\n", arr[8]);
//	//0~9
//	//输入
//	int j = 0;
//	while (j<10)
//	{
//		scanf("%d", &arr[j]);
//		j++;
//	}
//
//	int i = 0;
//	//输出
//	while (i < 10)
//	{
//		printf("%d ", arr[i]);
//		i++;
//	}
//
//	return 0;
//}


//int Add(int x, int y)
//{
//	int z = x + y;
//	return z;
//}
//
//int main()
//{
//	int a = 10;
//
//	return 0;
//}


//#include <stdio.h>
//int num = 10;
//int main()
//{
//    int num = 1;
//    printf("num = %d\n", num);
//    return 0;
//}



