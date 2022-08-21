#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
//验证尼科彻斯定理，即：任何一个整数m的立方都可以写成m个连续奇数之和。
//
//例如：
//
//1 ^ 3 = 1
//
//2 ^ 3 = 3 + 5
//
//3 ^ 3 = 7 + 9 + 11
//
//4 ^ 3 = 13 + 15 + 17 + 19
//
//输入一个正整数m（m≤100），将m的立方写成m个连续奇数之和的形式输出。
//数据范围：1\le m\le 100\1≤m≤100
//进阶：时间复杂度：O(m)\O(m) ，空间复杂度：O(1)\O(1)

//#include <stdlib.h>
//#include <stdio.h>
//#include<math.h>
//    int main()
//    {
//        int num;
//        while (scanf("%d", &num) != EOF)
//        {
//            int tri = pow(num, 3);
//            for (int i = 1; i < 65000; i += 2)
//            {
//                int sum = (i + (i + (num - 1) * 2)) * num / 2;
//                if (sum == tri)
//                {
//                    for (int j = 0; j < num - 1; j++)
//                    {
//                        printf("%d+", i + 2 * j);
//                    }
//                    printf("%d\n", i + 2 * (num - 1));
//                }
//            }
//        }
//        return 0;
//    }

#include<stdio.h>
    int main()
    {
        int n = 0;
        int a1 = 2;
        while (scanf("%d", &n) != EOF)
        {
            int an = a1 + (n - 1) * 3;
            printf("%d", (a1 + an) * n / 2);
        }
        return 0;
    }