#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>

//编写一个函数实现n的k次方，使用递归实现。
//
//double Pow(int n, int k)
//{
//	if (k > 0)
//		return n * Pow(n, k - 1);
//	else if (k == 0)
//		return 1;
//	else
//		return 1.0 / Pow(n, -k);
//}
//
//int main()
//{
//	int n = 0;
//	int k = 0;
//	scanf("%d %d", &n, &k);
//	double ret = Pow(n, k);
//	printf("%lf\n", ret);
//
//	return 0;
//}

//写一个递归函数DigitSum(n)，输入一个非负整数，返回组成它的数字之和

//DigitSum(1234)
//DigitSum(123)+4
//DigitSum(12)+3+4
//DigitSum(1)+2+3+4
//
//int DigitSum(unsigned int n)
//{
//	if (n < 10)
//		return n;
//	else
//		return DigitSum(n / 10) + n % 10;
//}
//
//int main()
//{
//	unsigned int num = 0;
//	scanf("%u", &num);
//	int sum = DigitSum(num);
//	printf("%d\n", sum);
//
//	return 0;
//}
//


//编写一个函数 reverse_string(char * string)（递归实现）

//void reverse_string(char* str)
//{
//	int len = strlen(str);
//	int left = 0;
//	int right = len - 1;
//
//	while (left<right)
//	{
//		char tmp = *(str + left);
//		*(str + left) = *(str + right);
//		*(str + right) = tmp;
//		left++;
//		right--;
//	}
//}

//strlen 是库函数
//sizeof 是操作符
//
//strlen 是字符串长度的，只针对字符串，关注\0的位置，\0之前出现多少个字符，字符串的长度就是多少
//sizeof 是计算数据占用内存空间的大小，单位是字节，不在乎内存中存放的是什么
//
//void reverse_string(char* str)
//{
//	int len = strlen(str);
//	char* left = str;
//	char* right = str + len - 1;
//
//	while (left<right)
//	{
//		char tmp = *left;
//		*left = *right;
//		*right = tmp;
//		left++;
//		right--;
//	}
//}
//
//int my_strlen(char *str)
//{
//	int count = 0;
//	while (*str != '\0')
//	{
//		str++;
//		count++;
//	}
//	return count;
//}
//
//void reverse_string(char* str)
//{
//	int len = my_strlen(str);
//	char tmp = *str;
//	*str = *(str + len - 1);
//	*(str + len - 1) = '\0';
//	if(my_strlen(str+1)>1)
//		reverse_string(str+1);
//	*(str + len - 1) = tmp;
//}
//
//int main()
//{
//	char arr[] = "abcdef";
//	reverse_string(arr);
//	printf("%s\n", arr);//fedcba
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//    int n = 0;
//    int m = 0;//每次接收到的值
//    int sum = 0;//和
//    scanf("%d", &n);
//    int i = 0;
//    for (i = 0; i < n; i++)
//    {
//        scanf("%d", &m);
//        sum += m;
//    }
//    printf("%d\n", sum);
//    return 0;
//}
//
//
//
//#include <stdio.h>
//
//int main()
//{
//    long long n = 0;
//    scanf("%lld", &n);
//    long long sum = 0;
//    //   int i = 0;
//   //    for(i=1; i<=n; i++)
//   //    {
//   //        sum += i;
//   //    }
//    sum = (1 + n) * n / 2;
//    printf("%lld\n", sum);
//
//    return 0;
//}
//
//#include <stdio.h>
//int main()
//{
//    int arr[] = { 1,2,(3,4),5 };
//    printf("%d\n", sizeof(arr));
//    return 0;
//}
//

//#include <stdio.h>
//int main()
//{
//    char str[] = "hello bit";
//    //
//    printf("%d %d\n", sizeof(str), strlen(str));
//    //10 9
//    return 0;
//}


//将数组A中的内容和数组B中的内容进行交换。（数组一样大）

//int main()
//{
//	int a[] = { 1,3,5,7,9 };
//	int b[] = { 2,4,6,8,0 };
//	int tmp = 0;
//	int i = 0;
//	int sz = sizeof(a) / sizeof(a[0]);
//	for (i = 0; i < sz; i++)
//	{
//		int tmp = a[i];
//		a[i] = b[i];
//		b[i] = tmp;
//	}
//	//数组名是地址，地址是一个编号，是常量值
//	//0x0012ff40
//	//
//	/*c = a;
//	a = b;
//	b = c;*/
//
//	return 0;
//}
//
//memcpy
//

