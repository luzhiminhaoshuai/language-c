#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
//int main()
//{
//
//	return 0;
//}
//
//#include < stdio.h >
//struct S
//{
//	int a;
//	int b;
//};
//
//int main()
//{
//	struct S a, * p = &a;
//
//	//struct S a;
//	//struct S* p = &a;
//
//	a.a = 99;
//	printf("%d\n", __________);
//	return 0;
//}
//
//A. a.a //ok
//B. *p.a //err
//C. p->a //ok
//D. (*p).a//ok

//
//struct stu
//{
//    int num;
//    char name[10];
//    int age;
//};
//
//void fun(struct stu* p)
//{
//    printf("%s\n", (*p).name);
//    return;
//}
//
//int main()
//{
//    struct stu students[3] = { 
//                              {9801,"zhang",20},
//                              {9802,"wang",19},
//                              {9803,"zhao",18}
//                             };
//    fun(students + 1);
//    return 0;
//}

//
//����ˮ��1ƿ��ˮ1Ԫ��2����ƿ���Ի�һƿ��ˮ����20Ԫ�����Զ�����ˮ�����ʵ�֣���
//C���Եı���Ӧ�ö����ڵ�ǰ��������ǰ��
//
//int main()
//{
//	int money = 0;
//	int total = 0;
//	int empty = 0;
//
//	scanf("%d", &money);
//	//total = money;
//	//empty = money;
//	//while (empty >= 2)
//	//{
//	//	total += empty / 2;
//	//	empty = empty / 2 + empty%2;
//	//}
//
//	if (money <= 0)
//		total = 0;
//	else
//		total = 2 * money - 1;
//
//	printf("%d\n", total);
//
//	return 0;
//}


#include <stdio.h>
#include <math.h>
//
//int main()
//{
//    int i = 0;
//    for (i = 10000; i <= 99999; i++)
//    {
//        //�ж�i�Ƿ�Ϊlily number
//        //12345
//        //12345%10 = 5     12345/10=1234
//        //12345%100=45     12345/100=123
//        //12345%1000=345   12345/1000=12
//        //12345%10000=2345 12345/10000=1
//        int j = 0;
//        int sum = 0;
//        for (j = 1; j <= 4; j++)
//        {
//            int k = (int)pow(10, j);
//            sum += (i % k) * (i / k);
//        }
//        if (sum == i)
//        {
//            printf("%d ", i);
//        }
//    }
//    return 0;
//}
//����һ���������飬ʵ��һ��������
//�����������������ֵ�˳��ʹ�����������е�����λ�������ǰ�벿�֣�����ż��λ������ĺ�벿�֡�
//
//void print(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//}
//
//void move_even_odd(int arr[], int sz)
//{
//	int left = 0;
//	int right = sz - 1;
//
//	while (left<right)
//	{
//		//��ǰ������һ��ż��ͣ����
//		while ((left < right) && (arr[left] % 2 == 1))
//		{
//			left++;
//		}
//		//�Ӻ���ǰ��һ������ͣ����
//		while ((left < right) && (arr[right] % 2 == 0))
//		{
//			right--;
//		}
//		if (left < right)
//		{
//			int tmp = arr[left];
//			arr[left] = arr[right];
//			arr[right] = tmp;
//			left++;
//			right--;
//		}
//	}
//}
//
//int main()
//{
//	int arr[] = {1,1,7,4,8,3,5,9,2};
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	print(arr, sz);
//	move_even_odd(arr, sz);
//	print(arr, sz);
//	return 0;
//}
//
//
//
//
//#include <stdio.h>
//
//int main()
//{
//    int n = 0;
//    int arr[50] = { 0 };
//    scanf("%d", &n);
//    int i = 0;
//    int flag1 = 0;//����
//    int flag2 = 0;//����
//    for (i = 0; i < n; i++)
//    {
//        scanf("%d", &arr[i]);
//        if (i > 0)
//        {
//            if (arr[i] > arr[i - 1])
//                flag1 = 1;
//            else if (arr[i] < arr[i - 1])
//                flag2 = 1;
//        }
//    }
//
//    if (flag1 + flag2 <= 1)
//        printf("sorted\n");
//    else
//        printf("unsorted\n");
//
//    return 0;
//}
//
//
//#include <stdio.h>
//
//int main()
//{
//    int n = 0;
//    scanf("%d", &n);
//    int max = 0;//�������ֵ��0
//    int min = 100;//������Сֵ��100
//    int i = 0;
//    int score = 0;
//    for (i = 0; i < n; i++)
//    {
//        scanf("%d", &score);
//        if (score > max)
//            max = score;
//        if (score < min)
//            min = score;
//    }
//    printf("%d\n", max - min);
//
//    return 0;
//}
//
//
//
//#include <stdio.h>
//
//int main()
//{
//    int n = 0;
//    int m = 0;
//    scanf("%d %d", &n, &m);
//    int arr1[n];//C99
//    int arr2[m];//C99
//    int i = 0;
//    int j = 0;
//    //����
//    for (i = 0; i < n; i++)
//    {
//        scanf("%d", &arr1[i]);
//    }
//    for (i = 0; i < m; i++)
//    {
//        scanf("%d", &arr2[i]);
//    }
//    //�ϲ���ӡ
//    i = 0;
//    j = 0;
//    while (i < n && j < m)
//    {
//        if (arr1[i] < arr2[j])
//        {
//            printf("%d ", arr1[i]);
//            i++;
//        }
//        else if (arr1[i] >= arr2[j])
//        {
//            printf("%d ", arr2[j]);
//            j++;
//        }
//    }
//
//    if (i == n)
//    {
//        for (; j < m; j++)
//        {
//            printf("%d ", arr2[j]);
//        }
//    }
//    else
//    {
//        for (; i < n; i++)
//        {
//            printf("%d ", arr1[i]);
//        }
//    }
//
//    return 0;
//}

