#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include<stdlib.h>
//#define str "luzhiminhaoshuai"
//
//int main()
//{
//	printf("%s\n", __FILE__);
//	printf("%d\n", __LINE__);
//	printf("%s\n", __DATE__);
//	printf("%s\n", __TIME__);
//	printf("%s\n", str);
//	
//}
//
////写一个宏，可以将一个整数的二进制位的奇数位和偶数位交换。
//#define SWAP(n) (((n&0x55555555)<<1)+((n&0xaaaaaaaa)>>1))
//
//int main()
//{
//	int a = 10;
//	int b = SWAP(a);
//	printf("%d", b);
//}



//写一个宏，计算结构体中某变量相对于首地址的偏移，并给出说明
//
//考察：offsetof宏的实现

#define OFFSETOF(struct_type,member_name)  (int)&(((struct_type*)0)->member_name)      //假设结构体的起始地址是0，那么成员的地址就是成员偏移量大小
struct stu
{
	int a;
	char b;
	float c;

};

int main()
{
	int d = OFFSETOF(struct stu, b);
	
	struct stu ht = {1,'c',3.5};
	struct stu* p1=(struct stu*)malloc(sizeof(struct stu));
	p1->a = 4;
	p1->b = 'd';
	p1->c = 3.5;
	printf("%d \n", d);
	printf("%d %c %2f\n", p1->a, p1->b, p1->c);
	printf("%d %c %2f\n",  ht.a,ht.b,ht.c);
	p1 = NULL;
}





