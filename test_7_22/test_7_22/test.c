#define _CRT_SECURE_NO_WARNINGS 1


#include <stdio.h>
//
//int main()
//{
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		if (i = 5)
//			printf("%d ", i);
//	}
//	return 0;
//}

//
//int main()
//{
//	int d = 0;
//	scanf("%d", &d);
//
//	switch (d)
//	{
//	case 2:
//		printf("2\n");
//		break;
//	case 1:
//		printf("1\n");
//		break;
//
//	default:
//		printf("ѡ�����\n");
//		break;
//	}
//	return 0;
//}
//


//дһ�������ӡ1-100֮������3�ı���������

//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 100; i++) 
//	{
//		//�ж�i�Ƿ���3�ı���
//		if (i % 3 == 0)
//		{
//			printf("%d ", i);
//		}
//	}
//
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	for (i = 3; i <= 100; i+=3)
//	{
//		printf("%d ", i);
//	}
//
//	return 0;
//}
//

//д���뽫�������������Ӵ�С�����
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	scanf("%d %d %d", &a, &b, &c);
//	int t = 0;
//	if (a < b)
//	{
//		t = a;
//		a = b;
//		b = t;
//	}
//	if (a < c)
//	{
//		t = a;
//		a = c;
//		c = t;
//	}
//	if (b < c)
//	{
//		t = b;
//		b = c;
//		c = t;
//	}
//
//	printf("%d %d %d\n", a, b, c);
//	return 0;
//}

//дһ�����룺��ӡ100~200֮�������
//����-����
//ֻ�ܱ�1������������
//7
//2~6
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		int flag = 1;//��ʾ������
//		//�ж�i�Ƿ�Ϊ����
//		//ʹ��2~i-1֮�������ȥ�Գ�i
//		int j = 0;
//		for (j = 2; j < i; j++)
//		{
//			//��j���Գ�i
//			if (i % j == 0)
//			{
//				flag = 0;
//				break;
//			}
//		}
//		if (1 == flag)
//		{
//			count++;
//			printf("%d ", i);
//		}
//	}
//	printf("\ncount = %d\n", count);
//	return 0;
//}

//i = m*n
//m��n��������һ�������� <= ��ƽ��i��
//2~��ƽ��i֮�� �ҵ�һ��i������
//16 = 2*8
//16 = 4*4
//
//�⺯��sqrt����������ƽ����
//math.h
//
#include <math.h>
//
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		int flag = 1;//��ʾ������
//		//�ж�i�Ƿ�Ϊ����
//		//ʹ��2~i-1֮�������ȥ�Գ�i
//		int j = 0;
//		for (j = 2; j <= sqrt(i); j++)
//		{
//			//��j���Գ�i
//			if (i % j == 0)
//			{
//				flag = 0;
//				break;
//			}
//		}
//		if (1 == flag)
//		{
//			count++;
//			printf("%d ", i);
//		}
//	}
//	printf("\ncount = %d\n", count);
//	return 0;
//}
//


//
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 101; i <= 200; i+=2)
//	{
//		int flag = 1;//��ʾ������
//		//�ж�i�Ƿ�Ϊ����
//		//ʹ��2~i-1֮�������ȥ�Գ�i
//		int j = 0;
//		for (j = 2; j <= sqrt(i); j++)
//		{
//			//��j���Գ�i
//			if (i % j == 0)
//			{
//				flag = 0;
//				break;
//			}
//		}
//		if (1 == flag)
//		{
//			count++;
//			printf("%d ", i);
//		}
//	}
//	printf("\ncount = %d\n", count);
//	return 0;
//}
//
//
//�Գ���
//
//����������N�־��硷
//


//
//��ӡ1000�굽2000��֮�������
//�����жϵĹ���
//1. �ܱ�4���������ܱ�100������������
//2. �ܱ�400����������
//
//
//int main()
//{
//	int year = 0;
//	int count = 0;
//	for (year=1000; year<=2000; year++)
//	{
//		//�ж�year�ǲ�������
//		if (year % 4 == 0)
//		{
//			if (year % 100 != 0)
//			{
//				count++;
//				printf("%d ", year);
//			}
//		}
//		if (year % 400 == 0)
//		{
//			count++;
//			printf("%d ", year);
//		}
//	}
//	printf("\ncount = %d\n", count);
//	return 0;
//}

