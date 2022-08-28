#define _CRT_SECURE_NO_WARNINGS 1
/**
 *
 * @param data int整型一维数组
 * @param dataLen int data数组长度
 * @param k int整型
 * @return int整型
 *
 * C语言声明定义全局变量请加上static，防止重复定义
 */
int GetNumberOfK(int* data, int dataLen, int k) {
    // write code here
    scanf("%d", &k);
    int count = 0;
    for (int i = 0; i < dataLen; i++)
    {
        if (*(data + i) == k)
        {
            count++;
        }

    }
    return count;
}