// demo12.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"//�������ӣ�ʮ������תʮ����
#include "math.h"

//��ʮ�����Ƶ�����תΪʮ���ƣ�����Ĳ�����ʮ�����Ƶ�����
int From16To10(int x)
{
	//�ۼ����
	int sum=0;
	//ѭ���ۼ���ӣ�ע�������������X��Ϊ0һֱ���³�
	for(int i=0;x!=0;i++)
	{
      //x%16������ pow���дη�����   +sum�����ۼ���ӵĹ���
		sum=(x%16)*pow(16,i)+sum;
		//ѭ������������
		x=x/16;
	}
	return sum;
}
void main()
{
	int x=0x1128;
	//��������
	int y=From16To10(x);
	printf("%d\n",y);
}