#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
int main()
{
	 double x[5] = { 2.0, 4.0, 6.0, 8.0, 10.0 };
	 char c2[] = { '\x10', '\xa', '\8' };

	//int[5 + 3] = { 1 };������
	return 0;
}

//oj��ϰ��
//�������� n����˳���ӡ���� 1 ������ n λʮ���������������� 3�����ӡ�� 1��2��3 һֱ������ 3 λ�� 999��
//1. �÷���һ�������б��������ӡ
//2. n Ϊ��������0 < n <= 5
/**
 * �����е����������������������Ѿ�ָ���������޸ģ�ֱ�ӷ��ط����涨��ֵ����
 *
 *
 * @param n int���� ���λ��
 * @return int����һά����
 * @return int* returnSize ������������
 *
 * C������������ȫ�ֱ��������static����ֹ�ظ�����
 */

int* printNumbers(int n, int* returnSize)
{

    int i = 0;
    int k = 1;
    for (i = 0; i < n; i++)
    {
        k = k * 10;
    }
    int* arr = (int*)malloc(k * sizeof(int));

    int j = 1;
    for (i = 0; i < k - 1; i++)
    {
        arr[i] = j;
        j++;
    }
    *returnSize = k - 1;
    return arr;
}
//������������ڣ���������һ��ĵڼ��졣
//��֤���Ϊ4λ�������ںϷ���
//���ף�ʱ�临�Ӷȣ�O(n)\O(n) ���ռ临�Ӷȣ�O(1)\O(1)
//����������
//����һ�У�ÿ�пո�ָ�ֱ����꣬�£���
//
//���������
//�������һ��ĵڼ���
#include<stdio.h>
int main()
{
    int arr[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
    int year = 0;
    int month = 0;
    int day = 0;
    scanf("%d %d %d", &year, &month, &day);
    if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
    {
        arr[1]++;
    }
    int i = 0;


    for (i = 0; i < month - 1; i++)
    {

        day = day + arr[i];
    }
    printf("%d", day);

    return 0;
}



