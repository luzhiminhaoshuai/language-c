#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
//插入排序升序算法
//int main()
//{
//
//	int a[] = { 4, 0, 2, 3, 1 }, i, j, t;
//	for (i = 1; i < 5; i++)
//	{
//		t = a[i];
//		j = i - 1;
//		while (j >= 0 && t < a[j])
//		{
//			a[j + 1] = a[j];
//			--j;
//		}
//		a[j + 1] = t;
//	}
//	for (i = 0; i < 5; i++)
//	{
//		printf("%d ", a[i]);
//	}
//	return 0;
//}

//力扣，错误的集合
//集合 s 包含从 1 到 n 的整数。不幸的是，因为数据错误，导致集合里面某一个数字复制了成了集合里面的另外一个数字的值，导致集合 丢失了一个数字 并且 有一个数字重复 。
//
//给定一个数组 nums 代表了集合 S 发生错误后的结果。
//
//请你找出重复出现的整数，再找到丢失的整数，将它们以数组的形式返回。


/**
 * Note: The returned array must be malloced, assume caller calls free().
 */

//int cmp(void* a, void* b)
//{
//    return *((int*)a) - *((int*)b);
//}
//int* findErrorNums(int* nums, int numsSize, int* returnSize)
//{
//    int* errornums = (int*)malloc(sizeof(int) * 2);
//    *returnSize = 2;
//    qsort(nums, numsSize, sizeof(int), cmp);
//    int i = 0;
//    int p = 0;
//    for (i = 0; i < numsSize; i++)
//    {
//
//        if (nums[i] == p)//这里的p其实是nums[i-1],寻找两个相同的元素
//        {
//            errornums[0] = p;
//        }
//        else if (nums[i] - p > 1)//当后面的元素减去前面的元素大于1的时候，（也就是2），这两个数中间的数就是缺失的数
//        {
//            errornums[1] = nums[i] - 1;
//        }
//        p = nums[i];//下一步是i++
//    }
//    if (nums[numsSize - 1] != numsSize)//判断最后一个元素是否缺失
//    {
//        errornums[1] = numsSize;
//    }
//    return errornums;
//}

//
//描述
//小明同学最近开发了一个网站，在用户注册账户的时候，需要设置账户的密码，为了加强账户的安全性，小明对密码强度有一定要求：
//
//1. 密码只能由大写字母，小写字母，数字构成；
//
//2. 密码不能以数字开头；
//
//3. 密码中至少出现大写字母，小写字母和数字这三种字符类型中的两种；
//
//4. 密码长度至少为8
//
//现在小明受到了n个密码，他想请你写程序判断这些密码中哪些是合适的，哪些是不合法的。
//
//输入描述：
//输入一个数n，接下来有n(n≤100)行，每行一个字符串，表示一个密码，输入保证字符串中只出现大写字母，小写字母和数字，字符串长度不超过100。
//输出描述：
//输入n行，如果密码合法，输出YES，不合法输出NO


int head_num(char pwd[]);

int hln(char pwd[], int sz);

int main()
{   
	int n = 0;

	scanf("%d",&n);
	getchar();
	for (int i = 0; i < n; i++)
	{
		char pwd[100] = { 0 };
		scanf("%[^\n]", pwd);
		getchar();//清理缓存区的\n
		int sz = strlen(pwd);
		if (sz < 8)//判断密码长度是否小于8
		{
			printf("NO\n");
			continue;
		}
		if (head_num(pwd))//判断开头是否为数字
		{
			printf("NO\n");
			continue;
		}
		if (hln(pwd,sz))
		{
			printf("YES\n");
		}
		else
		{  
			printf("NO\n");
			continue;
		}
	}
	return 0;
}

int head_num(char pwd[])//判断开头是否为数字
{
	if (pwd[0] >= '0' && pwd[0] <= '9')
	{
		return 1;
	}
	return 0;
}
int hln(char pwd[],int sz)//判断是否数组是否是由大小写字母和数组组成
{
	int higer = 0, lower = 0, num = 0, other = 0;
	for (int i = 0; i < sz; i++)
	{
		if (pwd[i] >= '0' && pwd[i] <= '9')
		{
			num++;
		}
		else if (pwd[i] >= 'A' && pwd[i] <= 'Z')
		{
			higer++;
		}
		else if (pwd[i] >= 'a' && pwd[i] <= 'z')
		{
			lower++;
		}
		else
		{
			other++;
		}
	}
	if (((higer > 0) + (lower > 0) + (num > 0)) >= 2 && (other == 0))//判断大小字母和数字是否有其中两种
	{
		return 1;
	}
	else
	{
		return 0;
	}
}