//创建一个整形数组，完成对数组的操作
//实现函数init() 初始化数组为全0
//实现print()  打印数组的每个元素
//实现reverse()  函数完成数组元素的逆置。
//
//void init(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		arr[i] = i+1;//1~10
//	}
//}
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
//void reverse(int arr[], int sz)
//{
//	int left = 0;
//	int right = sz - 1;
//
//	while (left < right)
//	{
//		int tmp = arr[left];
//		arr[left] = arr[right];
//		arr[right] = tmp;
//		left++;
//		right--;
//	}
//}
//int main()
//{
//	int arr[10];
//	//初始化为0
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	init(arr, sz);
//	print(arr, sz);
//	reverse(arr, sz);
//	print(arr, sz);
//
//	return 0;
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
//    int i = 0;
//    int k = 0;
//    int sum = 0;
//    for (i = 0; i < n; i++)
//    {
//        int j = 0;
//        for (j = 0; j < m; j++)
//        {
//            scanf("%d", &k);
//            if (k > 0)
//                sum += k;
//        }
//    }
//    printf("%d\n", sum);
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
//    int m = 0;
//    scanf("%d %d", &n, &m);
//    //int arr[n][m];//c99
//    int arr[10][10];
//    int i = 0;
//    int j = 0;
//    for (i = 0; i < n; i++)
//    {
//        for (j = 0; j < m; j++)
//        {
//            scanf("%d", &arr[i][j]);
//        }
//    }
//    //转置
//    for (j = 0; j < m; j++)
//    {
//        for (i = 0; i < n; i++)
//        {
//            printf("%d ", arr[i][j]);
//        }
//        printf("\n");
//    }
//
//    return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//    int n = 0;
//    int m = 0;
//    scanf("%d %d", &n, &m);
//    //int arr[n][m];//c99
//    int arr[10][10];
//    int i = 0;
//    int j = 0;
//    for (i = 0; i < n; i++)
//    {
//        for (j = 0; j < m; j++)
//        {
//            scanf("%d", &arr[i][j]);
//        }
//    }
//    //转置
//    for (j = 0; j < m; j++)
//    {
//        for (i = 0; i < n; i++)
//        {
//            printf("%d ", arr[i][j]);
//        }
//        printf("\n");
//    }
//
//    return 0;
//}

//int main()
//{
//	//5.0 % 2.0;//err
//
//	return 0;
//}

//int main()
//{
//	int a = 4;
//	//00000000000000000000000000000100 - 4的补码
//	//
//	int b = a << 1;//把a向左移动一位
//
//	printf("a=%d b=%d\n", a, b);
//
//	return 0;
//}

//int main()
//{
//	int a = -4;
//	//10000000000000000000000000000100 - -4的原码
//	//11111111111111111111111111111011 - -4的反码
//	//11111111111111111111111111111100 - -4的补码
//
//	int b = a << 1;//把a向左移动一位
//	//11111111111111111111111111111000 - b中存储的补码
//	//11111111111111111111111111110111 - b的反码
//	//10000000000000000000000000001000 - b的原码
//	//-8
//	printf("a=%d b=%d\n", a, b);
//
//	return 0;
//}


//int main()
//{
//	int a = -4;
//	//10000000000000000000000000000100 - -4的原码
//	//11111111111111111111111111111011 - -4的反码
//	//11111111111111111111111111111100 - -4的补码
//
//	int b = a >> 1;//
//	//11111111111111111111111111111100
//	//11111111111111111111111111111110 - b在内存中的补码
//	//11111111111111111111111111111101 - b的反码
//	//10000000000000000000000000000010 - b的原码
//	//-2
//	printf("a=%d b=%d\n", a, b);
//
//	return 0;
//}

//int main()
//{
//	int a = 4;
//	//00000000000000000000000000000100 补码
//	//
//
//	int b = a >> 1;//
//	printf("a=%d b=%d\n", a, b);
//
//	return 0;
//}

//int main()
//{
//	int a = 3;
//	int b = -5;
//	int c = a & b;//& - 按（2进制）位与
//	printf("%d\n", c);
//
//	//
//	//00000000000000000000000000000011 - 3的补码
//	//10000000000000000000000000000101 -5的原码
//	//11111111111111111111111111111010 -5的反码
//	//11111111111111111111111111111011 -5的补码
//	//
//	//00000000000000000000000000000011
//	//11111111111111111111111111111011
//	//00000000000000000000000000000011 - 3
//	//
//	return 0;
//}

//int main()
//{
//	int a = 3;
//	int b = -5;
//	int c = a | b;//& - 按（2进制）位或
//	printf("%d\n", c);
//
//	//
//	//00000000000000000000000000000011 -> 3的补码
//	//10000000000000000000000000000101 -5的原码
//	//11111111111111111111111111111010 -5的反码
//	//11111111111111111111111111111011 -5的补码
//	//
//	//00000000000000000000000000000011
//	//11111111111111111111111111111011
//	//11111111111111111111111111111011
//	//11111111111111111111111111111010
//	//10000000000000000000000000000101 -> -5
//	return 0;
//}

//int main()
//{
//	int a = 3;
//	int b = -5;
//	int c = a ^ b;//& - 按（2进制）位异或
//	printf("%d\n", c);
//	//异或的运算：相同为0，相异为1
//	//
//	//00000000000000000000000000000011 -> 3的补码
//	//10000000000000000000000000000101 -5的原码
//	//11111111111111111111111111111010 -5的反码
//	//11111111111111111111111111111011 -5的补码
//	//
//	//00000000000000000000000000000011
//	//11111111111111111111111111111011
//	//11111111111111111111111111111000
//	//11111111111111111111111111110111
//	//10000000000000000000000000001000
//	//-8
//	//
//	return 0;
//}


//3^3 = 0
//5^5=0
//3^5=6
//3^5^5=3
//3^5^3=5
//
//000
//011
//011 
//011
//101
//110
//a^a=0
//0^a=a
//异或是支持交换律
//3^5^3
//3^3^5
//
int main()
{
	int a = 3;
	int b = 5;

	a = a ^ b;
	b = a ^ b;//b=a ^ b ^ b
	a = a ^ b;//a^b^a

	//a = a + b;
	//b = a - b;
	//a = a - b;

	printf("a=%d b=%d\n", a, b);

	return 0;
}