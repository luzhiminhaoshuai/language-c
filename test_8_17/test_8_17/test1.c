#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<time.h>
#include<stdlib.h>
#include<math.h>
#include<windows.h>
#include<ctype.h>
//qsort函数的运用以及模拟实现

//void qsort (void* base, size_t num,  size_t size,  int (*compar)(const void*, const void*));

//void*base ://需要排序元素的首元素地址，用base指针来接收

// size_t num://待排元素的个数
 
// size_t size：//每个元素所占用空间的大小，单位是字节

 //int（*compar）(const void*,consr void*)://函数指针，因为每一种元素的排序方法是不一样的，需要一个函数来实现比较，函数的返回类型是int

//struct stu
//{
//	char name[20];
//	char sex[20];
//	int age;
//};
//int zx(const void* a, const void* b)//整数比较方法
//{
//	return (*(int*)a - *(int*)b);
//}
//int jgtname(const void* a, const void* b)//结构体name比较
//{
//	return  strcmp(((struct stu*)a)->name, ((struct stu*)b)->name);
//}
//int jgtage(const void* a, const void* b)
//{
//	return ((struct stu*)a)->age - ((struct stu*)b)->age;
//}
//
//
//void test1()
//{
//	printf("排序前：\n");
//	int arr[] = { 2,9,5,7,6,8,2,4,4,3 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//
//	qsort(arr, sz, sizeof(int), zx);
//	printf("排序后：\n");
//
//	for( i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//}
//void test2()
//{
//	struct stu s[] = { { "zhangsan","male",20 },{"lusiri","lady",8}, {"dengpeiqun","lady",48},{"luchaokun","male",57}};
//	struct stu* ps = s;//这里加个指针只是单纯练习一下指针的使用
//	int i = 0;
//	int sz = sizeof(s) / sizeof(s[0]);
//	printf("name排序前：\n");
//	for (i = 0; i < sz; i++)
//	{
//		printf("%s %s %d", (ps+i)->name, (ps + i)->sex, (ps + i)->age);
//		printf("\n");
//	}
//	printf("\n");
//	printf("name排序后：\n");
//	qsort(s, sz, sizeof(s[0]),jgtname );
//	for (i = 0; i < sz; i++)
//	{
//		printf("%s %s %d", s[i].name, s[i].sex, s[i].age);
//		printf("\n");
//	}
//	qsort(s, sz, sizeof(s[0]), jgtage);
//	printf("\n");
//	printf("age排序后\n");
//	for (i = 0; i < sz; i++)
//	{
//		printf("%s %s %d", s[i].name, s[i].sex, s[i].age);
//		printf("\n");
//	}
//}
//
//
//int main()
//{  
//
//	test1();
//	printf("\n");
//	test2();
//	printf("\n");
//	return 0;
//}

//qsort的模拟实现
//排序的方式有很多种//有快速排序，冒泡排序，插入排序，堆排序等。但是都能达到我们的目的
//这里我们选择的是冒泡排序

//这是冒泡排序
//int main()
//{
//	int arr[] = { 2,3,1,9,8,7,4,6,0,5 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//冒泡排序
//	int i = 0;
//	int j = 0;
//	int temp = 0;
//	for (i = 0; i < sz - 1; i++)//
//	{ 
//		for (j = 0; j < sz - i - 1; j++)//每一次比较
//		{
//			if (arr[j] < arr[j + 1])
//			{
//				temp = arr[j + 1];
//				arr[j + 1] = arr[j];
//				arr[j] = temp;
//			}
//		}
//	}
//	for (i = 0; i < sz; i++)
//	{
//		printf(" %d ", arr[i]);
//	}
//	return 0;
//}
//

//qsort的模拟实现

//在冒泡排序的基础上改进实现

int cmp_int(const void* e1, const void* e2)
{
	return  (*(int*)e1 - *(int*)e2);

}
struct stu
{
	char name[20];
	int  age[5];
};
int cmp_structname(const void*e1,const void*e2)
{
	return  strcmp( ((struct stu*)e1)->name,  ((struct stu*)e2)->name);
}


//
//void bubble_sort( int *a,int sz)
//{
//	int i = 0;
//	int j = 0;
//	int temp = 0;
//	for (i = 0; i < sz - 1; i++)    
//	{
//		for (j = 0; j < sz - 1 - i; j++)
//		{   
//			if (a[j] < a[j + 1])
//			{
//				temp = a[j];
//				a[j] = a[j + 1];
//				a[j + 1] = temp;
//			}
//		}
//	}
//	printf("\n");
//}

//bobble_sort2的交换函数
void swp(char* buf1, char* buf2, int width)
{ 
	int d = 0;
	char tmp = 0;
	for (d = 0; d < width; d++)
	{
		tmp = *buf1;
		*buf1 = *buf2;
		*buf2 = tmp;
		buf1++;
		buf2++;
	}
}
//在原来的qsort函数是可以排序任何数据类型的，
// 所以我们要改进我们的冒泡排序也是可以接收任何数据类型的指针
//
void bubble_sort2(void*base,int sz,int width,int(*cmp)(const void *e1,const void *e2) )
{
	int i = 0;
	int j = 0;
	for (i = 0; i < sz - 1; i++)//一趟冒泡排序
	{
		for (j = 0; j < sz - i - 1; j++)//每一趟冒泡排序的过程
		{
			if (cmp((char*)base + j * width, (char*)base + (j + 1) * width)>0)//调用cmp函数做比较
			{
				swp((char*)base + j * width, (char*)base + (j + 1) * width, width);
			}
		}
	}
}

void test1()
{
	int arr2[] = { 2,1,5,7,3,4,6,9,8,0 };
	int sz = sizeof(arr2) / sizeof(arr2[0]);
	bubble_sort2(arr2, sz, sizeof(arr2[0]), cmp_int);
	for (int i = 0; i < sz; i++)
	{
		printf(" %d ", arr2[i]);
	}
	printf("\n");
}
void test2()
{
	struct stu s[] = { {"xuxiaoyan",21},{"luzhimin",25}};
	int sz = sizeof(s) / sizeof(s[0]);
	bubble_sort2(s,sz,sizeof(s[0]),cmp_structname);
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%s", s[i].name);
		printf("\n");
	}
}
int main()
{
	
	test1();
	test2();
	return 0;
}

















