 #define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//int main()
//{
//	int a = 10;//
//	int* p = &a;//p就是指针变量，一级指针变量
//	int** pp = &p;//pp就二级指针
//
//	//*(*pp) = 200;
//	**pp = 200;
//	//*p = 20;
//	printf("%d\n", a);
//
//	return 0;
//}

//int main()
//{
//	int a = 10;//
//	int* p = &a;//p就是指针变量，一级指针变量
//	int** pp = &p;//pp就二级指针
//	int*** ppp = &pp;
//	int**** pppp = &ppp;
//
//
//	return 0;
//}



//int main()
//{
//	//整型数组-存放整型的数组
//	int arr[10];
//	//字符数组-存放字符的数组
//	char arr2[5];
//	//指针数组-存放指针的数组
//	int* arr3[5];//存放整型指针的数组
//	char* arr4[6];//存放字符指针的数组
//
//	return 0;
//}


//int main()
//{
//	int a = 10;
//	int b = 20;
//	int c = 30;
//	int d = 40;
//	int e = 50;
//
//	int* arr3[5] = {&a, &b, &c, &d, &e};//存放整型指针的数组
//	int i = 0;
//	for (i = 0; i < 5; i++)
//	{
//		printf("%d ", *(arr3[i]));
//	}
//
//	return 0;
//}

//
//int main()
//{
//	//用一维数组模拟一个二维数组
//	int arr1[] = { 1,2,3,4,5 };
//	int arr2[] = { 2,3,4,5,6 };
//	int arr3[] = { 3,4,5,6,7 };
//	int arr4[] = { 4,5,6,7,8 };
//
//	int* arr[4] = {arr1, arr2, arr3, arr4};
//	int i = 0;
//	for (i = 0; i < 4; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 5; j++)
//		{
//			printf("%d ", *(*(arr+i)+j));
//		}
//		printf("\n");
//	}
//
//	//int i = 0;
//	//for (i = 0; i < 4; i++)
//	//{
//	//	int j = 0;
//	//	for (j = 0; j < 5; j++)
//	//	{
//	//		printf("%d ", arr[i][j]);
//	//	}
//	//	printf("\n");
//	//}
//
//	return 0;
//}
//


//学生
//名字+年龄+性别+身高
//
//struct Stu
//{
//	char name[20];//名字
//	int age;//年龄
//	char sex[5];//性别
//	int hight;//身高
//}s1,s2,s3;//全局变量
//
//struct Stu s5;
//
//int main()
//{
//	struct Stu s4;//局部变量
//
//	return 0;
//}
//
//struct Point
//{
//	int x;
//	int y;
//};
//
//
//struct Stu
//{
//	char name[20];//名字
//	int age;//年龄
//	char sex[5];//性别
//	int hight;//身高
//};
//
//struct S
//{
//	char c;
//	struct Point p;
//	double d;
//	char str[20];
//};
//
//int main()
//{
//	//struct S ss = { 'x', {100, 200}, 3.14, "hehe"};
//	struct S ss = {.d=3.14, .c = 'x', .p.x =100};
//	printf("%c %d %d %lf %s\n", ss.c, ss.p.x, ss.p.y, ss.d, ss.str);
//
//	//struct Point p = {10, 20};
//	//struct Stu s = {"zhangsan", 20, "男", 180};
//	//printf("x=%d y=%d\n", p.x, p.y);
//	//printf("%s %d %s %d\n", s.name, s.age, s.sex, s.hight);
//
//	return 0;
//}
//
//

//struct S
//{
//	char name[20];
//	int age;
//};
//
//int main()
//{
//	struct S s = {.age=20, .name = "zhansgan"};
//	printf("%s %d\n", s.name, s.age);
//	s.age = 30;
//	//*char*
//	//s.name = "zhangsanfeng";//err
//	strcpy(s.name, "zhsangsanfeng");
//	printf("%s %d\n", s.name, s.age);
//
//	return 0;
//}

//
//struct S
//{
//	int data[1000];
//	char buf[100];
//};
//
////结构体变量.结构体成员名
////结构体指针->结构体成员名
//
//void print1(struct S ss)
//{
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", ss.data[i]);
//	}
//	printf("%s\n", ss.buf);
//}
//
//void print2(struct S* ps)
//{
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", ps->data[i]);
//	}
//	printf("%s\n", ps->buf);
//}
//
//int main()
//{
//	struct S s = { {1,2,3} , "hehe"};
//	print1(s);//传值调用
//	print2(&s);//传址调用
//	return 0;
//}
//

//void test()
//{
//	printf("hehe\n");
//}
//
//int main()
//{
//	int arr[10] = { 1,2,3,4,5 };
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		arr[i] = 0;
//	}
//
//	for (i = 0; i < 10; i++)
//	{
//		test();
//		printf("%d ", arr[i]);
//	}
//
//	return 0;
//}

int main()
{
	int arr[10] = { 1,2,3,4,5 };
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		if (i == 5)
		{
			printf("hehe\n");
		}
		arr[i] = 0;
	}

	for (i = 0; i < 10; i++)
	{
		printf("%d ", arr[i]);
	}

	return 0;
}
