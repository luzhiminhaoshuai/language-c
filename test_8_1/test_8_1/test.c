#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//
//#include <stdio.h>
//int main()
//{
//	int a, b, c;
//	a = 5;
//	c = ++a;
//	b = ++c, c++, ++a, a++;
//	b += a++ + c;
//	printf("a = %d b = %d c = %d\n", a, b, c);
//	return 0;
//}

//дһ���������ز����������� 1 �ĸ�����

//int count_bit(int m)
//{
//	int i = 0;
//	int count = 0;
//	for (i = 0; i < 32; i++)
//	{
//		if (1 == ((m >> i) & 1))
//		{
//			count++;
//		}
//	}
//	return count;
//}

//int count_bit(unsigned int m)
//{
//	int count = 0;
//	while (m)
//	{
//		if (m % 2 == 1)
//			count++;
//		m /= 2;
//	}
//	return count;
//}

//
//int count_bit(int m)
//{
//	int i = 0;
//	int count = 0;
//	for (i = 0; i < 32; i++)
//	{
//		if ((m & 1) == 1)
//			count++;
//		m >>= 1;
//	}
//	return count;
//}
//
//int count_bit(int m)
//{
//	int count = 0;
//	while (m)
//	{
//		m = m & (m - 1);
//		count++;
//	}
//	return count;
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	//-1
//	//111111111111111111111111111111111
//	int num = count_bit(n);
//	printf("%d\n", num);
//	return 0;
//}

//00001111
//-1
//10000000000000000000000000000001
//11111111111111111111111111111110
//11111111111111111111111111111111 
//

//n=11
//n = n&(n-1)
//1011 - n
//1010 - n-1
//1010 - n
//1001 - n-1
//1000 - n
//0111 - n-1
//0000 - n
//


//
//n=n&(n-1)
//
//16
//00010000
//00001111
//00000000
//

//
//00000001
//00000000
//00000000
//


//����int��32λ������m��n�Ķ����Ʊ���У��ж��ٸ�λ(bit)��ͬ�� 

//int count_diff_bit(int m, int n)
//{
//	int i = 0;
//	int count = 0;
//	for (i = 0; i < 32; i++)
//	{
//		if (((m >> i) & 1) != ((n >> i) & 1))
//		{
//			count++;
//		}
//	}
//	return count;
//}

//
//0111
//1010
//1101
//
//
//int count_diff_bit(int m, int n)
//{
//	//���������ص��ǣ���ͬΪ0������Ϊ1
//	//
//	int ret = m ^ n;
//	int count = 0;
//	while (ret)
//	{
//		ret = ret & (ret - 1);
//		count++;
//	}
//	return count;
//}
//
//int main()
//{
//	int m = 0;
//	int n = 0;
//	scanf("%d %d", &m, &n);
//	int i = 0;
//	int count = 0;
//
//	count = count_diff_bit(m, n);
//
//	printf("%d\n", count);
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//    int i = 1;
//    int ret = (++i) + (++i) + (++i);
//    printf("ret = %d\n", ret);
//    return 0;
//}
//ȫ�ֱ�������̬��������ʼ��Ĭ����0
//ȫ�ֱ�������̬�����Ǵ���ھ�̬����
//�ֲ���������ʼ����Ĭ�������ֵ
//
//int i;
//int main()
//{
//	int j;
//	printf("%d\n", i);
//	printf("%d\n", j);
//
//	return 0;
//}

//#include <stdio.h>
//int i;
//int main()
//{
//    i--;//-1
//    //-1 > 4
//    //sizeof �������ռ���ڴ�ռ�Ĵ�С���ǲ����и�������Ȼ�����и�����sizeof���ص�������size_t���͵�
//    //size_t ���޷������� unsigned int
//    //
//    if (i > sizeof(i))
//    {
//        printf(">\n");
//    }
//    else
//    {
//        printf("<\n");
//    }
//    return 0;
//}
//

//��ȡһ���������������������е�ż��λ������λ���ֱ��ӡ������������
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int i = 0;
//	//����λ
//	for (i = 30; i >= 0; i -= 2)
//	{
//		printf("%d ", (n >> i) & 1);
//	}
//	printf("\n");
//	//ż��λ
//	for (i = 31; i >= 1; i -= 2)
//	{
//		printf("%d ", (n >> i) & 1);
//	}
//	printf("\n");
//
//	return 0;
//}

