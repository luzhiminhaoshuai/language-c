#define _CRT_SECURE_NO_WARNINGS 1
//KiKi写了一个输出“Hello world!”的程序，BoBo老师告诉他printf函数有返回值，你能帮他写个程序输出printf(“Hello world!”)的返回值吗？
//输出描述：
//包括两行：
//第一行为“Hello world!”
//第二行为printf(“Hello world!”)调用后的返回值

//#include<stdio.h>
//int main()
//{
//  
//    int s = 0;
//    s = printf("Hello world!");
//    printf("\n%d", s);
//    return 0;
//}
//题解：
//#include<stdio.h>
//
//int main()
//
//{
//    
//        int a = printf("Hello world!");//a被赋值为这函数
//    
//        printf("\n%d", a);//当打印a时，a才被运行，即运行一次printf("Hello world!")这个部分；
//    
//        //同时，printf返回"Hello world!"的字符个数（空格也算）
//        
//        return 0;
//    
//}




//描述
//小乐乐学校教学楼的电梯前排了很多人，他的前面有n个人在等电梯。电梯每次可以乘坐12人，
// 每次上下需要的时间为4分钟（上需要2分钟，下需要2分钟）。请帮助小乐乐计算还需要多少分钟才能乘电梯到达楼上。（假设最初电梯在1层）
//
//输入描述：
//输入包含一个整数n(0 ≤ n ≤ 10^9)
//
//输出描述：
//输出一个整数，即小乐乐到达楼上需要的时间。
//#include <stdio.h>
//int main()
//{
//    int n = 0;
//
//    while (scanf("%d", &n) != EOF)
//    {
//        if (n < 12)
//            printf("%d", n - n + 2);
//
//        else if (n >= 12)
 // 
//        {
//            int s = 0;
//            s = ((n / 12) * 4 + 2);
//            printf("%d", s);
//        }
//    }
//    return 0;
//}


#include <stdio.h>
int main()
{
    char a=1;
   while(scanf("%c", &a)!=EOF)
   {
       getchar();
      
       if (a >= 65 && a <= 90 || a >= 97 && a <= 122)
    {
        printf("Yes\n");
    }
    else {
        printf("NO\n");
    }
   }
    return 0;
}
