#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>


//����һ��
//extern int Add(int x, int y);
//int main()
//{
//	int a = 10;
//	int b = 20;
//	
//	int ret = Add(a, b);
//	
//	printf("%d\n", ret);
//
//	return 0;
//}



//31 28 31 30 31 30 31 31 30 31 30 31
//   29

#include <stdio.h>
//
//int main()
//{
//    int y = 0;
//    int m = 0;
//    while (scanf("%d%d", &y, &m) == 2)
//    {
//        switch (m)
//        {
//        case 1:
//        case 3:
//        case 5:
//        case 7:
//        case 8:
//        case 10:
//        case 12:
//            printf("%d\n", 31);
//            break;
//        case 4:
//        case 6:
//        case 9:
//        case 11:
//            printf("%d\n", 30);
//            break;
//        case 2:
//        {
//            if (((y % 4 == 0) && (y % 100 != 0)) || (y % 400 == 0))
//                printf("%d\n", 29);
//            else
//                printf("%d\n", 28);
//        }
//        }
//    }
//    return 0;
//}
//
////31 28 31 30 31 30 31 31 30 31 30 31
////   29
//
//#include <stdio.h>
//
//int is_leap_year(int y)
//{
//    return (((y % 4 == 0) && (y % 100 != 0)) || (y % 400 == 0));
//}
//
//int main()
//{
//    int y = 0;
//    int m = 0;
//    int days[13] = { 0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
//
//    while (scanf("%d%d", &y, &m) == 2)
//    {
//        int day = days[m];
//        if (is_leap_year(y) && m == 2)
//        {
//            day++;
//        }
//        printf("%d\n", day);
//    }
//
//    return 0;
//}
//
//
//
//int main()
//{
//    int ch = 0;
//
//
//    while ((ch = getchar()) != EOF)
//    {
//        if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
//            printf("%c is an alphabet.\n", ch);
//        else
//            printf("%c is not an alphabet.\n", ch);
//
//        getchar();//���������ж����\n
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
//    char ch = 0;
//
//    while (scanf("%c", &ch) == 1)
//    {
//        if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
//            printf("%c is an alphabet.\n", ch);
//        else
//            printf("%c is not an alphabet.\n", ch);
//
//        getchar();//���������ж����\n
//    }
//
//    return 0;
//}

#include <stdio.h>
//
//int main()
//{
//    char ch = 0;
//
//    while (scanf("%c\n", &ch) == 1)
//    {
//        if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
//            printf("%c is an alphabet.\n", ch);
//        else
//            printf("%c is not an alphabet.\n", ch);
//
//        //getchar();//���������ж����\n
//    }
//
//    return 0;
//}
//


//int main()
//{
//    char ch = 0;
//
//    while (scanf("%c", &ch) == 1)
//    {
//        if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
//            printf("%c is an alphabet.\n", ch);
//        else
//            printf("%c is not an alphabet.\n", ch);
//
//        getchar();//���������ж����\n
//    }
//
//    return 0;
//}


//�ַ������ת������
//https://cplusplus.com/reference/cctype/
//
#include <stdio.h>
//A - 65
//a - 97

/*
int main()
{
    int ch = 0;
    while((ch=getchar())!=EOF)
    {
        if(ch>='A' && ch<='Z')
        {
            printf("%c\n", ch+32);//Сд��
        }
        else if(ch>='a' && ch<='z')
        {
            printf("%c\n", ch-32);
        }
        //����\n
        getchar();
    }
    return 0;
}
*/
//
//#include <ctype.h>
//
//int main()
//{
//    int ch = 0;
//    while ((ch = getchar()) != EOF)
//    {
//        if (isupper(ch))
//        {
//            printf("%c\n", tolower(ch));//Сд��    
//        }
//        else if (islower(ch))
//        {
//            printf("%c\n", toupper(ch));
//        }
//        //����\n
//        getchar();
//    }
//    return 0;
//}
//
//

#include <stdio.h>
//
//int main()
//{
//    double price = 0.0;
//    int m = 0;
//    int d = 0;
//    int flag = 0;
//    scanf("%lf %d %d %d", &price, &m, &d, &flag);
//
//    if (m == 11 && d == 11)
//        price = price * 0.7 - flag * 50;
//    else if (m == 12 && d == 12)
//        price = price * 0.8 - flag * 50;
//
//    if (price < 0.0)
//        price = 0.0;
//
//    printf("%.2lf\n", price);
//
//    return 0;
//}



