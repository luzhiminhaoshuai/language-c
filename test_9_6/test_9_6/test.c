#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//
//int main()
//{
//	//char* 
//	//char ch = 'w';
//	//char* pc = &ch;
//	//2 + 3;
//	const char *ps = "abcdef";
//	//printf("%s\n", ps);
//	printf("%c\n", *ps);
//
//	return 0;
//}

//指针数组-存放指针的数组
//char*
//int* 
//char** 
//

//int main()
//{
//	char* arr[4];//存放指针的数组
//	int* arr2[6];//存放指针的数组
//	return 0;
//}


//数组指针
//整型指针 - int* - 指向整型的指针
//字符指针 - char* - 指向字符的指针
//数组指针 - 指向数组的指针

//int main()
//{
//	int num = 10;
//	int* p = &num;
//
//	int arr[10] = {0};
//	int (*pa)[10] = &arr;//取出的是数组的地址
//	//pa就是一个数组指针变量
//	
//	int* p2 = arr;//数组名其实是数组首元素的地址，arr就是&arr[0]
//
//	return 0;
//}

//函数指针-也是指针-指向函数的指针

//int Add(int x, int y)
//{
//	return x + y;
//}
//
//int main()
//{
//	//pf就是函数指针变量
//	int (*pf)(int, int) = Add;//&Add
//	//int sum = (*pf)(3, 5);
//	int sum = pf(3, 5);
//
//	printf("%d\n", sum);
//
//	return 0;
//}

//
//函数指针数组
//

//int main()
//{
//	//函数指针数组
//	int (*pfArr[5])(int, int);
//	
//	//p3是一个指向【函数指针数组】的指针
//	int (* (*p3)[5])(int, int) = &pfArr;
//
//	return 0;
//}

//
//使用函数指针实现回调函数
//

//关于数组名
//数组名是数组首元素的地址
//但是有2个例外：
//1. sizeof(数组名) - 数组名表示整个数组，计算的是整个数组的大小，单位是字节
//2. &数组名 - 数组名也表示整个数组，取出的是整个数组的地址
//除了这个2个例外，你见到的所有的数组名都表示首元素的地址
//
//
//int main()
//{
//	int a[] = { 1,2,3,4 };
//	//int* p = a;
//	//int (*pa)[4] = &a;
//	//printf("%p\n", p);
//	//printf("%p\n", p+1);
//
//	//printf("%p\n", pa);
//	//printf("%p\n", pa+1);
//
//	//a  - int*
//	//&a - int (*)[4]
//
//	printf("%d\n", sizeof(a));//16,a作为数组名单独放在sizeof内部，计算的是数组的总大小，单位是字节
//	printf("%d\n", sizeof(a + 0));//a并非单独放在sizeof内部，也没有&，所以数组名a就是数组首元素的地址
//	//a+0还是数组首元素的地址，是地址大小就是 4/8 个字节
//	printf("%d\n", sizeof(*a));//a是首元素的地址，*a就是首元素，sizeof(*a)就算的就是首元素的大小 - 4
//	//a  - int*
//	//*a - int
//	printf("%d\n", sizeof(a + 1));//a是首元素的地址,a+1是第二个元素的地址，sizeof(a+1)计算的是指针的大小 - 4/8
//	//a - int*
//	//a+1, 跳过一个int
//	printf("%d\n", sizeof(a[1]));//a[1]就是数组的第二个元素，sizeof(a[1])的大小 - 4个字节
//	printf("%d\n", sizeof(&a));//&a取出的数组的地址，数组的地址，也是地址呀，sizeof(&a)就是 4/8 个字节
//
//	printf("%d\n", sizeof(*&a));//&a是数组的地址，是数组指针类型，*&a是都数组指针解引用，访问一个数组的大小
//	//16字节
//	//sizeof(*&a) ==> sizeof(a)  =16
//	
//	printf("%d\n", sizeof(&a + 1));//&a数组的地址，&a+1跳过整个数组，&a+1还是地址，是 4/8 个字节
//	printf("%d\n", sizeof(&a[0]));//a[0]是数组的第一个元素，&a[0]是第一个元素的地址，是 4/8 个字节
//	printf("%d\n", sizeof(&a[0] + 1));//&a[0]是第一个元素的地址，&a[0]+1就是第二个元素的地址,是 4/8 个字节
//
//	//&a[0] - int*
//	//&a[0]+1 -> &a[1]
//
//	return 0;
//}
//

//& - 取地址操作符
//* - 解引用操作符

//int main()
//{
//	int a[10];
//
//	//sizeof(&*a);
//	//sizeof(a);
//
//	return 0;
//}

