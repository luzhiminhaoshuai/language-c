#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
//
//struct S
//{
//	char name[10];
//	int age;
//	float score;
//};
//
//
//
//int main()
//{
//	char buf[100] = {0};
//	struct S tmp = { 0 };
//
//	struct S s = { "zhangsan", 20, 95.5f };
//	//�ܹ�������ṹ������ݣ�ת�����ַ���
//	//"zhangsan 20 95.5"
//	sprintf(buf, "%s %d %f", s.name, s.age, s.score);//���ַ�������ʽ��ӡ
//	printf("%s\n", buf);
//
//	//�ܷ�buf�е��ַ�������ԭ��һ���ṹ�������أ�
//	sscanf(buf, "%s %d %f", tmp.name, &(tmp.age), &(tmp.score));
//	printf("%s %d %f\n", tmp.name, tmp.age, tmp.score);//�Խṹ����ʽ��ӡ
//
//	return 0;
//}

//�ļ��������д
//
//int main()
//{
//	FILE*pf = fopen("test.txt", "r");
//	if (pf == NULL)
//	{
//		perror("fopen()");
//		return 1;
//	}
//	//���ļ�
//	int ch = fgetc(pf);
//	printf("%c\n", ch);//a
//	fseek(pf, 2, SEEK_CUR);
//
//	ch = fgetc(pf);
//	printf("%c\n", ch);//d
//
//	int pos = ftell(pf);
//	printf("%d\n", pos);
//
//
//	rewind(pf);
//	
//	ch = fgetc(pf);
//	printf("%c\n", ch);//a
//
//
//	//ch = fgetc(pf);
//	//printf("%c\n", ch);//b
//
//	//fseek(pf, 3, SEEK_SET);
//	//int ch = fgetc(pf);
//	//printf("%c\n", ch);//a
//
//
//	//fseek(pf, -3, SEEK_END);
//	//int ch = fgetc(pf);
//	//printf("%c\n", ch);//a
//
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}


//#include <stdio.h>
//int main()
//{
//	int a = 10000;
//	FILE* pf = fopen("test.txt", "wb");
//	fwrite(&a, 4, 1, pf);//�����Ƶ���ʽд���ļ���
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//
//fgetc
//�����ȡ�������᷵�ض�ȡ�����ַ���ASCIIֵ
//�����ȡʧ�ܣ�����EOF
//
//fgets
//�����ȡ���������ص��Ǵ�Ŷ�ȡ�������ݵĵ�ַ
//�����ȡʧ�ܣ����ص�NULL
//
//fscanf
//�����ȡ���������ص��Ǹ�ʽ����ָ�������ݵĸ���
//�����ȡʧ�ܣ����ص���С�ڸ�ʽ����ָ�������ݵĸ���
//


#include <stdio.h>
//#include <windows.h>
////VS2019 WIN11��������
//
//int main()
//{
//	FILE* pf = fopen("test.txt", "w");
//	fputs("abcdef", pf);//�Ƚ�����������������
//	printf("˯��10��-�Ѿ�д�����ˣ���test.txt�ļ��������ļ�û������\n");
//	Sleep(10000);
//	printf("ˢ�»�����\n");
//	fflush(pf);//ˢ�»�����ʱ���Ž����������������д���ļ������̣�
//	//ע��fflush �ڸ߰汾��VS�ϲ���ʹ����
//	printf("��˯��10��-��ʱ���ٴδ�test.txt�ļ����ļ���������\n");
//	Sleep(10000);
//
//	fclose(pf);
//	//ע��fclose�ڹر��ļ���ʱ��Ҳ��ˢ�»�����
//	pf = NULL;
//	return 0;
//}
//
#include <string.h>

//int main()
//{
//    unsigned char puc[4];
//    struct tagPIM
//    {
//        unsigned char ucPim1;
//        unsigned char ucData0 : 1;
//        unsigned char ucData1 : 2;
//        unsigned char ucData2 : 3;
//    }* pstPimData;
//
//    pstPimData = (struct tagPIM*)puc;
//    memset(puc, 0, 4);
//    pstPimData->ucPim1 = 2;
//    pstPimData->ucData0 = 3;
//    pstPimData->ucData1 = 4;
//    pstPimData->ucData2 = 5;
//    printf("%02x %02x %02x %02x\n", puc[0], puc[1], puc[2], puc[3]);
//    return 0;
//}


#include <stdio.h>
//union Un
//{
//	short s[7];//14  2 8 2
//	int n;//4 8 4
//};
//#include <stdlib.h>
//
//int main()
//{
//	//printf("%d\n", sizeof(union Un));//16
//	malloc(0);
//
//	return 0;
//}
//



//enum ENUM_A
//{
//	X1,//0
//	Y1,//1
//	Z1 = 255,
//	A1,//256
//	B1,//257
//};
//int main()
//{
//	enum ENUM_A enumA = Y1;//1
//	enum ENUM_A enumB = B1;//257
//	printf("%d %d\n", enumA, enumB);
//
//	return 0;
//}
//
//


#include<stdio.h>
int main()
{
    union
    {
        short k;
        char i[2];
    }*s, a;
    s = &a;
    s->i[0] = 0x39;
    s->i[1] = 0x38;
    printf("%x\n", a.k);

    return 0;
}



