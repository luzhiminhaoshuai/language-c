#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//
//int main()
//{
//	//char* 
//	//char ch = 'w';
//	//char* pc = &ch;
//	//2 + 3;
//	const char *ps = "abcdef";
//	//printf("%s\n", ps);
//	printf("%c\n", *ps);
//
//	return 0;
//}

//ָ������-���ָ�������
//char*
//int* 
//char** 
//

//int main()
//{
//	char* arr[4];//���ָ�������
//	int* arr2[6];//���ָ�������
//	return 0;
//}


//����ָ��
//����ָ�� - int* - ָ�����͵�ָ��
//�ַ�ָ�� - char* - ָ���ַ���ָ��
//����ָ�� - ָ�������ָ��

//int main()
//{
//	int num = 10;
//	int* p = &num;
//
//	int arr[10] = {0};
//	int (*pa)[10] = &arr;//ȡ����������ĵ�ַ
//	//pa����һ������ָ�����
//	
//	int* p2 = arr;//��������ʵ��������Ԫ�صĵ�ַ��arr����&arr[0]
//
//	return 0;
//}

//����ָ��-Ҳ��ָ��-ָ������ָ��

//int Add(int x, int y)
//{
//	return x + y;
//}
//
//int main()
//{
//	//pf���Ǻ���ָ�����
//	int (*pf)(int, int) = Add;//&Add
//	//int sum = (*pf)(3, 5);
//	int sum = pf(3, 5);
//
//	printf("%d\n", sum);
//
//	return 0;
//}

//
//����ָ������
//

//int main()
//{
//	//����ָ������
//	int (*pfArr[5])(int, int);
//	
//	//p3��һ��ָ�򡾺���ָ�����顿��ָ��
//	int (* (*p3)[5])(int, int) = &pfArr;
//
//	return 0;
//}

//
//ʹ�ú���ָ��ʵ�ֻص�����
//

//����������
//��������������Ԫ�صĵ�ַ
//������2�����⣺
//1. sizeof(������) - ��������ʾ�������飬���������������Ĵ�С����λ���ֽ�
//2. &������ - ������Ҳ��ʾ�������飬ȡ��������������ĵ�ַ
//�������2�����⣬����������е�����������ʾ��Ԫ�صĵ�ַ
//
//
//int main()
//{
//	int a[] = { 1,2,3,4 };
//	//int* p = a;
//	//int (*pa)[4] = &a;
//	//printf("%p\n", p);
//	//printf("%p\n", p+1);
//
//	//printf("%p\n", pa);
//	//printf("%p\n", pa+1);
//
//	//a  - int*
//	//&a - int (*)[4]
//
//	printf("%d\n", sizeof(a));//16,a��Ϊ��������������sizeof�ڲ����������������ܴ�С����λ���ֽ�
//	printf("%d\n", sizeof(a + 0));//a���ǵ�������sizeof�ڲ���Ҳû��&������������a����������Ԫ�صĵ�ַ
//	//a+0����������Ԫ�صĵ�ַ���ǵ�ַ��С���� 4/8 ���ֽ�
//	printf("%d\n", sizeof(*a));//a����Ԫ�صĵ�ַ��*a������Ԫ�أ�sizeof(*a)����ľ�����Ԫ�صĴ�С - 4
//	//a  - int*
//	//*a - int
//	printf("%d\n", sizeof(a + 1));//a����Ԫ�صĵ�ַ,a+1�ǵڶ���Ԫ�صĵ�ַ��sizeof(a+1)�������ָ��Ĵ�С - 4/8
//	//a - int*
//	//a+1, ����һ��int
//	printf("%d\n", sizeof(a[1]));//a[1]��������ĵڶ���Ԫ�أ�sizeof(a[1])�Ĵ�С - 4���ֽ�
//	printf("%d\n", sizeof(&a));//&aȡ��������ĵ�ַ������ĵ�ַ��Ҳ�ǵ�ַѽ��sizeof(&a)���� 4/8 ���ֽ�
//
//	printf("%d\n", sizeof(*&a));//&a������ĵ�ַ��������ָ�����ͣ�*&a�Ƕ�����ָ������ã�����һ������Ĵ�С
//	//16�ֽ�
//	//sizeof(*&a) ==> sizeof(a)  =16
//	
//	printf("%d\n", sizeof(&a + 1));//&a����ĵ�ַ��&a+1�����������飬&a+1���ǵ�ַ���� 4/8 ���ֽ�
//	printf("%d\n", sizeof(&a[0]));//a[0]������ĵ�һ��Ԫ�أ�&a[0]�ǵ�һ��Ԫ�صĵ�ַ���� 4/8 ���ֽ�
//	printf("%d\n", sizeof(&a[0] + 1));//&a[0]�ǵ�һ��Ԫ�صĵ�ַ��&a[0]+1���ǵڶ���Ԫ�صĵ�ַ,�� 4/8 ���ֽ�
//
//	//&a[0] - int*
//	//&a[0]+1 -> &a[1]
//
//	return 0;
//}
//

//& - ȡ��ַ������
//* - �����ò�����

//int main()
//{
//	int a[10];
//
//	//sizeof(&*a);
//	//sizeof(a);
//
//	return 0;
//}

