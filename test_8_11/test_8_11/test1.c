#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <windows.h>
#include<string.h>
//int main()
//{
//	unsigned int i;
//	for (i = 9; i >= 0; i--)
//	{
//		printf("%u\n", i);	 
//		Sleep(100);
//	}
//
//	return 0;
//}


//int main()
//{
//	//-128~127
//	//
//	char a[1000];
//	//0~127
//	//-1 -2 -3 -4 ...-128 127 126 ... 5 4 3 2 1 0 -1 -2 ...
//	int i;
//	for (i = 0; i < 1000; i++)
//	{
//		a[i] = -1 - i;
//	}
//	printf("%d", strlen(a));   //255
//
//	return 0;
//}
//

//#include <stdio.h>
//
////0~255
//unsigned char i = 0;
//
//int main()
//{
//	for (i = 0; i <= 255; i++)
//	{
//		printf("hello world\n");
//	}
//	return 0;
//}
//

//
//int main()
//{
//	int n = 9;	 //&n --> int*
//	//
//	//[00000000000000000000000000001001] - 9�Ĳ���
//	//
//	float* pFloat = (float*)&n;
//	printf("n��ֵΪ��%d\n", n);	//1		9
//	printf("*pFloat��ֵΪ��%f\n", *pFloat);	  //2      0.000000
//	//0 00000000 00000000000000000001001
//	//(-1)^0 * 0.00000000000000000001001 * 2^-126
//	//
//	*pFloat = 9.0;
//	//9.0
//	//1001.0
//	//1.001 * 2^3
//	//(-1)^0 * 1.001 *2^3
//	//01000001000100000000000000000000
//	//
//	printf("num��ֵΪ��%d\n", n);	//3		   1,091,567,616
//	printf("*pFloat��ֵΪ��%f\n", *pFloat);	 //4	   9.0
//	return 0;
//}



//int main()
//{
//	float f = 5.5f;
//	//(-1)^0 * 1.011 * 2^2
//	//S = 0
//	//M = 1.011
//	//E = 2
//	//0100 0000 1011 00000000000000000000
//	//40 b0 00 00
//	//
//	return 0;
//}


//
//int main()
//{
//	char ch = 'w';
//	char* pc = &ch;
//
//	char arr[] = "abcdef";
//	char* p = arr;
//
//	/*const char* ps = "abcdef";
//	printf("%s\n", ps);*/
//
//	//*ps = 'w';		//�����ַ����������޸�
//
//	//printf("%c\n", *ps);
//
//	return 0;
//}
//
//#include <stdio.h>
//int main()
//{
//	char str1[] = "hello bit.";
//	char str2[] = "hello bit.";
//
//	const char* str3 = "hello bit.";
//	const char* str4 = "hello bit.";
//
//	if (str1 == str2)
//		printf("str1 and str2 are same\n");
//	else
//		printf("str1 and str2 are not same\n");
//
//	if (str3 == str4)
//		printf("str3 and str4 are same\n");
//	else
//		printf("str3 and str4 are not same\n");
//
//	return 0;
//}
//
//
//
//int main()
//{
//	//char* arr[5] = {"abcdef", "zhangsan", "hehe", "wangcai", "ruhua"};//���ָ������� - ָ������
//	//int i = 0;
//	//for (i = 0; i < 5; i++)
//	//{
//	//	printf("%s\n", arr[i]);
//	//}
//
//	int arr1[5] = { 1,2,3,4,5 };
//	int arr2[5] = { 2,3,4,5,6 };
//	int arr3[5] = { 3,4,5,6,7 };
//
//	int* arr[3] = {arr1, arr2, arr3};
//
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < 3; i++)
//	{
//		for (j = 0; j < 5; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}


//����ָ�� - ָ�����͵�ָ��  - ������ͱ����ĵ�ַ
//int* p1;
//�ַ�ָ�� - ָ���ַ���ָ��  - ����ַ������ĵ�ַ
//char* p2;
//����ָ�� - ָ�������ָ��  - ��ŵ�������ĵ�ַ



//int main()
//{
//	int a = 10;
//	int* p1 = &a;
//
//	char ch = 'w';
//	char* p2 = &ch;
//
//	int arr[10] = {1,2,3,4,5};
//	int (* pa)[10] = &arr;//ȡ����������ĵ�ַ��ŵ�pa�У�pa������ָ�����
//	
// //int(*)[10] -> ����ָ������
//
//	return 0;
//}
//


//int main()
//{
//	char arr[5];
//	char (*p1)[5] = &arr;
//
//	return 0;
//}

//��������������Ԫ�صĵ�ַ
//��2�����⣺
//1. sizeof(������)
//2. &������
//
//int main()
//{
//	int arr[10] = {0};
//	printf("%p\n", arr);
//	printf("%p\n", arr+1);
//
//	printf("%p\n", &arr[0]);
//	printf("%p\n", &arr[0]+1);
//
//	printf("%p\n", &arr);
//	printf("%p\n", &arr+1);
//
//	return 0;
//}

