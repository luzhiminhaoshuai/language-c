#define _CRT_SECURE_NO_WARNINGS 1
//计算机中整数的比较是转换成二进制比较的
//在32位的计算机系统中我们只需要比较它二进制的每一位，要是不相同的话，需要改变的个数就+1
//比较每一位的做法，是要这个数向右移动i个单位，然后和1比较，再用和1比较的结果按位异或
//为什么要和1比较呢，因为1转换成二进制的数字，除了最低位，每一位都是零。
int convertInteger(int A, int B) {
    int count = 0;
    for (int i = 0; i < 32; i++)
    {
        if ((((A >> i) & 1) ^ ((B >> i) & 1)) == 1)
        {
            count++;

        }
    }
    return count;
}
