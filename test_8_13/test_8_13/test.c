#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//
//дһ��������
//�����ļӡ������ˡ���
//
//
//int Add(int x, int y)
//{
//	return x + y;
//}
//
//int Sub(int x, int y)
//{
//	return x - y;
//}
//
//int Mul(int x, int y)
//{
//	return x * y;
//}
//
//int Div(int x, int y)
//{
//	return x / y;
//}
//
//
//void menu()
//{
//	printf("***************************\n");
//	printf("***** 1.add    2. sub  ****\n");
//	printf("***** 3.mul    4. div  ****\n");
//	printf("***** 0.exit           ****\n");
//	printf("***************************\n");
//}
//
//void calc(int (*p)(int, int))
//{
//	int x = 0;
//	int y = 0;
//	int ret = 0;
//	printf("������2��������:>");
//	scanf("%d %d", &x, &y);
//	ret = p(x, y);
//	printf("%d\n", ret);
//}
//
//int main()
//{
//	int input = 0;
//	do
//	{
//		menu();
//		printf("��ѡ��:>");
//		scanf("%d", &input);		
//		switch (input)
//		{
//		case 1:
//			calc(Add);
//			break;
//		case 2:	
//			calc(Sub);
//			break;
//		case 3:
//			calc(Mul);
//			break;
//		case 4:
//			calc(Div);
//			break;
//		case 0:
//			printf("�˳�������\n");
//			break;
//		default:
//			printf("ѡ�����\n");
//			break;
//		}
//	} while (input);
//}
//

//bubble_sort ����ֻ��������������
void bubble_sort(int arr[], int sz)
{
	int i = 0;
	//����
	for (i = 0; i < sz - 1; i++)
	{
		//һ��ð������Ĺ���
		int j = 0;
		for (j = 0; j < sz-1-i; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				int tmp = arr[j];
				arr[j] = arr[j + 1]; 
				arr[j + 1] = tmp;
			}
		}
	}
}


void print(int arr[], int sz)
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
}

void test1()
{
	//ð������
	//���������ݽ������� - ����Ϊ����
	int arr[] = { 2,1,3,7,5,9,6,8,0,4 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	bubble_sort(arr, sz);
	print(arr, sz);
}

//
//qsort ���������������͵�����
//void qsort(void* base, //���������ݵ���ʼ��ַ
//	       size_t num,   //���������ݵ�Ԫ�ظ���
//	       size_t size,  //����������Ԫ�صĴ�С����λ���ֽڣ�
//	       int (*cmp)(const void*, const void*) //�Ƚ�2��Ԫ�ش�С�ĺ���ָ��
//          );
//

//int cmp_int(const void* e1, const void* e2)
//{
//	if (*(int*)e1 > *(int*)e2)
//		return 1;
//	else if (*(int*)e1 < *(int*)e2)
//		return -1;
//	else
//		return 0;
//}

int cmp_int(const void* e1, const void* e2)
{
	return (*(int*)e1 - *(int*)e2);
}

//����qsort����������������
void test2()
{
	int arr[] = { 2,1,3,7,5,9,6,8,0,4 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	qsort(arr, sz, sizeof(arr[0]), cmp_int);
	print(arr, sz);
}

struct Stu
{
	char name[20];
	int age;
};

int cmp_stu_by_name(const void* e1, const void* e2)
{
	return strcmp(((struct Stu*)e1)->name, ((struct Stu*)e2)->name);
}

int cmp_stu_by_age(const void* e1, const void* e2)
{
	return ((struct Stu*)e1)->age - ((struct Stu*)e2)->age;
}

//����qsort����ṹ������
void test3()
{
	struct Stu s[] = { {"zhangsan", 20}, {"lisi", 55}, {"wangwu", 40}};
	//�������ֱȽ�
	int sz = sizeof(s) / sizeof(s[0]);
	//qsort(s, sz, sizeof(s[0]), cmp_stu_by_name);
	qsort(s, sz, sizeof(s[0]), cmp_stu_by_age);
}

void Swap(char*buf1, char* buf2, int width)
{
	int i = 0;
	for (i = 0; i < width; i++)
	{
		char tmp = *buf1;
		*buf1 = *buf2;
		*buf2 = tmp;
		buf1++;
		buf2++;
	}
}

void bubble_sort2(void* base, int sz, int width, int (*cmp)(const void* e1, const void*e2))
{
	int i = 0;
	//����
	for (i = 0; i < sz - 1; i++)
	{
		//һ��ð������Ĺ���
		int j = 0;
		for (j = 0; j < sz - 1 - i; j++)
		{
			if (cmp((char*)base+j*width, (char*)base+(j+1)*width)>0)
			{
				//����
				Swap((char*)base + j * width, (char*)base + (j + 1) * width, width);
			}
		}
	}
}

void test4()
{
	int arr[] = { 2,1,3,7,5,9,6,8,0,4 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	bubble_sort2(arr, sz, sizeof(arr[0]), cmp_int);
	print(arr, sz);
}

void test5()
{
	struct Stu s[] = { {"zhangsan", 20}, {"lisi", 55}, {"wangwu", 40} };
	//�������ֱȽ�
	int sz = sizeof(s) / sizeof(s[0]);
	//bubble_sort2(s, sz, sizeof(s[0]), cmp_stu_by_name);
	bubble_sort2(s, sz, sizeof(s[0]), cmp_stu_by_age);
}

int main()
{
	//test1();
	//test2();
	//test3();
	//test4();
	test5();

	//char ch = 'w';
	//int i = 20;

	//void*��ָ���Ƿǳ����ݵģ����Խ����������͵ĵ�ַ
	//void* p = &ch;
	//void* p = &i;

	//*(int*)p = 200;
	//p++;//err

	return 0;
}
