#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include<stdlib.h>
#include<string.h>
//五个最好成绩
//int cmp(void* p1, void* p2)
//{
//    return *(int*)p2 - *(int*)p1;
//}
//
//int main()
//{
//    int n = 0;
//    scanf("%d", &n);
//    int j = n;
//    int arr[50] = { 0 };
//    int i = 0;
//    while (n--)
//    {
//        scanf("%d", &arr[i]);
//        i++;
//    }
//    qsort(arr, j, sizeof(int), cmp);
//    for (i = 0; i < 5; i++)
//    {
//        printf("%d ", arr[i]);
//    }
//    return 0;
//}
//数字三角形
//int main()
//{
//    int n = 0;
//    while (scanf("%d", &n) == 1)
//    {
//        int j = n;
//        for (int a = 0; a < n; a++)
//        {
//            for (int i = 1; i <= n - j + 1; i++)
//            {
//                printf("%d ", i);
//
//            }
//            j--;
//            printf("\n");
//        }
//
//    }
//  
//
//    return 0;
//}
//打印图案
int main()
{
    int n = 0;
    while (scanf("%d", &n) == 1)
    {
        char arr[20][20] = { ' ' };
        memset(arr, ' ', sizeof(arr));
        int t = n - 1;
        for (int i = 0; i < n; i++)
        {
            arr[i][t] = '*';
            t--;
        }
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                printf("%c", arr[i][j]);
            }
            printf("\n");
        }
    }
   
    return 0;
}