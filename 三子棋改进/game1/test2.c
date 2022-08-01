#define _CRT_SECURE_NO_WARNINGS 1
#include"game1.h"
//int main()
//{
//	char arr1[20] = { 0 };
//	scanf("%[^\n]", arr1);
//	printf("%s\n", arr1);
//
//	char arr2[20] = { 0 };
//	scanf("%s", arr2);
//	printf("%s\n", arr2);
//	if (strcmp(arr1, "wo wo") == 0)
//	{
//		printf("arr1;%s\n", arr1);
//	}
//	if (strcmp(arr2, "wo wo") == 0)
//	{
//		printf("arr2;%s\n", arr2);
//	}
//
//	return 0;
//}
//不允许创建临时变量，交换两个整数的内容
//int main()
//{
//	int a = 3;//011   
//	int b = 5;//101
//	a = a ^ b;
//	b = a ^ b;// 相当于a^b^b=a
//	a = a ^ b;//相当于a^a^b==b
//	printf("%d %d", a, b);
//	return 0;
//}

//统计二进制中1的个数

//int main()
//{ 
//	 int a = 0;
//	scanf("%d", &a);
//	int i = 0;
//	int count = 0;
//	for (i = 0; i < 32; i++)
//	{
//		if ((a>>i)&1==1)
//		{
//			count++;
//		}
//	}
//	printf("%d", count);
//	return 0;
//}

//求两个数二进制中不同位的个数
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a,&b);
//
//	int i = 0;
//	int count = 0;
//	for (i = 0; i < 32; i++)
//	{
//		if (((a >> i)&1)^((b>>i)&1)== 1)
//		{
//			count++;
//		}
//	}
//	printf("%d", count);
//	return 0;
//}








