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
////��������Ľ����ʲô��
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

//�ҵ���
//һ��������ֻ�����������ǳ���һ�Σ������������ֶ����������Ρ�
//��дһ�������ҳ�������ֻ����һ�ε����֡�

#define find_singledog fsd


void fsd(int*p,int sz)
{
	int* p1 = p;
	int* p2 = p;
	int count = 0;
	int arr1[2] = { 0,0 };//������ŵ�����
	int x = 0;
	int k = 0;
	for (int i=0;i<sz;i++)
	{    
		x = *p2;//��Ҫ���ҵ���ͬ��
		for (int j = 0; j < sz; j++)//����������ͬ��
		{
			if ((*(p1+j)) == x)
			{
				count++;
			}
		}
		if (count == 1)//����������ͬ���������ֻ��һ����ͬ��ô�����Ǹ���һ������
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
//strncpy��ģ��ʵ��

//char* my_strncpy(char*dest,char*src,int num)
//{
//	assert(dest&&src);//����dest��src����Ϊ��
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
//ģ��ʵ��strncat
//char* my_strncat(char*dest,char*src,int num)
//{
//	assert(dest && src);//����dest��src��Ϊ��ָ��
//	char* ret = dest;//��¼Ŀ���ַ�������ʼ��ַ
//	//Ѱ��Ŀ���ַ����ġ�\0��
//	while (*dest++ != '\0')
//	{
//
//	}
//	dest--;
//	while (num&&*src)//׷�Ӷ��ٸ��ֽھ�ѭ�����ٴ�
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

//ģ��ʵ�ֿ⺯��atoi���ַ���ת���ֵĺ�����
// �ж��ǲ��ǿ��ַ���
//�����' '��������
// ������ĸ�ͷ���0��
//��������Ҳ��������ת������������ĸ����\0��ʱ��ֹͣ
//
//
//int my_atoi(const char* str)
//{   
//	assert(str);
//	//����str���ǿ�ָ�룻
//	if (*str == '\0')
//	{
//		return 0;
//	}
//	while (*str == ' ')//�ո��ַ�������������
//	{
//		str++;
//	}
//	//�ж���������
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
//	if (isdigit(*str)!=1||(*str)=='\0')//����������������ĸ������'\0������
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


