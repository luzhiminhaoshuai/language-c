#define _CRT_SECURE_NO_WARNINGS 1
/**
 *
 * @param data int����һά����
 * @param dataLen int data���鳤��
 * @param k int����
 * @return int����
 *
 * C������������ȫ�ֱ��������static����ֹ�ظ�����
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