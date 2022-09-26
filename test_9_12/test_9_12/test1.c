#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<assert.h>
//int main()
//{
//    char ch = 'w';
//    char* pc = &ch;
//    *pc = 'w';
//    return 0;
//}
//int main()
//{
//    const char* pstr = "hello bit.";//这里是把一个字符串放到pstr指针变量里了吗？
//    printf("%s\n", pstr);
//    return 0;
//}

//内存函数memcpy的模拟实现

//void* memcpy(void* destination, const void* source, size_t num);

void my_memcpy(void*dest,void*src,size_t num)
{
	while (num--)
	{
		*(char*)dest = *(char*)src;
		dest = (char*)dest + 1;
		src = (char*)src + 1;
	}
}
int main()
{  
	int arr1[20] = { 1,2,3,4,5,6,7,8,9,10 };
	int arr2[20] = { 0 };
	int n = 0;
	scanf("%d", &n);
	my_memcpy(arr2,arr1,sizeof(int)*n);
	for (int i = 0; i < n; i++)
	{
		printf("%d ",arr1[i]);

	}
	return 0;
}

//内存函数memmove的模拟实现
//memmove函数可以说是包含了memcpy的，是memcpy的升级版
//void* my_memmove(void* dest, void* src, size_t num)

//void* my_memmove(void* dest, void* src, size_t num)
//{ 
//	assert(dest && src);
//	void* ret = dest;
//	if (dest < src)
//	{
//		while (num--)
//		{
//			*(char*)dest = *(char*)src;
//			dest=(char*)dest+1;
//			src = (char*)src + 1;
//		}
//	}
//	else
//	{
//		while (num--)
//		{
//			*((char*)dest + num) = *((char*)src + num);
//		}
//	}
//	return ret;
//}
//int main()
//{
//	int arr1[20] = { 1,2,3,4,5,6,7,8,9,10 };
//	int arr2[20] = { 1,2,3,4,5,6,7,8,9,10 };
//	my_memmove(arr1+2 ,arr1,12);
//	for (int i = 0; i < 20; i++)
//	{
//		printf("%d ", arr1[i]);
//	}
//	return 0;
//}
//int main()
//{
//	int num = 5;
//	while (num--)
//	{
//		printf("%d", num);
//	}
//	return 0;
//}