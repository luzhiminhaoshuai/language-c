#define _CRT_SECURE_NO_WARNINGS 1
//�õݹ��ӡ������ÿһ��
#include<stdio.h>
void dy(int n);

int main()
{
	int n = 0;
	scanf("%d", &n);
	dy(n);

	return 0;
}

void dy(int n)
{
	if (n > 0)
	{
		dy(n / 10);
		printf("%d", n % 10);
	}

}