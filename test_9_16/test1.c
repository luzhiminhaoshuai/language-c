 #define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
//#pragma pack(4)/*����ѡ���ʾ4�ֽڶ��� ƽ̨��VS2013�����ԣ�C����*/
//int main(int argc, char* argv[])
//{
//    struct tagTest1
//    {
//        short a;
//        char d;
//        long b;
//        long c;
//    };
//    struct tagTest2
//    {
//        long b;
//        short c;
//        char d;
//        long a;
//    };
//    struct tagTest3
//    {
//        short c;
//        long b;
//        char d;
//        long a;
//    };
//    struct tagTest1 stT1;
//    struct tagTest2 stT2;
//    struct tagTest3 stT3;
//
//    printf("%d %d %d", sizeof(stT1), sizeof(stT2), sizeof(stT3));
//    return 0;
//}
//#pragma pack()
//С���������У�Ͱ����
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int temp = 0;
//	int ret = n;
//	int *arr = malloc((size_t)sizeof(int) * n);
//	memset(arr,0,n*sizeof(int));
//	while (n--)
//	{
//		scanf("%d", &temp);
//		arr[temp] = temp;
//	}
//	for (int i=0; i<ret; i++)
//	{
//		if (arr[i] != 0)
//		{
//			printf("%d ", arr[i]);
//		}
//	}
//	return 0;
//}
//���ո�ֱ��������ͼ��
int main()
{ 
	int n = 0;
	while (scanf("%d", &n) != EOF)
	{
		
		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < n - i - 1; j++)
			{
				printf("  ");
			}
			for (int h = 0; h < i + 1; h++)
			{
				printf("* ");
			}
			printf("\n");
		}
	}
	
	return 0;
}