//���Ͼ���
//
//int main()
//{
//	int arr1[3][3] = { {4,8,9},{6,7,14},{8,15,19} };
//	int n = 0;
//	scanf("%d", &n);
//	int i = 0;
//	int j = 0;
//	for ( i = 0; i < 3; i++)
//	{
//		for (j = 0; j < 3; j++)
//		{
//			if (arr1[i][j] == n)
//				printf("����\n");
//			
//		}
//	}
//
//	return 0;
//}
// 
// 
//�ַ�������
//ʵ��һ�����������������ַ����е�k���ַ���

//���磺
//ABCD����һ���ַ��õ�BCDA
//
//ABCD���������ַ��õ�CDAB
//char* LUN(char* arr1, int sz, int k);
//
//int main()
//{
//
//	char arr1[] = "ABCD";
//	printf("%s\n", arr1);
//
//	int sz = strlen(arr1);
//	int k = 0;
//	������ת����
//	scanf("%d", &k);
//	char *p=LUN(arr1, sz, k);
//	printf("%s", p);
//	return 0;
//}
//char* LUN(char *arr1, int sz,int k)
//{
//	char temp[100] = {0};
//	
//	k = k % sz;//������ת���������ַ��������//����Ϊ���൱��û��ת
//	int i = 0;
//	int j = 0;
//	for (i = sz - k; i <= sz - 1; i++)//��Ҫ��ת��Ԫ�ط���temp������
//	{
//		temp[j] = arr1[i];
//		j++;
//	}
//	for (i = sz - 1; i >= k; i--)//arr1�������
//	{
//		arr1[i] = arr1[i - k];
//	}
//	for (j = 0; j <= k - 1; j++)//temp��Ԫ�ط���arr1
//
//	{
//		arr1[j] = temp[j];
//	}
//	return arr1;
//
//}

//дһ���������ж�һ���ַ����Ƿ�Ϊ����һ���ַ�����ת֮����ַ�����
//
//
//
//���磺����s1 = AABCD��s2 = BCDAA������1
//
//����s1 = abcd��s2 = ACBD������0.
// 
//AABCD����һ���ַ��õ�ABCDA
//
//AABCD���������ַ��õ�BCDAA
//
//AABCD����һ���ַ��õ�DAABC
//void lun(char arr1[], char arr2[], int sz);
////
//int main()
//{
//	char arr1[10] = { 0 };
//	char arr2[10] = { 0 };
//	scanf("%s", arr1);
//	scanf("%s", arr2);
//	int sz = strlen(arr1);
//	lun(arr1, arr2, sz);
//
//	return 0;
//}
//void lun(char arr1[], char arr2[],int sz)
//{
//	int x = 0;
//	char temp;
//	int i = 0;
//
//	while (x<sz)
//	{
//		
//			temp = arr2[sz - 1 ];
//			for (i = 0; i < sz - 1; i++)
//			{
//				arr2[sz - 1 - i] = arr2[sz - 2 - i];
//			}
//			arr2[0] = temp;
//			x++;
//		
//		if (strcmp(arr1, arr2) == 0)
//		{
//			printf("arr2��arr1����%d���ַ��õ���\n", x);
//			break;
//		}
//		i = 100;
//	}
//	if (i = 100)
//	{
//		int i = 0;
//
//	}
//}

//void print(int(*p)[5], int r, int c)
//{
//	int i = 0;
//	for (i = 0; i < r; i++)
//	{
//		int j = 0;
//		for (j = 0; j < c; j++)
//		{
//			printf("%d",( *(p + i))[j]);
//		}
//	}

//}
//��ӡ������ͼ��
//int main()
//{
//    int n = 0;
//
//    int i = 0;
//    while (scanf("%d", &n) != EOF)
//    {
//        for (i = 0; i < n; i++)
//        {
//            printf("* ");
//        }
//        printf("\n");
//        int j = 0;
//        for (j = 0; j < n - 2; j++)
//        {
//            for (i = 0; i < n; i++)
//            {
//                if (i == 0 || i == n - 1)
//                    printf("* ");
//                else
//                    printf("  ");
//            }
//            printf("\n");
//
//        }
//        for (i = 0; i < n; i++)
//        {
//            printf("* ");
//        }
//        printf("\n");
//
//    }
//
//
//    return 0;
//}
void input(int arr[],int n);

int main()
{
    int arr1[100] = { 0 };
    int n = 0;
    scanf("%d", &n);
    input(arr1,n);
   
    int a = 0;
    scanf("%d", &a);
    int i = 0;
    for (i = 0; i < n; i++)
    {
        if (arr1[i] > a)
            break;
        if (arr1[i] < a)
            continue;
    }

    
    int j = 0;
    for (j = 0; j <= n - 1 - i; j++)
    {
        arr1[n - j] = arr1[n - 1 - j];

    }
    arr1[i] = a;
    for (i = 0; i < n + 1; i++)
    {
        printf("%d ", arr1[i]);
        
    }
    return 0;
}

void input(int arr[],int n)//����һ����������
{
   
    int i = 0;
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

}


