#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//define ���峣��
#define M 1000
#define SIZE 10

//int main()
//{
//	int arr[SIZE];
//	printf("%d\n", SIZE);
//
//	return 0;
//}

//define�����
//�����в������ͺ�������

//int Add(int x, int y)
//{
//	return x + y;
//}
////��
//#define ADD(x, y)  ((x)+(y))
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int sum1 = Add(a, b);
//	printf("sum1 = %d\n", sum1);
//
//	int sum2 = ADD(a, b);
//	//int sum2 = ((a)+(b));
//	printf("sum2 = %d\n", sum2);
//
//	return 0;
//}


//%p - ��ӡ��ַ,��ʾ����16���Ƶ���ֵ
//%d
//%c
//%s
//
//int main()
//{
//	//0~9 a~f
//	//
//	int a = 10;
//	//00000000 00000000 00000000 00001010
//	//0x 00 00 00 0a
//	//
//	//0a 00 00 00
//	//printf("%p\n",  &a);//ȡ��a��ռ4���ֽ��е�һ���ֽڵĵ�ַ
//	int* pa = &a;//& ȡ��ַ������
//
//	/*char ch = 'w';
//	char* pc = &ch;*/
//
//	//pa�ͽУ�ָ�����
//	//
//	return 0;
//}

//
//1.ָ�룬�����ǵ�ַ
//2.��ͷ���У�˵��ָ����ָ��ָ�����
//


//int main()
//{
//	int a = 10;
//	int* pa = &a;//& ȡ��ַ������
//	*pa = 20;//* �����ò���
//
//	printf("%d\n", a);
//	return 0;
//}

//Ҫ��֪��ָ������ж��
//ָ������洢����ʲô�� - ��ַ
//��ַ�Ĵ洢��Ҫ���ռ䣬ָ������Ĵ�С���Ƕ��
//32λ���� - һ����ַ��32��������λ���洢��Ҫ32��bitλ�Ŀռ䣬��32λ�����ϣ�ָ������Ĵ�С��4���ֽ�
//64λ���� - һ����ַ��64��������λ���洢��Ҫ64��bitλ�Ŀռ䣬��64λ�����ϣ�ָ������Ĵ�С��8���ֽ�
//


//int main()
//{
//	printf("%zu\n", sizeof(char*));
//	printf("%zu\n", sizeof(short*));
//	printf("%zu\n", sizeof(int*));
//	printf("%zu\n", sizeof(long*));
//	printf("%zu\n", sizeof(float*));
//	printf("%zu\n", sizeof(double*));
//
//	return 0;
//}


//void test(double* pd)
//{
//	*pd = 5.6;
//}
//
//int main()
//{
//	double d = 3.14;
//
//	test(&d);
//	//double* pd = &d;
//	//*pd = 5.6;
//	//d = 5.6;
//	printf("%lf\n", d);
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	int* pa = &a;
//	printf("%d\n", *pa);
//
//	return 0;
//}
//
//struct Stu
//{
//	char name[20];
//	int age;
//	char sex[5];
//	char id[12];
//};
//
//void print(struct Stu* ps)
//{
//	printf("%s %d %s %s\n", (*ps).name, (*ps).age, (*ps).sex, (*ps).id);
//	printf("%s %d %s %s\n", ps->name, ps->age, ps->sex, ps->id);
//	//�ṹ��ָ��->�ṹ���Ա
//}
//int main()
//{
//	//struct Stu s = {"zhangsan", 20, "nan", "2022010578"};
//	struct Stu s = { 0 };
//	//����
//	scanf("%s %s %s %d", s.name, s.sex, s.id, &(s.age));
//
//	printf("%s %d %s %s\n", s.name, s.age, s.sex, s.id);
//	//�ṹ�����.�ṹ���Ա
//
//	print(&s);
//
//	return 0;
//}
//

//EOF
//NULL
//
//int main()
//{
//	int n = 10;
//	int arr[n];
//
//	return 0;
//}
//

