#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int main()
//{
//	int arr0[10] = {12346,10,50};
//	int arr1[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	char arr2[10] = "123456789";
//	char arr3[10]= "1234567891";
//	char arr4[10] = "123456789\0";
//	printf("sizeof(arr2):%d strlen(arr2):%d\n\n", sizeof(arr2),strlen(arr2));
//	printf("sizeof(arr3):%d strlen(arr3):%d\n\n", sizeof(arr3),strlen(arr3));
//	printf("sizeof(arr4):%d strlen(arr4):%d\n\n", sizeof(arr4), strlen(arr4));
//	printf("%s", arr3);
//	return 0;
//}
//交换数组

//void swap(char *arr1, char *arr2, int sz);
//void print(char* arr, int sz);
//int main()
//{
//	char arr1[6] = { '0','1','2','3','4','\0' };
//	char arr2[6] = { '5','6','7','8','9','\0' };
//	int sz = sizeof(arr1) / sizeof(arr1[0]);
//	printf("sz=%d\n", sz);
//	
//	printf("转换前arr1：\n");
//    print(arr1,  sz);
//
//	printf("转换前arr2：\n");
//	print(arr2, sz);
//
//	swap(arr1, arr2, sz);
//	
//	printf("转换后arr1：\n");
//	print(arr1, sz);
//
//	printf("转换后arr2：\n");
//	print(arr2, sz);
//
// 
//	return 0;
//}
//void swap(char *arr1, char *arr2, int sz)
//{
//	int i = 0;
//	char temp = 0;
//	for (i = 0; i < sz; i++)
//	{
//		temp = arr1[i];
//		arr1[i] = arr2[i];
//		arr2[i] = temp;
//	}
//
//}
//void print(char* arr, int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf(" %c ", arr[i]);
//
//	}
//	printf("\n\n");
//}
//创建一个整形数组，完成对数组的操作

//实现函数init() 初始化数组为全0
//实现print()  打印数组的每个元素
//实现reverse()  函数完成数组元素的逆置
//void init(int arr[], int sz);
//void print(int arr[], int sz);
//void reverse(int arr[], int k);
//
//int main()
//{
//    int arr1[50];
//    int sz = sizeof(arr1) / sizeof(arr1[0]);
//    init(arr1, sz);
//    print(arr1, sz);
//    int k = 0;
//    scanf("%d", &k);
//    reverse(arr1,k);
//    
//
//
//}
//
//void init(int *arr,int sz)
//{
//    int i = 0;
//    for (i = 0; i < sz; i++)
//    {
//        arr[i] = 0;
//    }
//}
//void print(int arr[], int sz)
//{
//    int i = 0;
//    for ( i = 0; i < sz; i++)
//    {
//        printf("%d", arr[i]);
//    }
//    printf("\n");
//}
//void reverse(int arr[], int k)
//{
//    int i = 0;
//    for (i = 0; k > 0; i++)
//    {
//        arr[i] = k % 10;
//        k=k / 10;
//
//
//    }
//    i--;
//    int j = 0;
//    int temp = 0;
//    for (j = 0; i >= 0; j++)
//    {
//        temp = arr[i];
//        arr[i] = arr[j];
//        arr[j] = temp;
//        i--;
//    }
//
//    print(arr, j );
//     
//
//}
//
//实现对一个数组的冒泡排序
//int main()
//{
//	int arr[10] = { 3,2,1,4,9,6,7,5,10,8 };
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	
//	for (i = 0; i < sz - 1; i++)
//	{
//		int tmp = 0;
//		int j = 0;
//		for (j = 0; j < sz - i - 1; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j+1] = tmp;
//			}
//		}
//		
//	}
//	for (i = 0; i < sz; i++)
//	{
//		printf(" %d ", arr[i]);
//	}
//
//
//	return 0;
//}
//输入一个m行n列的二维数组，求数组中正数的值

void input(int arr[][10], int m, int n);
void sum(int arr[][10], int m, int n);


int main()
{
	int m, n;
	int arr[10][10] = { 0 };
	scanf("%d %d", &m, &n);
	input(arr, m, n);
	sum(arr, m, n);
 	
	return 0;
}

void input(int arr[][10], int m, int n) //求和正数
{
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			scanf("%d", &arr[i][j]);
		}
	}
}
void sum(int arr[][10], int m, int n)//求数组内正数的和
{
	int sum = 0;
	for (int i = 0; i < m; i++)
	{ 
		for (int j = 0; j < n; j++)
		{
			if (arr[i][j] > 0)
				sum = sum + arr[i][j];

		}
	}
	printf("%d", sum);
}

//转置
void zhuanzhi(int arr[][10],int m,int n)
{
  
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			scanf("%d", &arr[i][j]);
		}
	}
	for(int
}