//#include <stdio.h>
//int main()
//{
//    int arr[] = { 1,2,3,4,5 };
//    short* p = (short*)arr;
//    int i = 0;
//    for (i = 0; i < 4; i++)
//    {
//        *(p + i) = 0;
//    }
//
//    for (i = 0; i < 5; i++)
//    {
//        printf("%d ", arr[i]);
//    }
//    return 0;
//}



//
//int main()
//{
//    unsigned long pulArray[] = { 6,7,8,9,10 };
//    unsigned long* pulPtr;
//    pulPtr = pulArray;
//    *(pulPtr + 3) += 3;
//    printf("%d, %d\n", *pulPtr, *(pulPtr + 3));
//
//    return 0;
//}


//#include <stdio.h>
//int main()
//{
//    int a = 0x11223344;
//    char* pc = (char*)&a;
//    *pc = 0;
//    printf("%x\n", a);
//    return 0;
//}
//


//дһ��������ӡarr��������ݣ���ʹ�������±꣬ʹ��ָ�롣
//arr��һ������һά���顣
 

//void print(int* arr, int sz)
//{
//    int i = 0;
//    for (i = 0; i < sz; i++)
//    {
//        printf("%d ", *(arr + i));
//    }
//}
//
//void print(int* arr, int sz)
//{
//    int i = 0;
//    for (i = 0; i < sz; i++)
//    {
//        printf("%d ", *arr);
//        arr++;
//    }
//}
//
//int main()
//{
//    int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//    int sz = sizeof(arr) / sizeof(arr[0]);
//
//    print(arr, sz);
//
//    return 0;
//}




//
//int main()
//{
//    char arr[200] = { 0 };
//    //scanf("%s", arr);
//    gets();
//    printf("%s\n", arr);
//    return 0;
//}
//
//
//
//#include <stdio.h>
//int main()
//{
//    char arr[10001] = { 0 };
//    //1
//    //gets(arr);
//
//    //2
//    scanf("%[^\n]", arr);
//
//    int len = strlen(arr);
//    int left = 0;
//    int right = len - 1;
//
//    while (left < right)
//    {
//        char tmp = arr[left];
//        arr[left] = arr[right];
//        arr[right] = tmp;
//        left++;
//        right--;
//    }
//    printf("%s\n", arr);
//
//    return 0;
//}

//
//int main()
//{
//    //��
//    int line = 0;
//    scanf("%d", &line);
//    int i = 0;
//    for (i = 0; i < line; i++)
//    {
//        //��ӡһ��
//        //�ո��ӡ
//        int j = 0;
//        for (j = 0; j < line-1-i; j++)
//        {
//            printf(" ");
//        }
//        //*�Ĵ�ӡ
//        for (j = 0; j < 2*i+1; j++)
//        {
//            printf("*");
//        }
//        printf("\n");
//    }
//
//    //��
//    for (i = 0; i < line-1; i++)
//    {
//        //��ӡһ��
//        //�ո��ӡ
//        int j = 0;
//        for (j = 0; j <= i; j++)
//        {
//            printf(" ");
//        }
//        //*�Ĵ�ӡ
//        for (j = 0; j < 2*(line-1-i)-1; j++)
//        {
//            printf("*");
//        }
//        printf("\n");
//    }
//    return 0;
//}


//���0��100000֮������С�ˮ�ɻ������������
//��ˮ�ɻ�������ָһ��nλ�������λ���ֵ�n�η�֮��ȷ�õ��ڸ��������� : 153��1 ^ 3��5 ^ 3��3 ^ 3��
//��153��һ����ˮ�ɻ�����

#include <math.h> 
#include <limits.h>

//INT_MAX
//
//int main()
//{
//    int i = 0;
//    //1234
//    for (i = 0; i <= 100000; i++)
//    {
//        //�ж�i�Ƿ�Ϊ������
//        //1. ����i��λ��n
//        int n = 1;
//        int tmp = i;
//        while (tmp /= 10)
//        {
//            n++;
//        }
//        //2. �õ���i��ÿһλ����ÿһλ��n�η���
//        //pow�ǿ⺯������η���
//        tmp = i;
//        int sum = 0;
//        while (tmp)
//        {
//            sum += (int)pow(tmp % 10, n);
//            tmp /= 10;
//        }
//
//        if (sum == i)
//            printf("%d ", i);
//    }
//    return 0;
//}

            
//��Sn=a+aa+aaa+aaaa+aaaaa��ǰ5��֮�ͣ�����a��һ�����֣�

int main()
{
    int a = 0;
    int n = 0;
    scanf("%d %d", &a, &n);
    int i = 0;
    int sum = 0;
    int k = 0;

    for (i = 0; i < n; i++)
    {
        k = k * 10 + a;
        sum += k;
    }
    printf("%d\n", sum);

    return 0;
}