//
//sizeof 是计算对象或者类型创建的对象所占内存空间的大小，单位是字节
//sizeof 是操作符，不是函数
//
//strlen 求字符串长度的，计算的是字符串中\0之前出现的字符的个数
//统计到\0为止,如果没有看到\0，会继续往后找
//strlen 是库函数
//

#include <string.h>
//
//int main()
//{
//	char arr[] = { 'a','b','c','d','e','f' };
//
//	printf("%d\n", strlen(arr));//随机值，arr是数组名，但是没有放在sizeof内部，也没&，arr就是首元素的地址
//	//strlen得到arr后，从arr数组首元素的地方开始计算字符串的长度，直到直到\0，但是arr数组中没有\0，arr内存的后边是否有\0，在什么位置
//	//是不确定的，所以\0之前出现了多少个字符是随机的。
//	//
//	printf("%d\n", strlen(arr + 0));//arr是数组首元素的地址，arr+0还是首元素的地址
//	//随机值
//
//	//printf("%d\n", strlen(*arr));//arr是数组首元素的地址,*arr 是首元素 - ‘a’ - 97
//	//strlen就把‘a’的ASCII码值 97 当成了地址
//	//err 会非法访问内存
//	 
//	//printf("%d\n", strlen(arr[1]));//arr[1] - 'b' - 98 - err
//
//	printf("%d\n", strlen(&arr));//随机值,&arr是数组的地址，数组的地址也是指向数组起始位置，和第一个案例一样
//	printf("%d\n", strlen(&arr + 1));//随机值
//	printf("%d\n", strlen(&arr[0] + 1));//随机值
//
//
//	//printf("%d\n", sizeof(arr));//arr是数组名，并且是单独放在sizeof内部，计算的是数组总大小，单位是字节 - 6
//	//printf("%d\n", sizeof(arr + 0));//arr是数组名，并非单独放在sizeof内部，arr表示首元素的地址，arr+0还是首元素的地址
//	////是地址大小就是4/8
//	//
//	//printf("%d\n", sizeof(*arr));//arr是首元素的地址，*arr就是首元素，sizeof计算的是首元素的大小，是1字节
//	//printf("%d\n", sizeof(arr[1]));//arr[1]是数组的第二个元素，sizeof(arr[1])计算的是第二个元素的大小，1个字节
//	//printf("%d\n", sizeof(&arr));//&arr- 取出的是数组的地址，sizeof(&arr))计算的是数组的地址的大小，是地址就是4/8字节
//	//printf("%d\n", sizeof(&arr + 1));//&arr是数组的地址，&arr+1跳过整个数组，指向'f'的后边，&arr+1的本质还是地址，是地址就是4/8字节
//	//printf("%d\n", sizeof(&arr[0] + 1));//&arr[0]是‘a’的地址，&arr[0]+1是'b'的地址,是地址就是4/8字节
//	//&arr[0] - char*
//	//
//
//	return 0;
//}
//
#include <string.h>
//
//int main()
//{
//	char arr[] = "abcdef";
//
//	//char ch = 'w';
//	//int* pc = &ch;//char*
//
//	printf("%d\n", strlen(arr));
//	printf("%d\n", strlen(arr + 0));
//	printf("%d\n", strlen(*arr));
//	printf("%d\n", strlen(arr[1]));
//	printf("%d\n", strlen(&arr));
//	printf("%d\n", strlen(&arr + 1));
//	printf("%d\n", strlen(&arr[0] + 1));
//
//	//printf("%d\n", sizeof(arr));
//	//printf("%d\n", sizeof(arr + 0));
//	//printf("%d\n", sizeof(*arr));
//	//printf("%d\n", sizeof(arr[1]));
//	//printf("%d\n", sizeof(&arr));
//	//printf("%d\n", sizeof(&arr + 1));
//	//printf("%d\n", sizeof(&arr[0] + 1));
//
//	return 0;
//}

int main()
{
	const char* p = "abcdef";

	printf("%d\n", strlen(p));//
	printf("%d\n", strlen(p + 1));
	printf("%d\n", strlen(*p));
	printf("%d\n", strlen(p[0]));
	printf("%d\n", strlen(&p));
	printf("%d\n", strlen(&p + 1));
	printf("%d\n", strlen(&p[0] + 1));

	//printf("%zu\n", sizeof(p));
	//printf("%zu\n", sizeof(p + 1));
	//printf("%zu\n", sizeof(*p));
	//printf("%zu\n", sizeof(p[0]));
	//printf("%zu\n", sizeof(&p));
	//printf("%zu\n", sizeof(&p + 1));
	//printf("%zu\n", sizeof(&p[0] + 1));

	return 0;
}
//
