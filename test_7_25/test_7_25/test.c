#define _CRT_SECURE_NO_WARNINGS 1

//��д����(����������ʱ����)�����ַ����ĳ��ȡ�
//��д����,���ַ����ĳ���
//


#include <stdio.h>
#include <string.h>

//int my_strlen(char* str)
//{
//	int count = 0;
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}

//�ݹ鷽��

//int my_strlen(char* str)
//{
//	if (*str != '\0')
//		return 1 + my_strlen(str + 1);
//	else
//		return 0;
//}
//
//int main()
//{
//	char arr[] = "abc";
//	int len = my_strlen(arr);//char*
//	printf("%d\n", len);
//
//	return 0;
//}


//��n�Ľ׳�
//int Fac1(int n)
//{
//	if (n <= 1)
//		return 1;
//	else
//		return n * Fac1(n - 1);
//}
//
////����
//int Fac2(int n)
//{
//	int i = 0;
//	int ret = 1;
//	for (i = 1; i <= n; i++)
//	{
//		ret = ret*i;
//	}
//	return ret;
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = Fac2(n);
//
//	printf("%d\n", ret);
//	return 0;
//}
//


//���n��쳲���������

//쳲���������
//1 1 2 3 5 8 13 21 34 55 ....
//

//
//��쳲��������ǲ��ʺ�ʹ�õݹ�����
//
//
//int count = 0;
//
//int Fib(int n)
//{
//	if (n == 3)
//		count++;
//
//	if (n <= 2)
//		return 1;
//	else
//		return Fib(n - 1) + Fib(n - 2);
//}

//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = Fib(n);
//	printf("%d\n", ret);
//	printf("count = %d\n", count);
//	return 0;
//}

//
//int Fib(int n)
//{
//	int a = 1;
//	int b = 1;
//	int c = 1;
//
//	while (n>2)
//	{
//		c = a + b;
//		a = b;
//		b = c;
//		n--;
//	}
//	return c;
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = Fib(n);
//	printf("%d\n", ret);
//	return 0;
//}
//

//Hanoi(n) = Hanoi(n-1) + 1

//
//#include <stdio.h>
//int main()
//{
//	int a = 0, b = 0;
//	for (a = 1, b = 1; a <= 100; a++)
//	{
//		if (b >= 20) break;
//		if (b % 3 == 1)
//		{
//			b = b + 3;
//			continue;
//		}
//		b = b - 5;
//	}
//	printf("%d\n", a);
//	return 0;
//}

//����1/1-1/2+1/3-1/4+1/5 ���� + 1/99 - 1/100 ��ֵ����ӡ�����

//int main()
//{
//	int i = 0;
//	double sum = 0.0;
//	int flag = 1;
//	for (i = 1; i <= 100; i++)
//	{
//		sum += (flag*1.0 / i);
//		flag = -flag;
//	}
//
//	printf("%lf\n", sum);
//
//	return 0;
//}
//


//��д������һ�� 1�� 100 �����������г��ֶ��ٸ�����9
//9 19 29 39 49 59 69 79 89 99
//90 91 92 93 94 95 96 97 98 99
//
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 10 == 9)
//			count++;
//	    if (i / 10 == 9)
//			count++;
//	}
//	printf("\ncount = %d\n", count);
//
//	return 0;
//}
//
//
//void Swap1(int x, int y)
//{
//	int z = x;
//	x = y;
//	y = z;
//}
//
//void Swap2(int*px, int *py)
//{
//	*px;//*px���޸Ĳ���Ӱ����ߵ�a
//	*py;//*py���޸Ĳ���Ӱ����ߵ�b
//}
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	Swap1(a, b);
//	int* pa = &a;
//	int* pb = &b;
//	Swap2(pa, pb);
//
//	return 0;
//}

//
//void test()
//{
//	int a = 10;
//	{
//		int b = 20;
//		printf("b=%d\n", b);
//	}
//	printf("b=%d\n", b);//err
//}
//int main()
//{
//	return 0;
//}
//

//ʵ��һ����������ӡ�˷��ھ����ھ���������������Լ�ָ��
//�磺����9�����9 * 9�ھ������12�����12 * 12�ĳ˷��ھ���
//
//void print_table(int n)
//{
//	int i = 0;
//	//����
//	for (i = 1; i <= n; i++)
//	{
//		//��ӡһ��
//		int j = 0;
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d*%d=%2d ", i, j, i * j);
//		}
//		printf("\n");
//	}
//}
//
//int main()
//{
//	int line = 0;
//	scanf("%d", &line);
//	print_table(line);
//	return 0;
//}
//

//void test(int* brr)
//void test(int brr[])
//{
//	int a = 10;
//	int b = 20;
//	brr[0] = a;
//	brr[1] = b;
//}
//
//int main()
//{
//	int x = 0;
//	int y = 0;
//	int arr[2] = {0};
//	test(arr);
//
//	return 0;
//}

//void test(int*px, int*py)
//{
//	int a = 10;
//	int b = 20;
//	*px = a;
//	*py = b;
//}
//
//int main()
//{
//	int x = 0;
//	int y = 0;
//	test(&x, &y);
//	printf("%d %d\n", x, y);
//
//	return 0;
//}
//
//
//int g_x = 0;
//int g_y = 0;
//
//void test()
//{
//	int a = 10;
//	int b = 20;
//	g_x = a;
//	g_y = b;
//
//	//�����ʾ��
//	void test2()
//	{
//		///
//	}
//}
//
//int main()
//{
//	test();
//	int x = g_x;
//	int y = g_y;
//	printf("%d %d\n", x, y);
//
//	return 0;
//}

//extern int Add(int x, int y);
//
//int test()
//{
//	int a = 0;
//	scanf("%d", &a);//0
//	a = 20;
//}
//
//int main()
//{
//	int ret = test();
//	printf("%d\n", ret);
//
//	return 0;
//}
//



int Fun(int n)
{
    if (n == 5)
        return 2;
    else
        return 2 * Fun(n + 1);
}


int main()
{
    printf("%d\n", Fun(2));
    return 0;
}





