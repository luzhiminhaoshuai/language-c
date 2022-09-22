#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<assert.h>
//面试题
//int main()
//{
//
//	char* c[] = { "ENTER","NEW","POINT","FIRST" };
//	char** cp[] = { c + 3,c + 2,c + 1,c };
//	char*** cpp = cp;
//	printf("%s\n", **++cpp);//指针位置被改变
//	printf("%s\n", *-- * ++cpp + 3);
//	printf("%s\n", *cpp[-2] + 3);
//	printf("%s\n", cpp[-1][-1] + 1);//相当于       *（ *(cpp-1)）+1
//	                                //cpp-1是得到这个表达式的结果，但是指针本身没有被改变
//	return 0;
//}
//size_t
//int main()
//{   
//	char arr[20] = "abc";
//	/*int c=strlen(arr);*/
//	printf("%s", strcat(arr,arr));
//	return 0;
//}
//int main()
//{   
//	FILE* p = fopen("text.c","r");
//	fclose(p);
//	p = NULL;
//
//	return 0;
//}
//模拟实现库函数strlen
//计算字符串长度
//int my_strlen(const char* arr)
//{    
//	assert(arr);
//	char* str1 = arr;
//	char* str2 = arr;
//	while ((*str2) != '\0')//循环，知道找到\0为止
//	{
//		str2++;
//	}
//	return str2 - str1;
//
//}
//int main()
//{
//	char arr[] = "abcdef";
//	int ret =my_strlen(arr);//传参也是模拟原函数
//	printf("%d", ret);
//	return 0;
//}


//模拟实现strcpy
//拷贝字符串
//void my_strcpy(char*dest,char*sour)
//{
//	assert(dest && sour);//保证传递过来的指针都不为空指针
//	while (*sour != '\0')
//	{
//		*dest++ = *sour++;//先使用再加加
//	}
//
//}
//int main()
//{
//	char arr1[20] = { 0 };
//	char arr2[20] = "abcdef";
//	my_strcpy(arr1,arr2);
//	printf("%s", arr1);
//	return 0;
//}

//字符串比较大小strcmp
//模拟实现strcmp
//小于返回-1.等于返回0，大于返回1
//int my_strcmp(const char* arr1, const char* arr2)
//{
//	assert(arr1&&arr2);
//	while (*arr1 && *arr2)//
//	{
//		if (*arr1 != *arr2)
//		{
//			return *arr1 - *arr2;
//		}
//		arr1++;
//		arr2++;
//	}
//	return 0;
//}
//
//int main()
//{
//	char arr1[20] = "abc7";
//	char arr2[20] = "abc5";
//	int a=my_strcmp(arr1,arr2);
//	printf("%d", a);
//	return 0;
//}

//模拟实现strcat
//不能自己追加自己，不然有可能会改变源字符串
char* my_strcpy(char* dest, char* sour)
{    
	assert(dest && sour);
	char* ret = dest;
	while (*dest)
	{
		dest++;
	}
	while (*sour)
	{
		*dest = *sour;
		dest++;
		sour++;
	}
	return ret;

}

int main()
{
	char arr1[20] = "abcd";
	char arr2[20] = "efgh";
	printf("%s",my_strcpy(arr1, arr2));

	return 0;
}

//const char * strstr ( const char * str1, const char * str2 );
//char* strstr(char* str1, const char* str2);
//模拟实现strstr库函数
//
//int find(char* str1, const char* test)
//{   
//	char* p = str1;
//	char* test1 = test;
//	while (*test1 != '\0')
//	{
//		if (*p != *test1)
//		{
//			return 0;
//		}
//		p++;
//		test1++;
//	}
//	return 1;//找到了返回1
//
//}
//char* my_strstr(char* str1, const char* test)
//{
//	while (*str1)
//	{   
//			int a=find(str1,test);
//			if (a != 0)
//			{
//				return str1;
//			}
//		str1++;
//	}
//	return NULL;
//
//}
//int main()
//{
//	char arr1[20] = "abcdefghijlllzmjkls";
//	char* test = "cd";
//	char*ret =my_strstr(arr1,test);
//	if (ret != NULL)
//	{
//		printf("%s\n", ret);
//	}
//	else
//		printf("Not found!\n");
//	return 0;
//}