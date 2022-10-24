#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
#include <ctype.h>
//int main()
//{
//    unsigned char puc[4];
//    struct tagPIM
//    {
//        unsigned char ucPim1;
//        unsigned char ucData0 : 1;
//        unsigned char ucData1 : 2;
//        unsigned char ucData2 : 3;
//    }*pstPimData;
//    pstPimData = (struct tagPIM*)puc;
//    memset(puc, 0, 4);
//    pstPimData->ucPim1 = 2;
//    pstPimData->ucData0 = 3;
//    pstPimData->ucData1 = 4;
//    pstPimData->ucData2 = 5;
//    printf("%02x %02x %02x %02x\n", puc[0], puc[1], puc[2], puc[3]);
//    return 0;
//}
//
//enum ENUM_A
//{
//	X1,
//	Y1,
//	Z1 = 255,
//	A1,
//	B1
//};
//enum ENUM_A enumA = Y1;
//enum ENUM_A enumB = B1;
//int main()
//{
//	printf("%d %d\n", enumA, enumB);
//
//}

//union Un1
//{
//	char c[5];
//	int i;
//};
//union Un2
//{
//	short c[7];
//	int i;
//};
////下面输出的结果是什么？
//int main()
//{
//	printf("%d\n", sizeof(union Un1));
//	printf("%d\n", sizeof(union Un2));
//	return 0;
//}

//int main()
//{
//    union
//    {
//        short k;
//        char i[2];
//    }*s, a;
//    s = &a;
//    s->i[0] = 0x39;
//    s->i[1] = 0x38;
//    printf("%x\n", a.k);
//    return 0;
//}

//找单身狗
//一个数组中只有两个数字是出现一次，其他所有数字都出现了两次。
//编写一个函数找出这两个只出现一次的数字。

#define find_singledog fsd


void fsd(int*p,int sz)
{
	int* p1 = p;
	int* p2 = p;
	int count = 0;
	int arr1[2] = { 0,0 };//用来存放单身狗数
	int x = 0;
	int k = 0;
	for (int i=0;i<sz;i++)
	{    
		x = *p2;//需要查找的相同数
		for (int j = 0; j < sz; j++)//遍历查找相同数
		{
			if ((*(p1+j)) == x)
			{
				count++;
			}
		}
		if (count == 1)//遍历查找相同的数，如果只有一次相同那么就是那个不一样的数
		{
			arr1[k] = x;
			k++;
		}
		p2++;
		count = 0;
	}
	printf("%d %d", arr1[0], arr1[1]);
}
int main()
{

	int arr[12] = {14,14,8,9,7,7,6,6,2,2,5,5};
	fsd(arr,12);
	return 0;
}
//strncpy的模拟实现

//char* my_strncpy(char*dest,char*src,int num)
//{
//	assert(dest&&src);//断言dest和src都不为空
//	char* ret = dest;
//	int i = 0;
//	while ((i < num) && (*src != '\0'))
//	{
//		*dest++ = *src++;
//		i++;
//	}
//	return ret;
//}
//
//int main()
//{
//	char arr1[8] = "abcdefg";
//	char arr2[] = "qwerty";
//	printf("%s", my_strncpy(arr1, arr2, 3));
//	return 0;
//}
//模拟实现strncat
//char* my_strncat(char*dest,char*src,int num)
//{
//	assert(dest && src);//断言dest和src不为空指针
//	char* ret = dest;//记录目标字符串的起始地址
//	//寻找目标字符串的‘\0’
//	while (*dest++ != '\0')
//	{
//
//	}
//	dest--;
//	while (num&&*src)//追加多少个字节就循环多少次
//	{
//		*dest++ = *src++;
//		num--;
//	}
//	*dest = NULL;
//	return ret;
//}
//
//int main()
//{
//	char str1[40] = "xu xiao yan ";
//	char str2[20] = "ni hao piao liang";
//	//printf("%s",str1);
//	my_strncat(str1,str2,20);
//	printf("%s",str1);
//	return 0;
//}

//模拟实现库函数atoi（字符串转数字的函数）
// 判断是不是空字符串
//如果是' '就往下找
// 遇到字母就返回0；
//遇到数字也继续往下转换，当遇到字母或者\0的时候停止
//
//
//int my_atoi(const char* str)
//{   
//	assert(str);
//	//断言str不是空指针；
//	if (*str == '\0')
//	{
//		return 0;
//	}
//	while (*str == ' ')//空格字符就跳过继续找
//	{
//		str++;
//	}
//	//判断数字正负
//	int flag = 1;
//	if (*str == '+')
//	{
//		*str++;
//	}
//	else if(*str=='-')
//	{
//		flag = -1;
//		str++;
//	}
//	long long n = 0;
//	while (isdigit(*str))
//	{
//		n = n * 10 + (*str - '0') * flag;
//		if (n > INT_MAX || n < INT_MIN)
//		{
//			return 0;
//		}
//		str++;
//	}
//	if (isdigit(*str)!=1||(*str)=='\0')//结束条件，遇到字母或者是'\0’结束
//	{
//		return (int)n;
//	}
//	return (int)n;
//
//}
//
//int main()
//{
//	char* str1 = "-1234";
//	char* str2 = "";
//	char* str3 = "  5678wh";
//	char* str4 = " hjs 987";
//	printf("%d\n", atoi(str1));
//	printf("%d\n", atoi(str2));
//	printf("%d\n", atoi(str3));
//	printf("%d\n", atoi(str4));
//
//}

//int main()
//{
//    char arr1[] = "-21abv";
//    char arr2[] = "  --1234";
//    char arr3[] = "abc123";
//    char arr4[] = "";
//    printf("%d\n", atoi(arr1));
//    printf("%d\n", atoi(arr2));
//    printf("%d\n", atoi(arr3));
//    printf("%d\n", atoi(arr4));
//    return 0;
//}


