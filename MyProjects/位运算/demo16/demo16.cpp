// demo16.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
//ʮ����ת�������ƺ���
void printBinary(int num)
{
	for(int i=0;i<32;i++)//ѭ���Ӹ�λ��ʼ��λ
	{
		//31-i �����ƶ���λ������
		int y=(num>>(31-i++))&1;//&1������ǰ���λ�õ�����  1&1=1 0&1=0
		printf("%d",y);//��ӡ0��1
	}
	printf("\n");
}




void main()
{
	printf("������ʮ��������\n");
	int num;
	scanf("%d",&num);
	printBinary(num);
}