//
//#include <stdio.h>
//
//int main()
//{
//    int n = 0;
//    scanf("%d", &n);
//    int arr[n][n];
//    int i = 0;
//    int j = 0;
//
//    //����
//    for (i = 0; i < n; i++)
//    {
//        for (j = 0; j < n; j++)
//        {
//            scanf("%d", &arr[i][j]);
//        }
//    }
//    //�ж�
//    int flag = 1;//�����������Ǿ���
//    for (i = 0; i < n; i++)
//    {
//        for (j = 0; j < i; j++)
//        {
//            if (arr[i][j] != 0)
//            {
//                flag = 0;
//                goto end;
//            }
//        }
//    }
//end:
//    if (flag == 0)
//        printf("NO\n");
//    else
//        printf("YES\n");
//
//    return 0;
//}
//
//#include <stdio.h>
//
//int main()
//{
//    int n = 0;
//    scanf("%d", &n);
//    int arr[20] = { 0 };
//    int i = 0;
//    while (n)
//    {
//        arr[i] = n % 6;
//        n /= 6;
//        i++;
//    }
//
//    for (--i; i >= 0; i--)
//    {
//        printf("%d", arr[i]);
//    }
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
//    //����n
//    scanf("%d", &n);
//    int i = 0;
//    int arr[n];
//    //����ڶ���
//    for (i = 0; i < n; i++)
//    {
//        scanf("%d", &arr[i]);
//    }
//    //[1 2 3 4 5 9]
//    //
//    //����ɾ��������
//    int del = 0;
//    scanf("%d", &del);
//    i = 0;
//    int j = 0;
//    for (i = 0; i < n; i++)
//    {
//        if (arr[i] != del)
//        {
//            arr[j] = arr[i];
//            j++;
//        }
//    }
//    for (i = 0; i < j; i++)
//    {
//        printf("%d ", arr[i]);
//    }
//
//    //�������
//    /*
//    for(i=0; i<n; i++)
//    {
//        if(arr[i] != del)
//            printf("%d ", arr[i]);
//    }
//    */
//    return 0;
//}
//
//
//#include <stdio.h>
//
//int main()
//{
//    int n = 0;
//    int m = 0;
//    scanf("%d %d", &n, &m);
//    int max = (n > m ? m : n);//�������Լ������n��m�Ľ�Сֵ
//    while (1)
//    {
//        if (n % max == 0 && m % max == 0)
//        {
//            break;
//        }
//        max--;
//    }
//    int min = (n > m ? n : m);//������С����������n��m�Ľϴ�ֵ
//    while (1)
//    {
//        if (min % n == 0 && min % m == 0)
//            break;
//        min++;
//    }
//    printf("%d\n", max + min);
//
//    return 0;
//}
//
//#include <stdio.h>
//
///*
//int main()
//{
//    int n = 0;
//    int m = 0;
//    scanf("%d %d", &n ,&m);
//    int max = (n>m?m:n);//�������Լ������n��m�Ľ�Сֵ
//    while(1)
//    {
//        if(n%max==0 && m%max==0)
//        {
//            break;
//        }
//        max--;
//    }
//    int min = (n>m?n:m);//������С����������n��m�Ľϴ�ֵ
//    while(1)
//    {
//        if(min%n==0 && min%m==0)
//            break;
//        min++;
//    }
//    printf("%d\n", max+min);
//
//    return 0;
//}
//*/
//
//int main()
//{
//    long long n = 0;
//    long long m = 0;
//    scanf("%lld %lld", &n, &m);
//    long long m2 = m;
//    long long n2 = n;
//
//    long long r = 0;
//    //���Լ��
//    while (r = n2 % m2)
//    {
//        n2 = m2;
//        m2 = r;
//    }
//    //��С��������m*n/���Լ��
//    printf("%lld", m * n / m2 + m2);
//
//    return 0;
//}
//
//
//

//#include <stdio.h>
//
//int walk(int n)
//{
//    if (n <= 2)
//        return n;
//    else
//        return walk(n - 1) + walk(n - 2);
//}
//
////����ָoffer��
//
//int main()
//{
//    int n = 0;
//    scanf("%d", &n);
//    int ret = walk(n);
//    printf("%d\n", ret);
//
//    return 0;
//}
//














