#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//��ֵ������
//int main()
//{
//	int a = 10;
//	int b = 0;
//	b = a = a + 3;
//	printf("a=%d b=%d\n", a, b);
//
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	//a = a >> 1;
//	//a >>= 1;
//	//a = a + 1;
//	a += 1;
//	printf("%d\n", a);
//
//	return 0;
//}

//int main()
//{
//	int flag = 0;
//	//if (!flag)
//	if(flag == 0)
//	{
//		printf("hehe\n");
//	}
//
//	return 0;
//}

//int main()
//{
//	int a = 10;//4
//	char c = 0;//1
//	2 + 3;
//	+3;
//	2 * 3;
////	printf("%p\n", &a);
////	printf("%p\n", &c);
//
//	int* pa = &a;//& - ȡ��ַ������
//	//*pa = 20;//* - �����ò�����
//	*pa = 20;//int*  <--- int
//
//	return 0;
//}

//int main()
//{
//	int arr[10];
//	&arr;//ȡ������ĵ�ַ
//	//�Ժ���ȡ��ַ
//	return 0;
//}
//


//int main()
//{
//	//
//	//Ұָ�� - ����
//	//
//	//*(int*)0x0012ff40 = 100;
//	//
//
//	return 0;
//}
//

//
//int main()
//{
//	short s = 10;
//	int a = 2;
//	s = a + 5;
//
//	printf("%zu\n", sizeof(s = a + 5));
//
//	printf("%d\n", s);//
//
//
//	//int a = 10;
//	//int* p;
//	//int arr[10];
//
//	//printf("%zu\n", sizeof(a));//int  4
//	//printf("%zu\n", sizeof a);//int  4
//	//printf("%zu\n", sizeof(int));//int  4
//	////printf("%zu\n", sizeof int);//err
//
//
//	//printf("%zu\n", sizeof(p));//int* 4
//	//printf("%zu\n", sizeof(arr));//int [10] 40
//	//printf("%zu\n", sizeof(arr[10]));//int 4
//
//	return 0;
//}
//
//


//int main()
//{
//	int a = 0;
//	//00000000000000000000000000000000
//	//11111111111111111111111111111111 - �ڴ���-����
//	//11111111111111111111111111111110
//	//10000000000000000000000000000001
//    
//	//-1
//
//	printf("%d\n", ~a);
//
//	return 0;
//}
//

//
//int main()
//{
//	int a = 10;
//	int n = 0;
//	scanf("%d", &n);
//	//��a�ĵ�nλ��Ϊ1
//	a = a | (1 << (n-1));
//	printf("a=%d\n", a);
//
//	//��a�ĵ�nλ��Ϊ0
//	a = a & ~(1 << (n - 1));
//	printf("a=%d\n", a);
//
//	//00000000000000000000000000001010
//	//00000000000000000000000000010000
//	//1<<2;
//	//00000000000000000000000000011010
//	//11111111111111111111111111101111
//	//00000000000000000000000000010000
//	//00000000000000000000000000001010
//	return 0;
//}
//
//
//int main()
//{
//	int a = 4;
//	//int b = ++a;//ǰ��++����++����ʹ��
//	//a=a+1;b=a;
//
//	//int b = a++;//����++����ʹ�ã���++
//	//b=a;a=a+1;
//
//	//int b = --a;
//	//a=a-1;b=a;
//
//	//int b = a--;
//
//	//printf("%d\n", b);//
//	//printf("%d\n", a);//
//
//	return 0;
//}
//
//
//int main()
//{
//	int a = (int)3.14;
//	printf("%d\n", a);
//
//	return 0;
//}
//
//
//int main()
//{
//	int a = 10;
//	if (a == 10)
//	{
//
//	}
//	if (10 == a)//����
//	{
//
//	}
//	return 0;
//}
//
//�ṹ��
//��.����>��.����
//
//
//
//int main()
//{
//	char arr[] = "abcdef";
//  //==���ܱȽ�2���ַ��������ݣ�ʵ���ϱȽϵ���2���ַ��������ַ��ĵ�ַ
//	if (arr == "abcdef")
//	{
//		printf("==\n");
//	}
//
//	return 0;
//}
//