//int Max(int x, int y)
//{
//	if (x > y)
//		return x;
//	else
//		return y;
//}
//
//int Max(int x, int y)
//{
//	return (x > y ? x : y);
//}
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	//��ϴ�ֵ
//	int m = Max(a, b);
//
//	printf("%d\n", m);
//
//	return 0;
//}
//
//
//#include <stdio.h>
//
//int main()
//{
//    int a = 40;
//    int c = 212;
//    printf("%d\n", (-8 + 22) * a - 10 + c / 2);
//    return 0;
//}

//int main()
//{
//	int a = 0;
//	int b = 0;
//	int ret = scanf("%d %d", &a, &b);
//
//	printf("ret = %d\n", ret);
//	printf("a = %d\n", a);
//	printf("b = %d\n", b);
//
//	return 0;
//}
//

//CodeBlock
//
//#include <stdio.h>
//
//int main()
//{
//    int iq = 0;
//    //����
//    //EOF  -> -1
//
//    scanf("%d", &iq);
//    if (iq >= 140)
//    {
//        printf("Genius\n");
//    }
//
//    /*
//    while(scanf("%d", &iq) == 1)
//    {
//        if(iq>=140)
//        {
//            printf("Genius\n");
//        }
//    }
//    */
//    /*
//
//    while(scanf("%d", &iq) != EOF)
//    {
//        if(iq>=140)
//        {
//            printf("Genius\n");
//        }
//    }
//    */
//
//
//    return 0;
//}
//
//
//
//#include <stdio.h>
//int main()
//{
//    int m = 0;
//    scanf("%d", &m);
//    if (m % 5 == 0)
//        printf("YES\n");
//    else
//        printf("NO\n");
//
//    return 0;
//}
//
//#include <stdio.h>
//int main()
//{
//    printf("Name    Age    Gender\n");
//    printf("---------------------\n");
//    printf("Jack    18     man\n");
//
//    return 0;
//}
//
//int main()
//{
//	int char;
//
//	return 0;
//}
//

#include <stdio.h>
int sum(int a)
{
    int c = 0;
    static int b = 3;
    c += 1;
    b += 2;
    return (a + b + c);
}
int main()
{
    int i;
    int a = 2;
    for (i = 0; i < 5; i++)
    {
        printf("%d,", sum(a));
    }
}

#include <stdio.h>
int main()
{
    int a = 0;
    int b = 0;
    scanf("%d %d", &a, &b);
    printf("%d %d\n", a / b, a % b);

    return 0;
}

#include <stdio.h>

int main()
{
    int n = 0;
    scanf("%d", &n);//1234
    while (n)
    {
        printf("%d", n % 10);
        n = n / 10;
    }
    return 0;
}


#include <stdio.h>


int main()
{
    int n = 0;
    int i = 0;
    int sum = 0;
    while (i < 5)
    {
        scanf("%d", &n);
        sum += n;
        i++;
    }
    printf("%.1lf\n", sum / 5.0);

    return 0;
}



/*
int main()
{
    int a = 0;
    int b = 0;
    int c = 0;
    int d = 0;
    int e = 0;
    scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);
    printf("%.1lf", (a+b+c+d+e)/5.0);
    return 0;
}
*/

#include <stdio.h>

int main()
{
    //1234 2345

    int a = 0;
    int b = 0;
    while (scanf("%d %d", &a, &b) == 2)
    {
        if (a > b)
        {
            printf("%d>%d\n", a, b);
        }
        else if (a < b)
        {
            printf("%d<%d\n", a, b);
        }
        else
        {
            printf("%d=%d\n", a, b);
        }
    }

    return 0;
}


#include <stdio.h>

int main()
{
    int s = 0;
    scanf("%d", &s);
    int h = s / 3600;//Сʱ
    int m = (s % 3600) / 60;//����
    int sec = s % 60;

    printf("%d %d %d\n", h, m, sec);

    return 0;
}


