//
//int main()
//{
//	int year = 0;
//	int count = 0;
//	for (year = 1000; year <= 2000; year++)
//	{
//		//�ж�year�ǲ�������
//		if (((year%4==0)&&(year%100!=0)) || (year%400==0))
//		{
//			printf("%d ", year);
//			count++;
//		}
//	}
//
//	printf("\ncount = %d\n", count);
//	return 0;
//}
//
//

//���������������������������Լ��
//
//int main()
//{
//	//18 12
//	int m = 0;
//	int n = 0;
//	scanf("%d %d", &m, &n);
//	//�����Լ��
//	int min = (m < n ? m : n);
//	while (1)
//	{
//		if (m % min == 0 && n % min == 0)
//		{
//			printf("%d\n", min);
//			break;
//		}
//		min--;
//	}
//
//	return 0;
//}


//շת�����
//
//int main()
//{
//	//18 12
//	int m = 0;
//	int n = 0;
//	int r = 0;
//	scanf("%d %d", &m, &n);
//	while (r=m % n)
//	{
//		m = n;
//		n = r;
//	}
//	printf("%d\n", n);
//
//	return 0;
//}
//


//����Ļ�����9*9�˷��ھ���
//1*1=1
//2*1=2 2*2=4
//3*1=3 3*2=6 3*3=9
//...
//

#include <stdio.h>

//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 9; i++)
//	{
//		//��ӡһ��
//		int j = 0;
//		for (j=1; j<=i; j++)
//		{
//			printf("%d*%d=%-2d ", i, j, i * j);
//		}
//		printf("\n");
//	}
//	return 0;
//}

//��10 �����������ֵ

//int main()
//{
//	int arr[] = { -1,-2,-3,-4,-5,-6,-7,-8,-9,-10 };
//	int max = arr[0];
//	int i = 0;
//	for (i = 1; i < 10; i++)
//	{
//		if (arr[i] > max)
//			max = arr[i];
//	}
//	
//	printf("%d\n", max);
//
//	return 0;
//}
//


//
//C���Եı������ṩ��һЩ�⺯��
//printf
//scanf
//strlen
//
//C���Ծ����﷨
//C���Ա�׼������һЩ������
//scanf - �����������ܣ��������������ͣ���ôʵ�֣����ܣ���ʵ���ǽ�������������ʵ�ֵ�
//prinf
//strlen
//.....
//VS - ΢��
//gcc - gcc�ٷ�
//clang - ƻ��
//

//
//1. ����Ч�ʵ�
//2. ��׼
//3. ���׳�bug
//

#include <string.h>
//
//int main()
//{
//	char arr1[20] = "xxxxxxxxxxxxxxx";
//	char arr2[] =   "hello bit";
//	strcpy(arr1, arr2);
//	printf("%s\n", arr1);
//
//	return 0;
//}

//int main()
//{
//	char arr[] = "hello bit";
//	memset(arr, 'x', 5);
//	printf("%s\n", arr);
//
//	return 0;
//}

//int get_max(int x, int y)
//{
//	//if (x > y)
//	//	return x;
//	//else
//	//	return y;
//	return (x > y ? x : y);
//}
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);//����
//	//������ʹ��-����
//	int m = get_max(a, b);
//	printf("%d\n", m);
//
//	return 0;
//}

//дһ���������Խ����������α���������
//
//void Swap(int x, int y)
//{
//	int z = 0;
//	z = x;
//	x = y;
//	y = z;
//}

//
//���������õ�ʱ��
//ʵ�δ����β�ʱ���βν���ʵ�ε�һ����ʱ����
//���Զ��βε��޸��ǲ�Ӱ��ʵ�ε�
//

void Swap(int* px, int* py)
{
	int t = 0;
	t = *px;  //t = a;
	*px = *py;//a=b;
	*py = t;  //b =t
}

int main()
{
	int a = 0;
	int b = 0;
	scanf("%d %d", &a, &b);//����

	printf("����ǰ:a=%d b=%d\n", a, b);
	//��ֵ����
	//Swap(a, b);
	//����ַ����ַ����
	Swap(&a, &b);
	printf("������:a=%d b=%d\n", a, b);
	return 0;
}

//
//int main()
//{
//	int a = 10;
//	int* p = &a;
//	*p = 20;
//	printf("%d\n", a);
//	return 0;
//}