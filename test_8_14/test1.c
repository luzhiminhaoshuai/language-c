#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include <ctype.h>
//快速排序练习
void print(int arr[], int n);//打印数组的函数
int partition(int arr[], int l, int r);
void quicksort(int arr[], int head, int tail);

int main()
{
	int arr[100] = { 0 };
	int i = 0;
	int n = 0;
	while (scanf("%d", &n))//输入不是数字的时候就退出循环
	{
		arr[i] = n;
		i++;
		if (i == 99)
		{
			break;
		}
	}
	print(arr, i);
	quicksort(arr,0,i-1);
	print(arr, i);
	return 0;
}

void print(int arr[], int n)//打印数组的函数
{
	int i = 0;
	for (i = 0; i < n; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
}

void quicksort(int arr[], int head, int tail)
{   
	if (head < tail)
	{
		int mid = partition(arr, head, tail);
		quicksort(arr, head, mid - 1);
		quicksort(arr, mid + 1, tail);
	}
}
	

int partition(int arr[],int l, int r)
{  
	int temp = arr[l];
	while (l < r)
	{
		while (l<r && arr[r]>temp)
		{
			r--;
		}
		if (l < r)
		{
			arr[l] = arr[r];
			l++;
		}
		while (l < r && arr[l] <= temp)
		{
			l++;
		}
		if (l < r)
		{
			arr[r] = arr[l];
			r--;
		}
		 
	}
	arr[l] = temp;
	return l;


}


//同学快速排序代码

//void printArr(int* arr, int size)
//{
//	for (int i = 0; i < size; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//}
//
//int partition(int* arr, int l, int r)
//{
//	int temp = arr[l];
//	while (l < r)
//	{
//		while (l <r && arr[r] >= temp)
//			r--;
//		if (l < r)
//		{
//			arr[l] = arr[r];
//			l++;
//		}
//		while (l < r && arr[l] <= temp)
//			l++;
//		if (l < r)
//		{
//			arr[r] = arr[l];
//			r--;
//		}
//	}
//	arr[l] = temp;
//	return l;
//}
//
//void quickSort(int* arr, int head, int tail)
//{
//	if (head < tail)
//	{
//		int mid = partition(arr, head, tail);
//		quickSort(arr, head, mid - 1);
//		quickSort(arr, mid + 1, tail);
//	}
//}
//
//int main()
//{
//	int arr[] = { 8,4,9,12,3,7,10,1,5,2,13,8,9,6,6 };
//	int size = sizeof(arr) / sizeof(arr[0]);
//
//	printArr(arr, size);
//
//	quickSort(arr, 0, size - 1);
//
//	printArr(arr, size);
//
//	return 0;
//}
