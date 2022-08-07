#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//int main()
//{
//	int a =/*呵呵呵*/ 10;	   int b = 10;
//	printf("%d\n", a);
//
//	//xxxxx
//	//int a = 10;//xxxxx
//	return 0;
//}


//int main()
//{
//	//prinTf;
//
//	return 0;
//}


//int main()
//{
//	for (int x = 0, y = 0; (y = 123) && (x < 4); x++)
//		;
//
//	return 0;
//}


#include <stdio.h>
//
//int main()
//{
//    //
//    //1. m和n的最小公倍数，也要>=m和n的较大值
//    //18 24
//    //求出m和n的较大值，k
//    //不断的++，找一个k能同时整除m和n
//    //k就是最小公倍数
//    //2. 先求出m和n的最大公约数（辗转相除法）k
//    //最小公倍数 = m*n/k
//    //
//    //3. 
//    //
//    long long a = 0;
//    long long b = 0;
//    scanf("%lld %lld", &a, &b);
//    //k/a = i
//    //k/b = j
//    int i = 1;
//    //18 24
//    while (a * i % b != 0)
//    {
//        i++;
//    }
//
//    printf("%lld\n", a * i);
//
//    return 0;
//}
//
//
//


#include <stdio.h>
#include <assert.h>
#include <string.h>
//
//void reverse(char* left, char* right)
//{
//    assert(left);
//    assert(right);
//
//    while (left < right)
//    {
//        char tmp = *left;
//        *left = *right;
//        *right = tmp;
//        left++;
//        right--;
//    }
//}
//
//int main()
//{
//    char arr[101] = { 0 };
//    gets(arr);
//    //处理
//    char* cur = arr;
//    //逆序每个单词
//    while (*cur)
//    {
//        char* start = cur;
//        char* end = cur;
//        while (*end != ' ' && *end != '\0')
//        {
//            end++;
//        }
//        reverse(start, end - 1);
//        if (*end != '\0')
//            cur = end + 1;
//        else
//            cur = end;
//    }
//    //逆序整个字符串
//    int len = strlen(arr);
//    reverse(arr, arr + len - 1);
//
//    printf("%s\n", arr);
//
//    return 0;
//}
//



//void fun() {
//	char arr[100];
//	if (scanf("%s", arr) != EOF) {
//		fun();
//		printf("%s ", arr);
//	}
//}
//
//int main() {
//	fun();
//	return 0;
//}
//
//
//


//字符倒叙
//void reveser(char* left, char* right)
//{
//	assert(left);
//	assert(right);
//	
//	while (left<right)
//	{
//		
//		char temp = *left;
//		*left = *right;
//		*right = temp;
//		left++;
//		right--;
//	}
//}
////字符串倒叙
//void dx(char* arr)
//{
//	char* start = arr;
//	char* end = arr;
//	while (*end != '\0')
//	{
//		while (*end != ' '&& *end!= '\0')
//		{
//			end++;
//		}
//		reveser(start, end - 1);
//		if (*end != '\0')
//		{
//			start = end + 1;
//			end = end + 1;
//		}
//		else
//		{
//			start = end;
//		}
//
//	}
//	
//}
//int main()
//{
//	char arr1[100];
//	gets(arr1);
//	int sz = strlen(arr1);
//	reveser(arr1,arr1+sz-1);
//	dx(arr1);
//	printf("%s", arr1);
//	return 0;
//}
//
//
#include <stdio.h>
int max(int arr[], int n);
int min(int arr[], int n);

int main()
{
    int n = 0;
    scanf("%d", &n);
    int arr[20] = { 0 };
    int i = 0;
    for (i = 0; i < n; i++)
    {

        scanf("%d", &arr[i]);
    }
    int MAX = max(arr, n);
    int MIN = min(arr, n);
    printf("%d", MAX - MIN); 
    return 0;
}

int min(int arr[], int n)
{
    int i = 0;
    int min = arr[i];
    for (i = 0; i < n; i++)
    {
        if ((i + 1) < n)
        {
            if (arr[i+1] < min)
            {
                min = arr[i + 1];
            }
        }
       
    }
    return min;

}


int max(int arr[], int n)
{
    int i = 0;
    int max = arr[i];
    for (i = 0; i < n; i++)
    {
        if ((i + 1) < n)
        {
            if (arr[i + 1] > max)
                max = arr[i + 1];

        }
        
    }
    return max;

}
