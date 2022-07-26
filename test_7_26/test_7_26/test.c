#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//
//int main()
//{
//	//
//	//int num = 10;
//	//float fn = 3.14f;
//	//1,2,3,4,5,6,7,8,9,10
//	//数组 - 一组相同类型元素的集合
//	//
//	//int arr[10];
//	//char arr2[10];
//	//double arr3[5];
//	//double arr4[2+3];
//
//	//支持C99标准的编译器环境下能编译
//	int n = 0;
//	scanf("%d", &n);
//	int arr[n];
//
//	return 0;
//}

//
//int main()
//{
//	//int n = 0;//初始化
//
//	//int m;
//	//m = 20;//赋值
//
//	//int arr[10] = {1};//不完全初始化，第一个元素初始化为1，其余的元素默认初始化为0
//	//int arr1[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	//char ch1[10] = { 'a','b','c'};//a b c 0 0 0 0 0 0 0
//	//char ch2[10] = "abc";         //a b c 0 0 0 0 0 0 0
//
//	//int arr1[] = {1,2,3,4};
//	//int arr2[10] = { 1,2,3,4 };
//
//	//char ch3[] = "abc";
//	//char ch4[] = { 'a', 'b', 'c' };
//	//char ch5[10] = "abc";
//
//	//char arr[] = "";
//	//scanf("%s", arr);
//
//	//printf("%s\n", arr);
//
//	//int arr[] = { 0 };//1
//	//int i = 0;
//	//for (i = 0; i < 10; i++)
//	//{
//	//	arr[i] = i;
//	//}
//
//	return 0;
//}
//

//
//int main()
//{
//	int arr[20] = { 1,2,3,4,5,6,7,8,9,10,11,12 };
//	//0~9
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);//arr[i]表示数组的一个元素，而不是创建数组
//	}
//
//	return 0;
//}
//
//
//int main()
//{
//	//int arr[10] = { 1,2,3,4,5,6,7,8,9,10};
//	////0~9
//	//int i = 0;
//	//int sz = sizeof(arr) / sizeof(arr[0]);
//	//for (i = 0; i < sz; i++)
//	//{
//	//	printf("&arr[%d] = %p\n", i, &arr[i]);
//	//}
//
//	int arr[40960] = {0};
//
//	return 0;
//}
//

//
//int main()
//{
//	//int arr[3][4] = {1,2,3,4,5};
//	//int arr[3][4] = { {1,2},{3,4},{5} };
//	//double arr1[5][6];
//
//	//对于二维数组，初始化时，可以省略掉行，但是不能省略掉列
//	//int arr[][4] = { 1,2,3,4,5 };
//	//1 2 0 0
//	//3 4 0 0
//	//5 0 0 0
//	int arr[3][4] = { {1,2},{3,4},{5} };
//	int j = 0;
//	for (j = 0; j < 4; j++)
//	{
//		int i = 0;
//		for (i = 0; i < 3; i++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//	//int i = 0;
//	//for (i = 0; i < 3; i++)
//	//{
//	//	int j = 0;
//	//	for (j = 0; j < 4; j++)
//	//	{
//	//		printf("%d ", arr[i][j]);
//	//	}
//	//	printf("\n");
//	//}
//
//	return 0;
//}
//
//int main()
//{
//	int arr[3][4] = { 0 };
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 4; j++)
//		{
//			printf("&arr[%d][%d] = %p\n", i, j, &arr[i][j]);
//		}
//	}
//
//	return 0;
//}


//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	//0~9
//	int i = 0;
//
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//
//	return 0;
//}

//int main()
//{
//	int arr[3][4] = {1,2,3,4,5,6,7,8,9,10,11,12};
//	int i = 0;
//
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 5; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//
//
//	return 0;
//}

//冒泡排序
//选择排序
//插入排序
//快速排序
//...

//void bubble_sort(int* arr)
//void bubble_sort(int arr[10])
//
//void bubble_sort(int arr[], int sz)
//{
//	//求数组的元素个数
//	//int sz = sizeof(arr) / sizeof(arr[0]);//err
//	
//	//冒泡排序的趟数
//	int i = 0;
//	for (i = 0; i < sz-1; i++)
//	{
//		//一趟冒泡排序
//		int j = 0;
//		for (j = 0; j < sz-1-i; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//			}
//		}
//	}
//}
//
//int main()
//{
//	int arr[10] = {1,3,5,7,9,2,4,6,8,0};
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//printf("%p\n", arr);
//	//printf("%p\n", &arr[0]);
//
//	//0 1 2 3 4 5 6 7 8 9
//	//要对数组升序排序
//	//冒泡排序
//	//数组传参的时候
//	//写的是数组名
//	//数组名本质是数组首元素的地址
//	//传参的时候，传递的就是数组首元素的地址
//	//那么数组的形参就应该是指针变量来接收
//	//数组名的降级
//	//
//	bubble_sort(arr, sz);
//	//打印
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//
//	return 0;
//}
//
//
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	//int* p = &arr[0];
//	int* p = arr;//arr是数组名，数组名是数组首元素的地址
//
//	//arr <==> p
//	//
//	int i = 0;
//	/*for (i = 0; i < 10; i++)
//	{
//		printf("%p = %p\n", p+i, &arr[i]);
//	}*/
//
//	//
//	//arr[i] == *(arr+i)
//	//
//	for (i = 0; i < 10; i++)
//	{
//		//printf("%d ", arr[i]);
//		//printf("%d ", *(p + i));
//		//printf("%d ", *(arr + i));
//		printf("%d ", p[i]);
//	}
//	return 0;
//}

//void print(int arr[], int sz)
////void print(int *arr, int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", *(arr + i));
//		//printf("%d ", arr[i]);
//	}
//}
//
//
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	print(arr, sz);
//
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	//[] 下标引用操作符
//	//a+b -> b+a
//	for (i = 0; i < 10; i++)
//	{
//		//printf("%d ", arr[i]);//arr[i] --> *(arr+i)-->*(i+arr)
//		printf("%d ", i[arr]);
//	}
//
//	return 0;
//}
//

//
//数组名是首元素的地址（存在2个例外）
//两个例外：
//1> sizeof(数组名)，数组名表示整个数组，计算的是整个数组的大小，单位是字节的
//2> &数组名，数组名表示整个数组，取出是整个数组的地址
//除此之外，遇到的数组名都是数组首元素的地址
//

int main()
{
	int arr[10] = {0};
	//printf("%d\n", sizeof(arr));
	printf("%p\n", arr);//首元素的地址
	printf("%p\n", arr+1);//首元素的地址+1

	printf("%p\n", &arr[0]);//首元素的地址
	printf("%p\n", &arr[0]+1);//首元素的地址+1


	printf("%p\n", &arr);//数组的地址
	printf("%p\n", &arr+1);//数组的地址

	return 0;
}





