#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <limits.h>
#include <stdlib.h>


//��NULLָ��Ľ����ò���

//int main()
//{
//	int *p = (int*)malloc(INT_MAX);
//	if (p == NULL)
//	{
//		perror("malloc");
//		return 1;
//	}
//	else
//	{
//		*p = 5;
//	}
//
//	free(p);
//	p = NULL;
//
//	return 0;
//}

//�Զ�̬���ٿռ��Խ�����

//
//int main()
//{
//	int*p = (int*)malloc(20);
//	if (p == NULL)
//		return 1;
//	//ʹ��
//	int i = 0;
//	for (i = 0; i < 5; i++)
//	{
//		*(p + i) = i;
//		//p[i] = i;
//	}
//	for (i = 0; i < 5; i++)
//	{
//		printf("%d ", p[i]);
//	}
//	//�ͷ�
//	free(p);
//	p = NULL;
//
//	return 0;
//}

//int main()
//{
//	int num = 10;
//	int*p = &num;
//
//	//.....
//
//	free(p);
//	p = NULL;
//
//	return 0;
//}

//int main()
//{
//	int* p = (int*)malloc(40);
//	if (p == NULL)
//		return 1;
//	int i = 0;
//	for (i = 0; i < 5; i++)
//	{
//		*p = i;
//		p++;
//	}
//	//�ͷ�
//	//���ͷŵ�ʱ��pָ��Ĳ����Ƕ�̬�ڴ�ռ����ʼλ��
//	free(p);
//	p = NULL;
//
//	return 0;
//}


//��ͬһ�鶯̬�ڴ����ͷ�
//int main()
//{
//	int* p = (int*)malloc(40);
//	if (p == NULL)
//		return 1;
//	int i = 0;
//	for (i = 0; i < 5; i++)
//	{
//		*(p + i) = i;
//	}
//	
//	free(p);
//	p = NULL;
//
//	free(p);
//
//	return 0;
//}


//void get_memory()
//{
//	int* p = (int*)malloc(40);
//	//....
//	free(p);
//	p = NULL;
//}

//�����᷵�ض�̬���ٿռ�ĵ�ַ���ǵ���ʹ��֮�󷵻�
//int* get_memory()
//{
//	int* p = (int*)malloc(40);
//	//....
//	return p;
//}
//
//
//int main()
//{
//	int *ptr = get_memory();
//	//ʹ��
//
//	//�ͷ�
//	free(ptr);
//	ptr = NULL;
//
//	return 0;
//}

#include <string.h>


//void GetMemory(char* p)
//{
//	p = (char*)malloc(100);
//}
//
//void Test(void)
//{
//	char* str = NULL;
//	GetMemory(str);
//	strcpy(str, "hello world");
//	printf(str);
//}
//
//int main()
//{
//	Test();
//	return 0;
//}
//

//ok
//void GetMemory(char** p)
//{
//	*p = (char*)malloc(100);
//}
//
//void Test(void)
//{
//	char* str = NULL;
//	GetMemory(&str);
//	strcpy(str, "hello world");
//	printf(str);
//	//�ͷ�
//	free(str);
//	str = NULL;
//}
//
//int main()
//{
//	Test();
//	return 0;
//}


//ok
//char* GetMemory(char* p)
//{
//	p = (char*)malloc(100);
//	return p;
//}
//
//void Test(void)
//{
//	char* str = NULL;
//	str = GetMemory(str);
//	strcpy(str, "hello world");
//	printf(str);
//	free(str);
//	str = NULL;
//}
//
//int main()
//{
//	Test();
//	return 0;
//}

//err
//void GetMemory(char* p)
//{
//	*p = (char*)malloc(100);
//}
//
//void Test(void)
//{
//	char* str = NULL;
//	GetMemory(str);
//	strcpy(str, "hello world");
//	printf(str);
//}
//
//int main()
//{
//	Test();
//	return 0;
//}
//


//char* GetMemory(void)
//{
//	char p[] = "hello world";
//	return p;
//}
//
//void Test(void)
//{
//	char* str = NULL;
//	str = GetMemory();
//	printf(str);
//}
//
//int main()
//{
//	Test();
//	return 0;
//}


//int* test()
//{
//	int a = 10;
//	return &a;
//}
//
//int main()
//{
//	int*p  = test();
//	printf("hehe\n");
//	printf("%d\n", *p);
//
//	return 0;
//}

//void GetMemory(char** p, int num)
//{
//	*p = (char*)malloc(num);
//}
//
//void Test(void)
//{
//	char* str = NULL;
//	GetMemory(&str, 100);
//	strcpy(str, "hello");
//	printf(str);
//
//	free(str);
//	str = NULL;
//}
//
//int main()
//{
//	Test();
// //......
//	return 0;
//}


//void Test(void)
//{
//	char* str = (char*)malloc(100);
//	strcpy(str, "hello");
//	free(str);
//
//	if (str != NULL)
//	{
//		//str��Ұָ�룬������ǷǷ�����
//		strcpy(str, "world");
//		printf(str);
//	}
//}
//
//void Test(void)
//{
//	char* str = (char*)malloc(100);
//	if (str == NULL)
//		return;
//
//	strcpy(str, "hello");
//	free(str);
//	str = NULL;
//
//	if (str != NULL)
//	{
//		strcpy(str, "world");
//		printf(str);
//	}
//}
//
//int main()
//{
//	Test();
//	return 0;
//}
//









