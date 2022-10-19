#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>


//
//struct S
//{
//	int n;
//	float s;
//	int arr[0];//柔性数组成员
//};
//
//
 //struct S
//{
//	int n;
//	float s;
//	int arr[];//[柔性]数组成员
//};
//
//int main()
//{
//	//printf("%d\n", sizeof(struct S));
//	//struct S s;//8
//	struct S* ps = (struct S*)malloc(sizeof(struct S)+sizeof(int)*4);
//	if (ps == NULL)
//	{
//		return 1;
//	}
//	//....
//	ps->n = 100;
//	ps->s = 5.5f;
//	int i = 0;
//	for (i = 0; i < 4; i++)
//	{
//		scanf("%d", &(ps->arr[i]));
//	}
//
//	printf("%d %f\n", ps->n, ps->s);
//	for (i = 0; i < 4; i++)
//	{
//		printf("%d ", ps->arr[i]);
//	}
//
//	//调整
//	struct S*ptr = (struct S*)realloc(ps, sizeof(struct S)+10*sizeof(int));
//	if (ptr == NULL)
//	{
//		return 1;
//	}
//	else
//	{
//		ps = ptr;
//	}
//	//使用
//	
//	//释放
//	free(ps);
//	ps = NULL;
//
//	return 0;
//}
//
//struct S
//{
//	int n;
//	float s;
//	int* arr;
//};
//
//int main()
//{
//	struct S*ps = (struct S*)malloc(sizeof(struct S));
//	if (ps == NULL)
//		return 1;
//
//	ps->n = 100;
//	ps->s = 5.5f;
//	
//	int* ptr = (int*)malloc(4 * sizeof(int));
//	if (ptr == NULL)
//	{
//		return 1;
//	}
//	else
//	{
//		ps->arr = ptr;
//	}
//	//使用
//	int i = 0;
//	for (i = 0; i < 4; i++)
//	{
//		scanf("%d", &(ps->arr[i]));
//	}
//
//	//调整
//	realloc(ps->arr, 10*sizeof(int));
//	
//	//打印
//	printf("%d\n", ps->n);
//	printf("%f\n", ps->s);
//	for (i = 0; i < 4; i++)
//	{
//		printf("%d ", ps->arr[i]);
//	}
//
//	//释放
//	free(ps->arr);
//	ps->arr = NULL;
//	free(ps);
//	ps = NULL;
//
//	return 0;
//}
//

#include <stdio.h>
#include <math.h>

//int main() {
//    int n = 0;
//    scanf("%d", &n);//123
//    int i = 0;
//    int sum = 0;
//    while (n)
//    {
//        int bit = n % 10;
//        sum += (bit % 2) * pow(10, i);
//        n /= 10;
//        i++;
//    }
//    printf("%d\n", sum);
//
//    return 0;
//}

#include <stdio.h>
#include <stdlib.h>

/*
int cmp_int(const void* e1, const void* e2) {
    return *(int*)e1 - *(int*)e2;
}

int main() {
    int n = 0;
    scanf("%d", &n);
    int arr[n];//C99
    int i = 0;
    //输入
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    //排序
    qsort(arr, n, sizeof(int), cmp_int);

    //打印
    for(i=n-1; i>=n-5;i--)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}

*/

/*
int cmp_int(const void* e1, const void* e2) {
    return *(int*)e1 - *(int*)e2;
}

int main() {
    int n = 0;
    int arr[50] = {0};

    scanf("%d", &n);
    int i = 0;
    //输入
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    //排序
    qsort(arr, n, sizeof(int), cmp_int);

    //打印
    for (i = n - 1; i >= n - 5; i--) {
        printf("%d ", arr[i]);
    }
    return 0;
}
*/
//
//#include <stdio.h>
//
//int main() {
//    int n = 0;
//    while (scanf("%d", &n) == 1)
//    {
//        int i = 1;
//        //打印几行
//        for (i = 1; i <= n; i++)
//        {
//            //打印一行
//            int j = 0;
//            for (j = 1; j <= i; j++)
//            {
//                printf("%d ", j);
//            }
//            printf("\n");
//        }
//    }
//
//    return 0;
//}

