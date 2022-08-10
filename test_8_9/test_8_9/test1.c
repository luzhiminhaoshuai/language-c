#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//
//int main()
//{
//    int n = 0;
//    int m = 0;
//    scanf("%d %d", &n, &m);
//    int arr1[1000] = { 0 };
//    int arr2[1000] = { 0 };
//    int i = 0;
//    for (i = 0; i < n; i++)
//    {
//        scanf("%d ", &arr1[i]);
//    }
//    int j = 0;
//    for (j = 0; j < m; j++)
//    {
//        scanf("%d", &arr2[j]);
//
//    }
//    i = 0;
//    j = 0;
//    while (i < n && j < m)
//    {
//        if (arr1[i] < arr2[j])
//        {
//            printf("%d", arr1[i]);
//            i++;
//        }
//        else
//        {
//            printf("%d", arr2[j]);
//            j++;
//        }
//
//
//    }
//    if (i == n)
//    {
//        for (; j < m; j++)
//            printf("%d", arr2[j]);
//    }
//    else
//    {
//        for (; i < n; i++)
//            printf("%d", arr1[i]);
//    }
//    return 0;
//}

//x形状打印
//int main()
//{
//    int n = 0;
//    int i = 0;
//    int j = 0;
//    while (scanf("%d", &n) != EOF)
//    {
//        for (i = 0; i < n; i++)
//        {
//            for (j = 0; j < n; j++)
//            {
//                if (i == j)
//                {
//                    printf("*");
//                }
//                else if (j == n - i - 1)
//                {
//                    printf("*");
//                }
//                else
//                {
//                    printf(" ");
//                }
//            }printf("\n");
//
//        }
//
//    }
//
//
//    return 0;
//}
// 
// 
// 
//打印箭头图案
#include <stdio.h>
int main()
{
    int n = 0;
    int i = 1;
    while (scanf("%d", &n) != EOF)
    {
        int c = n;
        for (i = 1; i <= (2 * n + 1); i++)//行
        {
            if (i <= n+1 )
            {
                for (int a = 1; a <= 2*(n-i+1); a++)//打印空格//上半部分
                {
                    printf(" ");
                }
                for (int b = 1; b <= i; b++) //打印星号//上半部分
                {
                    printf("*");
                }
            }
            else//下半部分
            {
                
                for (int a = 1;a<=2*(i-n-1) ;a++ )//打印空格
                {
                    printf(" ");
                }
                for (int b = 1; b <=c; b++)
                {
                    printf("*");
                    
                }
                c--;
            }
              
            
            printf("\n");
        }
       
    }
    return 0;
}