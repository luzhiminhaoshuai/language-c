//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
////�ݹ�ͷǵݹ�ֱ�ʵ����n�Ľ׳ˣ���������������⣩
//int fun1(int x)//�ǵݹ�ʵ��
//{
//	int i = 0;
//	int sum = 1;
//	if (0 == x)
//	{
//		return 1;
//	}
//	if (x > 0)
//	{
//		for (i = 1; i <= x; i++)
//		{
//			sum *= i;
//		}
//		return sum;
//	}
//
//}
//int fun2(int y)//�ݹ�ʵ��
//{
//	if (0 == y)
//	{
//		return 1;
//	}
//	if (y > 0)
//	{
//		return y * fun2(y - 1);
//	}
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	printf("�ǵݹ�ʵ�֣�%d\n", fun1(n));
//	printf("�ݹ�ʵ�֣�  %d\n", fun2(n));
//	return 0;
//}