#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<time.h>
#include<stdlib.h>
#include<math.h>
#include<windows.h>
#include<ctype.h>
//qsort�����������Լ�ģ��ʵ��

//void qsort (void* base, size_t num,  size_t size,  int (*compar)(const void*, const void*));

//void*base ://��Ҫ����Ԫ�ص���Ԫ�ص�ַ����baseָ��������

// size_t num://����Ԫ�صĸ���
 
// size_t size��//ÿ��Ԫ����ռ�ÿռ�Ĵ�С����λ���ֽ�

 //int��*compar��(const void*,consr void*)://����ָ�룬��Ϊÿһ��Ԫ�ص����򷽷��ǲ�һ���ģ���Ҫһ��������ʵ�ֱȽϣ������ķ���������int

//struct stu
//{
//	char name[20];
//	char sex[20];
//	int age;
//};
//int zx(const void* a, const void* b)//�����ȽϷ���
//{
//	return (*(int*)a - *(int*)b);
//}
//int jgtname(const void* a, const void* b)//�ṹ��name�Ƚ�
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
//	printf("����ǰ��\n");
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
//	printf("�����\n");
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
//	struct stu* ps = s;//����Ӹ�ָ��ֻ�ǵ�����ϰһ��ָ���ʹ��
//	int i = 0;
//	int sz = sizeof(s) / sizeof(s[0]);
//	printf("name����ǰ��\n");
//	for (i = 0; i < sz; i++)
//	{
//		printf("%s %s %d", (ps+i)->name, (ps + i)->sex, (ps + i)->age);
//		printf("\n");
//	}
//	printf("\n");
//	printf("name�����\n");
//	qsort(s, sz, sizeof(s[0]),jgtname );
//	for (i = 0; i < sz; i++)
//	{
//		printf("%s %s %d", s[i].name, s[i].sex, s[i].age);
//		printf("\n");
//	}
//	qsort(s, sz, sizeof(s[0]), jgtage);
//	printf("\n");
//	printf("age�����\n");
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

//qsort��ģ��ʵ��
//����ķ�ʽ�кܶ���//�п�������ð�����򣬲������򣬶�����ȡ����Ƕ��ܴﵽ���ǵ�Ŀ��
//��������ѡ�����ð������

//����ð������
//int main()
//{
//	int arr[] = { 2,3,1,9,8,7,4,6,0,5 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//ð������
//	int i = 0;
//	int j = 0;
//	int temp = 0;
//	for (i = 0; i < sz - 1; i++)//
//	{ 
//		for (j = 0; j < sz - i - 1; j++)//ÿһ�αȽ�
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

//qsort��ģ��ʵ��

//��ð������Ļ����ϸĽ�ʵ��

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

//bobble_sort2�Ľ�������
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
//��ԭ����qsort�����ǿ��������κ��������͵ģ�
// ��������Ҫ�Ľ����ǵ�ð������Ҳ�ǿ��Խ����κ��������͵�ָ��
//
void bubble_sort2(void*base,int sz,int width,int(*cmp)(const void *e1,const void *e2) )
{
	int i = 0;
	int j = 0;
	for (i = 0; i < sz - 1; i++)//һ��ð������
	{
		for (j = 0; j < sz - i - 1; j++)//ÿһ��ð������Ĺ���
		{
			if (cmp((char*)base + j * width, (char*)base + (j + 1) * width)>0)//����cmp�������Ƚ�
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

















