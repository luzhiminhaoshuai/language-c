#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>

//
//int main()
//{
//	printf("haha\n");
//	return 0;
//}

//���泣��
//
//#define MAX 100
//int main()
//{
//	//1.���泣��
//	//100;
//	//3.14;
//	//'a';
//	//"abcdef";
//
//	//2. const���εĳ�����
//	//const int num = 10;
//	//num = 20;
//	//printf("%d\n", num);//20
//
//	//int arr[10] = {0};//����
//	//int n = 10;
//	//int arr[n] = { 0 };
//	
//	//3. #define ����ı�ʶ������
//	//printf("%d\n", MAX);
//	//MAX = 200;//err
//
//	return 0;
//}

//4. ö�ٳ���
//ö�� -> һһ�о�
//�Ա��С�Ů������
//Ѫ�ͣ�
//��ԭɫ��R��G��B
//ö�ٵĹؼ���

//enum Sex
//{
//	//������enum Sex���ͱ����Ŀ���ȡֵ������������ȡֵ����ö�ٳ���
//	MALE,
//	FEMALE,
//	SECRET
//};
//
//int main()
//{
//	//enum Sex s = MALE;//�Ա�
//	printf("%d\n", MALE);
//	printf("%d\n", FEMALE);
//	printf("%d\n", SECRET);
//	return 0;
//}

//int main()
//{
//	//printf("hello bit\n");
//	char arr1[] = "abc";
//	char arr2[] = { 'a', 'b', 'c','\0'};
//	//string length
//	//strlen�ǿ⺯������ר�����ַ������ĺ���
//	//
//	printf("%d\n", strlen(arr1)); 
//	printf("%d\n", strlen(arr2));
//
//	//printf("%s\n", arr1);
//	//printf("%s\n", arr2);
//
//	return 0;
//}
//
//int main()
//{
//	printf("abc\\0def");
//	return 0;
//}

//ת���ַ�
//ת����ԭ������˼

//int main()
//{
//	//printf("c:\test\test.c");
//	printf("abcndef");
//	printf("abc\ndef");
//
//	return 0;
//}


//����ĸ��

//�����������������ַ�
//˫�������ַ���
//
//int main()
//{
//	//printf("(are you ok\?\?)");
//	//(are you ok]
//	//??) --> ]
//	//??( --> [
//
//	//printf("%c\n", '\'');
//	//printf("%s\n", "abc");
//	//printf("%s\n", "a");
//	//printf("%s\n", "\"");
//
//	//printf("c:\\test\\test.c");
//	//printf("\a\a\a\a");
//
//
//	return 0;
//}
//%d - ��ӡ����
//%s - ��ӡ�ַ���
//%c - ��ӡ�ַ�


//int main()
//{
//	//printf("%c\n", '\130');
//	//printf("%c\n", '\x40');
//	//0~7
//	printf("%d\n", strlen("c:\test\628\test.c"));
//	//
//
//	return 0;
//}
//

//
//int main()
//{
//	//��������a������ֵ10
//	//C++ ��ע�ͷ��
//
//	/*
//	C���Ե�ע�ͷ��
//	int a = 10;
//	*/
//
//	return 0;
//}
//

//����-����
//����OJ
//online judge
//

//ʵ�ּӷ�����
//int Add(int x, int y)
//{
//	return x + y;
//}
//
//int main()
//{
//	//
//	return 0;
//}
//

//int main()
//{
//	int input = 0;
//	printf("�������\n");
//	printf("Ҫ�ú�ѧϰ��(1/0)");
//	scanf("%d", &input);
//
//	if (input == 1)
//	{
//		printf("��offer\n");
//	}
//	else if(input == 0)
//	{
//		printf("������\n");
//	}
//
//	return 0;
//}

//
//if else
//switch
//

//
//int main()
//{
//	int line = 0;
//	printf("�������\n");
//	
//	while (line<20000)
//	{
//		printf("д����:%d\n", line);
//		line++;
//	}
//
//	if (line == 20000)
//		printf("��offer\n");
//
//	return 0;
//}
//
//
//int Add(int x, int y)
//{
//	int z = x + y;
//	return z;
//}
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int sum = 0;
//	scanf("%d %d", &a, &b);
//	//дһ��������2�������ĺ�
//	//sum = a + b;
//	 
//	//��������
//	sum = Add(a, b);
//
//	int d = Add(10, 100);
//
//	printf("%d\n", sum);
//	printf("%d\n", d);
//	return 0;
//}
//


//����
// һ����ͬ����Ԫ�صļ���
//һ����

//
//int main()
//{
//	int n = 0;
//
//	int a = 1;
//	int b = 2;
//	int c = 3;
//	//1~10
//	//����
//	//int arr[10];
//	//char ch[5];
//	//int count[26];
//	//��ʼ��
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int arr1[10] = { 1,2,3 };//����ȫ��ʼ����ֻ��ʼ��ǰ3����ʣ��ĳ�ʼ��Ϊ0
//	int arr2[] = { 1,2,3 };
//	//int arr3[];//err
//	int arr4[10];
//
//	int age;
//
//	return 0;
//}
//gcc c99
//int main()
//{
//	int n = 10;
//	int arr[n];//C99 �䳤���飬���������ڴ�����ʱ�������С�ñ���ָ���������������鲻�ܳ�ʼ��
//
//	return 0;
//}
//
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	//printf("%d\n", arr[8]);
//	//0~9
//	//����
//	int j = 0;
//	while (j<10)
//	{
//		scanf("%d", &arr[j]);
//		j++;
//	}
//
//	int i = 0;
//	//���
//	while (i < 10)
//	{
//		printf("%d ", arr[i]);
//		i++;
//	}
//
//	return 0;
//}


//int Add(int x, int y)
//{
//	int z = x + y;
//	return z;
//}
//
//int main()
//{
//	int a = 10;
//
//	return 0;
//}


//#include <stdio.h>
//int num = 10;
//int main()
//{
//    int num = 1;
//    printf("num = %d\n", num);
//    return 0;
//}



