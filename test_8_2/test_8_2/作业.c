#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int main()
//{
//	int a = 0;
//	printf("%d", a);
//
//	return 0;
//}
//
//int main()
//{
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int* p = arr;
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d", *p);
//	}
// 
//}
//����
//KiKi����ĳ��ĳ���ж����죬��������ʵ�֡�������ݺ��·ݣ�������һ��������ж����졣
//
// ����������
//�������룬һ���������������ֱ��ʾ��ݺ��·ݣ��ÿո�ָ���
//
// ���������
//���ÿ�����룬���Ϊһ�У�һ����������ʾ��һ��������ж����졣

//int daycount(int a, int b)
//{
//	int c=0;
//	if (b == 1 || b == 3 || b == 5 || b == 7 || b == 8 || b == 10 || b == 12)
//	{
//		c = 0;
//	}
//	else if (b == 4 || b == 6 || b == 9 || b == 11)
//	{
//		c = 1;
//	}
//	else
//	{
//		c = 2;
//	}
//	
//	switch (c)
//	{
//	case 0:
//		return 31;
//	case 1:
//		return 30;
//	case 2:
//		if ((a%4 == 0 && a%100!= 0) ||( a%400 == 0))
//		{
//			return 29;
//		}
//		else
//		{
//			return 28;
//		}
//	default:
//		return 0;
//	}
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	printf("�������� �����£�\n");
//	scanf("%d %d", &a,&b);
//	int x=daycount(a,b);
//	printf("%d", x);
//
//	return 0;
//}
//
//�ж�������ǲ�����ĸ
//int main()
//{
//	char a = 0;
//	while ((a=getchar()) != EOF)
//	{
//		if (('a' <= a && a <= 'z') || ('A' <= a && a <= 'Z'))
//		{
//			printf("%c is an alphabet.\n", a);
//		}
//		else
//		{
//			printf("%c is not an alphabet.\n", a);
//		}
//		getchar();
//	}
//	return 0;
//}
//
//
//��ĸ��Сдת��
//int main()
//{
//	char ch=0;
//	while ((ch = getchar()) != EOF)
//	{
//		
//		if (ch >= 'A' && ch <= 'Z')
//		{
//			printf("%c\n", ch + 32);
//		}
//		else if (ch >= 'a' && ch <= 'z')
//		{
//			printf("%c\n", ch - 32);
//		}
//		else
//		{
//			continue;
//		}
//		
//	}
//	return 0;
//}
//
//KiKi�ǳ�ϲ����������һ�ҵ�����������һ���·������˽⵽��
//��������ǡ�˫11����11��11�գ�������·���7�ۣ�
//��˫12�� ��12��12�գ�������·���8�ۣ�������Ż�ȯ���Զ����50Ԫ���Ż�ȯֻ����˫11��˫12ʹ�ã���
//��KiKi����������Ǯ����
//
//һ�У��ĸ����֣���һ������ʾС�����е��·��۸񣬵ڶ��͵����������ֱ��ʾ������·ݡ���������ڡ�
// ���ĸ�������ʾ�Ƿ����Ż�ȯ�����Ż�ȯ��1��ʾ�����Ż�ȯ��0��ʾ���� ע���������ڱ�ֻ֤�С�˫11���͡�˫12��
//
//int main()
//{
//	float money = 0;
//	int month = 0;
//	int day = 0;
//	int coupon=0;
//	scanf("%f %d %d %d", &money,&month,&day,&coupon);
//	if (day == 11)
//	{
//		if (coupon == 1)
//		{
//			money = (money * 0.7) - 50;
//		}
//		else
//		{
//			money = money * 0.7;
//		}
//
//	}
//	else if (day == 12)
//	{
//
//		if (coupon == 1)
//		{
//			money = (money * 0.8) - 50;
//		}
//		else
//		{
//			money = money * 0.8;
//		}
//	}
//	if (money <= 0)
//	{
//		money = 0;
//	}
//	printf("%.2f\n", money);
//	return 0;
//}
//дһ��������ӡarr��������ݣ���ʹ�������±꣬ʹ��ָ�롣

//arr��һ������һά���顣
//
//void print(int *p)
//{
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", *(p + i));
//	}
//}
//
//int main()
//{   
//	int arr[10] = { 0,1,2,3,4,5,6,7,8,9 };
//	print(arr);
//
//
//	
//	return 0;
//}
//дһ���������ַ�������

//void swap (int *p, int sz)
//{
//	int i = 0;
//	for (i=0; i < sz; i++)
//	{
//		printf("%d", *(p+sz-1)-i);
//	}
//
//}
//
//int main()
//{
//	int arr[] = { 0,1,2,3,4,5,6,7,8,9 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	swap(arr, sz);
//    
//	return 0;
//}

//#include<stdio.h> 
//	int main()
//	{
//		int n, i, m, j, k;
//		scanf("%d", &n);
//		m = (n + 1) / 2;
//		for (i = 1; i <= n; i++)  //һ��һ�е�ѭ����ӡ
//		{
//			if (i <= m)           //������������ϰ벿�ֺ��°벿��
//			{
//				for (j = m - i; j > 0; j--)
//					printf(" ");
//				for (k = i; k > 0; k--)
//					printf("* ");
//			}
//			else
//			{
//				for (j = i - m; j > 0; j--)
//					printf(" ");
//				for (k = 2 * m - i; k > 0; k--)
//					printf("* ");
//			}
//			printf("\n");        //ע�⻻��
//		}
//
//
//	return 0;
// 
//}

//��ˮ�ɻ���100~10000

#include<stdio.h>
//int main()
//{
//	printf("���ˮ�ɻ���:\n");
//	int i, a, b, c,d;
//	for (i = 100; i <= 999; i++) //������ȡֵ��Χ
//	{
//		int a = i % 10;//��λ�� 
//		int b = (i / 10) % 10;//ʮλ�� 
//		int c = i / 100;//��λ�� 
//
//		if (i == a * a * a + b * b * b + c * c * c) //��λ�ϵ��������Ƿ���ԭ��n���
//			printf("%d\t", i);
//	}
//	for (i = 1000; i <= 9999; i++) //������ȡֵ��Χ
//	{
//		int a = i % 10;//��λ�� 
//		int b = (i / 10) % 10;//ʮλ�� 
//		int c = (i/100)%10;//��λ�� 
//		int d = i / 1000;//ǧλ��
//
//		if (i == (a * a * a* a) + (b * b * b * b) + (c * c * c * c)+(d*d*d*d)) //��λ�ϵ��������Ƿ���ԭ��n���
//			printf("%d\t", i);
//	}
//
//	return 0;
//}
//��Sn = a + aa + aaa + aaaa + aaaaa��ǰ5��֮�ͣ�����a��һ�����֣�

//���磺2 + 22 + 222 + 2222 + 22222
int main()
{
	int i = 0;
	int n = 0;
	int temp = 0;
	int sum = 0;
	int j = 0;
	scanf("%d %d", &j, &n);
	for (i=1; i<=j ; i++)
	{
		temp= temp * 10 + n;
		sum = sum + temp;
	}
	printf("%d", sum);


	return 0;
}
