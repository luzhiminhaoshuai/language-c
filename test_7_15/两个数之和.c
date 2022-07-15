#define _CRT_SECURE_NO_WARNINGS 1

//#include <stdio.h>
//int main() {
//	//打印hello bit
//	printf("hello bit\n");
//	printf("hello bit\n");
//	printf("hello bit\n");
//	printf("hello bit\n");
//	printf("hello bit\n");
//	printf("hello bit\n");
//	return 0;
//}
#include <stdio.h>
int main() {
	int num1 = 1;
	int num2 = 1;
	printf("请输入两个整数，用空格隔开\n");
	scanf("%d %d", &num1, &num2);
	int sum = 1;
	sum = num1 + num2;
	printf("这两个数的和为 %d", sum);
	return 0;


}