#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>

//��дһ������ʵ��n��k�η���ʹ�õݹ�ʵ�֡�
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

//дһ���ݹ麯��DigitSum(n)������һ���Ǹ����������������������֮��

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


//��дһ������ reverse_string(char * string)���ݹ�ʵ�֣�

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

//strlen �ǿ⺯��
//sizeof �ǲ�����
//
//strlen ���ַ������ȵģ�ֻ����ַ�������ע\0��λ�ã�\0֮ǰ���ֶ��ٸ��ַ����ַ����ĳ��Ⱦ��Ƕ���
//sizeof �Ǽ�������ռ���ڴ�ռ�Ĵ�С����λ���ֽڣ����ں��ڴ��д�ŵ���ʲô
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
//    int m = 0;//ÿ�ν��յ���ֵ
//    int sum = 0;//��
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


//������A�е����ݺ�����B�е����ݽ��н�����������һ����

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
//	//�������ǵ�ַ����ַ��һ����ţ��ǳ���ֵ
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

//����һ���������飬��ɶ�����Ĳ���
//ʵ�ֺ���init() ��ʼ������Ϊȫ0
//ʵ��print()  ��ӡ�����ÿ��Ԫ��
//ʵ��reverse()  �����������Ԫ�ص����á�
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
//	//��ʼ��Ϊ0
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
//    //ת��
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
//    //ת��
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
//	//00000000000000000000000000000100 - 4�Ĳ���
//	//
//	int b = a << 1;//��a�����ƶ�һλ
//
//	printf("a=%d b=%d\n", a, b);
//
//	return 0;
//}

//int main()
//{
//	int a = -4;
//	//10000000000000000000000000000100 - -4��ԭ��
//	//11111111111111111111111111111011 - -4�ķ���
//	//11111111111111111111111111111100 - -4�Ĳ���
//
//	int b = a << 1;//��a�����ƶ�һλ
//	//11111111111111111111111111111000 - b�д洢�Ĳ���
//	//11111111111111111111111111110111 - b�ķ���
//	//10000000000000000000000000001000 - b��ԭ��
//	//-8
//	printf("a=%d b=%d\n", a, b);
//
//	return 0;
//}


//int main()
//{
//	int a = -4;
//	//10000000000000000000000000000100 - -4��ԭ��
//	//11111111111111111111111111111011 - -4�ķ���
//	//11111111111111111111111111111100 - -4�Ĳ���
//
//	int b = a >> 1;//
//	//11111111111111111111111111111100
//	//11111111111111111111111111111110 - b���ڴ��еĲ���
//	//11111111111111111111111111111101 - b�ķ���
//	//10000000000000000000000000000010 - b��ԭ��
//	//-2
//	printf("a=%d b=%d\n", a, b);
//
//	return 0;
//}

//int main()
//{
//	int a = 4;
//	//00000000000000000000000000000100 ����
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
//	int c = a & b;//& - ����2���ƣ�λ��
//	printf("%d\n", c);
//
//	//
//	//00000000000000000000000000000011 - 3�Ĳ���
//	//10000000000000000000000000000101 -5��ԭ��
//	//11111111111111111111111111111010 -5�ķ���
//	//11111111111111111111111111111011 -5�Ĳ���
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
//	int c = a | b;//& - ����2���ƣ�λ��
//	printf("%d\n", c);
//
//	//
//	//00000000000000000000000000000011 -> 3�Ĳ���
//	//10000000000000000000000000000101 -5��ԭ��
//	//11111111111111111111111111111010 -5�ķ���
//	//11111111111111111111111111111011 -5�Ĳ���
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
//	int c = a ^ b;//& - ����2���ƣ�λ���
//	printf("%d\n", c);
//	//�������㣺��ͬΪ0������Ϊ1
//	//
//	//00000000000000000000000000000011 -> 3�Ĳ���
//	//10000000000000000000000000000101 -5��ԭ��
//	//11111111111111111111111111111010 -5�ķ���
//	//11111111111111111111111111111011 -5�Ĳ���
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
//�����֧�ֽ�����
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