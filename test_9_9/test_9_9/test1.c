#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<assert.h>
//������
//int main()
//{
//
//	char* c[] = { "ENTER","NEW","POINT","FIRST" };
//	char** cp[] = { c + 3,c + 2,c + 1,c };
//	char*** cpp = cp;
//	printf("%s\n", **++cpp);//ָ��λ�ñ��ı�
//	printf("%s\n", *-- * ++cpp + 3);
//	printf("%s\n", *cpp[-2] + 3);
//	printf("%s\n", cpp[-1][-1] + 1);//�൱��       *�� *(cpp-1)��+1
//	                                //cpp-1�ǵõ�������ʽ�Ľ��������ָ�뱾��û�б��ı�
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
//ģ��ʵ�ֿ⺯��strlen
//�����ַ�������
//int my_strlen(const char* arr)
//{    
//	assert(arr);
//	char* str1 = arr;
//	char* str2 = arr;
//	while ((*str2) != '\0')//ѭ����֪���ҵ�\0Ϊֹ
//	{
//		str2++;
//	}
//	return str2 - str1;
//
//}
//int main()
//{
//	char arr[] = "abcdef";
//	int ret =my_strlen(arr);//����Ҳ��ģ��ԭ����
//	printf("%d", ret);
//	return 0;
//}


//ģ��ʵ��strcpy
//�����ַ���
//void my_strcpy(char*dest,char*sour)
//{
//	assert(dest && sour);//��֤���ݹ�����ָ�붼��Ϊ��ָ��
//	while (*sour != '\0')
//	{
//		*dest++ = *sour++;//��ʹ���ټӼ�
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

//�ַ����Ƚϴ�Сstrcmp
//ģ��ʵ��strcmp
//С�ڷ���-1.���ڷ���0�����ڷ���1
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

//ģ��ʵ��strcat
//�����Լ�׷���Լ�����Ȼ�п��ܻ�ı�Դ�ַ���
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
//ģ��ʵ��strstr�⺯��
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
//	return 1;//�ҵ��˷���1
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