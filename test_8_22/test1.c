#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int main()
//{
//	int a[5 + 3] = { 0 };
//	char c2[] = "\1 87";
//	printf("%s",c2);
//	return 0;
//}
//
//��������Ҫ�������������n��Ȼ������n�����������Ϊn�������и����ĸ�������������������ƽ��ֵ���������һλС����
//0��������������Ҳ���Ǹ�������������㡣���û����������ƽ��ֵΪ0��
//
//���ݷ�Χ�� 1 \le n\ \le 2000 \1��n ��2000  ����������������� | val | \le 1000 \�Oval�O��1000
//����������
//��������һ��������n��
//Ȼ������n��������
//
//���������
//��������ĸ�������������������ƽ��ֵ��

//��һ������Ϊ n �ķǽ������飬����[1,2,3,4,5]������������ת������һ�������ʼ�����ɸ�Ԫ�ذᵽ�����ĩβ�����һ����ת���飬��������[3,4,5,1,2]������[4,5,1,2,3]�����ġ����ʣ���������һ����ת���飬�������е���Сֵ��
//
//���ݷ�Χ��1 \le n \le 100001��n��10000������������Ԫ�ص�ֵ: 0 \le val \le 100000��val��10000
//Ҫ�󣺿ռ临�Ӷȣ�O(1)O(1) ��ʱ�临�Ӷȣ�O(logn)O(logn)
/**
 *
 * @param rotateArray int����һά����
 * @param rotateArrayLen int rotateArray���鳤��
 * @return int����
 *
 * C������������ȫ�ֱ��������static����ֹ�ظ�����
 */
int minNumberInRotateArray(int* rotateArray, int rotateArrayLen) {
    // write code here
    for (int i = 0; i < rotateArrayLen; i++)
    {
        if (rotateArray[i - 1] > rotateArray[i])
            return rotateArray[i];
    }
    return rotateArray[0];
}