//

//*___*
//_*_*_
//__*__ 
//_*_*_
//*___*

#include <stdio.h>
//
//int main()
//{
//    int n = 0;
//    while (scanf("%d", &n) == 1)
//    {
//        int i = 0;
//        int j = 0;
//        for (i = 0; i < n; i++)
//        {
//            for (j = 0; j < n; j++)
//            {
//                if (i == j)
//                    printf("*");
//                else if (i + j == n - 1)
//                    printf("*");
//                else
//                    printf("_");
//            }
//            printf("\n");
//        }
//    }
//    return 0;
//}
//
//
//
//#include <stdio.h>
//
//int main()
//{
//    int n = 0;
//    while (scanf("%d", &n) == 1)
//    {
//        //��ӡͼ��
//        //�� - n��
//        int i = 0;
//        for (i = 0; i < n; i++)
//        {
//            //��ӡһ��
//            //��ӡ�ո�
//            int j = 0;
//            for (j = 0; j < n - i; j++)
//            {
//                printf("  ");
//            }
//            //��ӡ*
//            for (j = 0; j <= i; j++)
//            {
//                printf("*");
//            }
//            printf("\n");
//        }
//        //�� - n+1��
//        for (i = 0; i < n + 1; i++)
//        {
//            //��ӡһ��
//            //��ӡ�ո�
//            int j = 0;
//            for (j = 0; j < i; j++)
//            {
//                printf("  ");
//            }
//            //��ӡ*
//            for (j = 0; j < n + 1 - i; j++)
//            {
//                printf("*");
//            }
//            printf("\n");
//        }
//    }
//    return 0;
//}
//

//int main()
//{
//	unsigned char a = 200;
//	unsigned char b = 100;
//	unsigned char c = 0;
//	//00000000000000000000000011001000
//	//11001000 - a
//	//00000000000000000000000001100100
//	//01100100 - b
//	//
//	c = a + b;
//	//00000000000000000000000011001000 - a
//	//00000000000000000000000001100100 - b
//	//00000000000000000000000100101100
//	//00101100 - c
//	//00000000000000000000000000101100
//	//
//	printf("%d %d", a + b, c);//300 44
//	return 0;
//}

//
//5λ�˶�Ա�μ���10��̨��ˮ����������������Ԥ����������
//Aѡ��˵��B�ڶ����ҵ����� b==2 a==3
//Bѡ��˵���ҵڶ���E���ģ�
//Cѡ��˵���ҵ�һ��D�ڶ���
//Dѡ��˵��C����ҵ�����
//Eѡ��˵���ҵ��ģ�A��һ��
//����������ÿλѡ�ֶ�˵����һ�룬����ȷ������������
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	int d = 0;
//	int e = 0;
//	for (a = 1; a <= 5; a++)
//	{
//		for (b = 1; b <= 5; b++)
//		{
//			for (c = 1; c <= 5; c++)
//			{
//				for (d = 1; d <= 5; d++)
//				{
//					for (e = 1; e <= 5; e++)
//					{
//						if (((b==2) + (a==3) == 1) &&
//							((b==2) + (e==4) == 1) &&
//							((c==1) + (d==2) == 1) &&
//							((c==5) + (d==3) == 1) &&
//							((e==4) + (a==1) == 1))
//						{
//							if((a * b * c * d * e == 120) &&(a+b+c+d+e==15))
//								printf("a=%d b=%d c=%d d=%d e=%d\n", a, b, c, d, e);
//						}
//					}
//				}
//			}
//		}
//	}
//	return 0;
//}
//



//
//int main()
//{
//	char killer = 0;
//	for (killer = 'A'; killer <= 'D'; killer++)
//	{
//		if ((killer!='A') + (killer=='C') + (killer=='D') + (killer!='D') == 3)
//		{
//			printf("%c\n", killer);
//		}
//	}
//	return 0;
//}
//