//
//sizeof �Ǽ������������ʹ����Ķ�����ռ�ڴ�ռ�Ĵ�С����λ���ֽ�
//sizeof �ǲ����������Ǻ���
//
//strlen ���ַ������ȵģ���������ַ�����\0֮ǰ���ֵ��ַ��ĸ���
//ͳ�Ƶ�\0Ϊֹ,���û�п���\0�������������
//strlen �ǿ⺯��
//

#include <string.h>
//
//int main()
//{
//	char arr[] = { 'a','b','c','d','e','f' };
//
//	printf("%d\n", strlen(arr));//���ֵ��arr��������������û�з���sizeof�ڲ���Ҳû&��arr������Ԫ�صĵ�ַ
//	//strlen�õ�arr�󣬴�arr������Ԫ�صĵط���ʼ�����ַ����ĳ��ȣ�ֱ��ֱ��\0������arr������û��\0��arr�ڴ�ĺ���Ƿ���\0����ʲôλ��
//	//�ǲ�ȷ���ģ�����\0֮ǰ�����˶��ٸ��ַ�������ġ�
//	//
//	printf("%d\n", strlen(arr + 0));//arr��������Ԫ�صĵ�ַ��arr+0������Ԫ�صĵ�ַ
//	//���ֵ
//
//	//printf("%d\n", strlen(*arr));//arr��������Ԫ�صĵ�ַ,*arr ����Ԫ�� - ��a�� - 97
//	//strlen�Ͱѡ�a����ASCII��ֵ 97 �����˵�ַ
//	//err ��Ƿ������ڴ�
//	 
//	//printf("%d\n", strlen(arr[1]));//arr[1] - 'b' - 98 - err
//
//	printf("%d\n", strlen(&arr));//���ֵ,&arr������ĵ�ַ������ĵ�ַҲ��ָ��������ʼλ�ã��͵�һ������һ��
//	printf("%d\n", strlen(&arr + 1));//���ֵ
//	printf("%d\n", strlen(&arr[0] + 1));//���ֵ
//
//
//	//printf("%d\n", sizeof(arr));//arr���������������ǵ�������sizeof�ڲ���������������ܴ�С����λ���ֽ� - 6
//	//printf("%d\n", sizeof(arr + 0));//arr�������������ǵ�������sizeof�ڲ���arr��ʾ��Ԫ�صĵ�ַ��arr+0������Ԫ�صĵ�ַ
//	////�ǵ�ַ��С����4/8
//	//
//	//printf("%d\n", sizeof(*arr));//arr����Ԫ�صĵ�ַ��*arr������Ԫ�أ�sizeof���������Ԫ�صĴ�С����1�ֽ�
//	//printf("%d\n", sizeof(arr[1]));//arr[1]������ĵڶ���Ԫ�أ�sizeof(arr[1])������ǵڶ���Ԫ�صĴ�С��1���ֽ�
//	//printf("%d\n", sizeof(&arr));//&arr- ȡ����������ĵ�ַ��sizeof(&arr))�����������ĵ�ַ�Ĵ�С���ǵ�ַ����4/8�ֽ�
//	//printf("%d\n", sizeof(&arr + 1));//&arr������ĵ�ַ��&arr+1�����������飬ָ��'f'�ĺ�ߣ�&arr+1�ı��ʻ��ǵ�ַ���ǵ�ַ����4/8�ֽ�
//	//printf("%d\n", sizeof(&arr[0] + 1));//&arr[0]�ǡ�a���ĵ�ַ��&arr[0]+1��'b'�ĵ�ַ,�ǵ�ַ����4/8�ֽ�
//	//&arr[0] - char*
//	//
//
//	return 0;
//}
//
#include <string.h>
//
//int main()
//{
//	char arr[] = "abcdef";
//
//	//char ch = 'w';
//	//int* pc = &ch;//char*
//
//	printf("%d\n", strlen(arr));
//	printf("%d\n", strlen(arr + 0));
//	printf("%d\n", strlen(*arr));
//	printf("%d\n", strlen(arr[1]));
//	printf("%d\n", strlen(&arr));
//	printf("%d\n", strlen(&arr + 1));
//	printf("%d\n", strlen(&arr[0] + 1));
//
//	//printf("%d\n", sizeof(arr));
//	//printf("%d\n", sizeof(arr + 0));
//	//printf("%d\n", sizeof(*arr));
//	//printf("%d\n", sizeof(arr[1]));
//	//printf("%d\n", sizeof(&arr));
//	//printf("%d\n", sizeof(&arr + 1));
//	//printf("%d\n", sizeof(&arr[0] + 1));
//
//	return 0;
//}

int main()
{
	const char* p = "abcdef";

	printf("%d\n", strlen(p));//
	printf("%d\n", strlen(p + 1));
	printf("%d\n", strlen(*p));
	printf("%d\n", strlen(p[0]));
	printf("%d\n", strlen(&p));
	printf("%d\n", strlen(&p + 1));
	printf("%d\n", strlen(&p[0] + 1));

	//printf("%zu\n", sizeof(p));
	//printf("%zu\n", sizeof(p + 1));
	//printf("%zu\n", sizeof(*p));
	//printf("%zu\n", sizeof(p[0]));
	//printf("%zu\n", sizeof(&p));
	//printf("%zu\n", sizeof(&p + 1));
	//printf("%zu\n", sizeof(&p[0] + 1));

	return 0;
}
//