//#include <stdio.h>
//
//int main() {
//    int n = 0;
//    while (scanf("%d", &n) == 1)
//    {
//        int i = 0;
//        for (i = 0; i < n; i++)
//        {
//            int j = 0;
//            for (j = 0; j < n; j++)
//            {
//                if (i + j == n - 1)
//                    printf("*");
//                else
//                    printf(" ");
//            }
//            printf("\n");
//        }
//    }
//    return 0;
//}

//#pragma pack(4)
//struct A
//{
//    int a;
//    short b;
//    int c;
//    char d;
//};
//struct B
//{
//    int a;
//    short b;
//    char c;
//    int d;
//};
//#pragma pack()
//
//int main()
//{
//    printf("%d\n", sizeof(struct A));
//    printf("%d\n", sizeof(struct B));
//
//    return 0;
//}
//#pragma pack(4)
//int main(int argc, char* argv[])
//{
//    struct tagTest1
//    {
//        short a;
//        char d;
//        long b;
//        long c;
//    };
//    struct tagTest2
//    {
//        long b;
//        short c;
//        char d;
//        long a;
//    };
//    struct tagTest3
//    {
//        short c;
//        long b;
//        char d;
//        long a;
//    };
//
//    typedef struct {
//        int a;
//        char b;
//        short c;
//        short d;
//    }AA_t;
//
//
//    struct tagTest1 stT1;
//    struct tagTest2 stT2;
//    struct tagTest3 stT3;
//
//    //printf("%d %d %d", sizeof(stT1), sizeof(stT2), sizeof(stT3));
//    printf("%d\n", sizeof(AA_t));
//
//    return 0;
//}
//#pragma pack()

//
//#include <stdio.h>
//#include <string.h>
//
//int main() {
//    //int arr[100001] = {0};
//    int n = 0;
//    scanf("%d", &n);
//    int arr[n + 1];//C99
//    memset(arr, 0, (n + 1) * sizeof(int));
//    int i = 0;
//    int m = 0;
//    for (i = 0; i < n; i++)
//    {
//        scanf("%d", &m);
//        arr[m] = 1;
//    }
//    for (i = 1; i <= n; i++)
//    {
//        if (arr[i] != 0)
//            printf("%d ", i);
//    }
//    return 0;
//}
//
//
//#include <stdio.h>
//
//int main() {
//    int arr[100001] = { 0 };
//    int n = 0;
//    scanf("%d", &n);
//    int i = 0;
//    int m = 0;
//    for (i = 0; i < n; i++)
//    {
//        scanf("%d", &m);
//        arr[m] = 1;
//    }
//    for (i = 1; i <= 100000; i++)
//    {
//        if (arr[i] != 0)
//            printf("%d ", i);
//    }
//    return 0;
//}


#include <stdio.h>

//int main() {
//    int n = 0;
//    while (scanf("%d", &n) == 1)
//    {
//        int i = 0;
//        int j = 0;
//        for (i = 0; i < n; i++)
//        {
//            for (j = 0; j < n; j++)
//            {
//                if (i + j < n - 1)
//                    printf("  ");
//                else
//                    printf("* ");
//            }
//            printf("\n");
//        }
//    }
//    return 0;
//}
//

#define A 2
#define B 3
#define MAX_SIZE 2+3

struct _Record_Struct
{
    unsigned char Env_Alarm_ID : 4;//1
    unsigned char Para1 : 2;
    unsigned char state;//1
    unsigned char avail : 1;//1
}*Env_Alarm_Record;

int main()
{
    printf("%d\n", sizeof(struct _Record_Struct) * 2 + 3);

    return 0;
}