//
//int main()
//{
//	//int a = 3;
//	//int b = 0;
//	//if (a && b)
//	//{
//	//	printf("�Ǻ�\n");
//	//}
//
//	//int a = 0;
//	//int b = 0;
//	//if (a || b)
//	//{
//	//	printf("�Ǻ�\n");
//	//}
//
//	//int age = 20;
//	//18~36 ����
//	//if (age >= 18 && age <= 36)
//	//{
//	//	printf("����\n");
//	//}
//
//	//int year = 2000;
//	//if (((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0))
//	//{}
//
//
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int i = 0, a = 0, b = 2, c = 3, d = 4;
//	//i = a++ && ++b && d++;
//	
//	i = a++||++b||d++;
//
//	printf("a = %d\nb = %d\nc = %d\nd = %d\n", a, b, c, d);
//
//	printf("%d\n", i);
//	return 0;
//}

//
//int main()
//{
//	int a = 3;
//	int b = 0;
//	if (a > 5)
//		b = 3;
//	else
//		b = -3;
//
//	b = ((a > 5) ? 3 : -3);
//
//
//	int m = (a > b ? a : b);
//
//
//	return 0;
//}

//int main()
//{
//	int arr[10];
//	
//	arr[4] = 5;
//	//
//	//[] �±����ò�����
//	//��������arr 4
//	//
//
//	return 0;
//}

//void test(int x, int y)
//{
//
//}
//void test2()
//{}
//
//int main()
//{
//	test2();
//	//��������test2
//	test(3, 4);//()�������ò�����
//	//��������test,3,4
//	return 0;
//}


//
//�飺����+����
//
//struct Book
//{
//	char name[20];
//	int price;
//};
//
//int main()
//{
//	struct Book sb = {"����C����", 55};
//	
//	printf("%s %d\n", sb.name, sb.price);//�ṹ�����.�ṹ���Ա��
//
//	struct Book* ps = &sb;
//	printf("%s %d\n", (*ps).name, (*ps).price);
//	printf("%s %d\n", ps->name, ps->price);//�ṹ��ָ��->�ṹ���Ա��
//
//	return 0;
//}
//
//
//int main()
//{
//	char a = 5;//�ض�
//	char b = 126;//�ض�
//	char c = a + b;//�ض�
//	//00000000000000000000000000000101
//	//00000101 - a
//	//00000000000000000000000001111110
//	//01111110 - b
//	//��������
//	//00000000000000000000000000000101-a
//	//00000000000000000000000001111110-b
//	//00000000000000000000000010000011
//	//10000011 - c
//	printf("%d\n", c);
//	//%d ʮ���Ƶķ�ʽ��ӡ�з�������
//	//11111111111111111111111110000011
//	//11111111111111111111111110000010
//	//10000000000000000000000001111101
//	//-125
//	//
//	return 0;
//}

//int main()
//{
//	char a = 0xb6;
//	//10110110
//	//
//	short b = 0xb600;
//	int c = 0xb6000000;
//	if (a == 0xb6)
//		printf("a");
//	if (b == 0xb600)
//		printf("b");
//	if (c == 0xb6000000)
//		printf("c");
//
//	return 0;
//}
//


//int main()
//{
//	//char c = 1;
//	//printf("%u\n", sizeof(c));
//	//printf("%u\n", sizeof(c+1));
//
//	//printf("%u\n", sizeof(+c));
//	//printf("%u\n", sizeof(-c));
//
//	//3 + 5 * 6;
//	//3*5*6
//	//
//	return 0;
//}

int fun()
{
	static int count = 1;
	return ++count;
}
int main()
{
	int answer;
	answer = fun() - fun() * fun();
	printf("%d\n", answer);//������٣�
	return 0;
}






