#define _CRT_SECURE_NO_WARNINGS 1
//KiKiд��һ�������Hello world!���ĳ���BoBo��ʦ������printf�����з���ֵ�����ܰ���д���������printf(��Hello world!��)�ķ���ֵ��
//���������
//�������У�
//��һ��Ϊ��Hello world!��
//�ڶ���Ϊprintf(��Hello world!��)���ú�ķ���ֵ

//#include<stdio.h>
//int main()
//{
//  
//    int s = 0;
//    s = printf("Hello world!");
//    printf("\n%d", s);
//    return 0;
//}
//��⣺
//#include<stdio.h>
//
//int main()
//
//{
//    
//        int a = printf("Hello world!");//a����ֵΪ�⺯��
//    
//        printf("\n%d", a);//����ӡaʱ��a�ű����У�������һ��printf("Hello world!")������֣�
//    
//        //ͬʱ��printf����"Hello world!"���ַ��������ո�Ҳ�㣩
//        
//        return 0;
//    
//}




//����
//С����ѧУ��ѧ¥�ĵ���ǰ���˺ܶ��ˣ�����ǰ����n�����ڵȵ��ݡ�����ÿ�ο��Գ���12�ˣ�
// ÿ��������Ҫ��ʱ��Ϊ4���ӣ�����Ҫ2���ӣ�����Ҫ2���ӣ��������С���ּ��㻹��Ҫ���ٷ��Ӳ��ܳ˵��ݵ���¥�ϡ����������������1�㣩
//
//����������
//�������һ������n(0 �� n �� 10^9)
//
//���������
//���һ����������С���ֵ���¥����Ҫ��ʱ�䡣
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
