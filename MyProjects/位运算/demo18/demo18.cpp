// demo18.cpp : Defines the entry point for the console application.
//
//��n �еĸ���

#include "stdafx.h"
//��һ��������10�����ڴ������������ʱ�䣬�Զ�ת��Ϊ������
//�ڶ������n &(n-1)�����ȥ�����һ�����ֵ�1
//������ѭ������һֱ�����ǰһ��
int count1(int num)
{
	int time=0;//λ����Ч���ȽϺ�
	while(num)
	{
		time++;
		num&=(num-1);
	}
	return time;
}

//ʮ����ת�����ƺ���
int count2(int num)
{
	int time=0;
	for(int i=0;i<32;i++)//ѭ���Ӹ�λ��ʼ��λ
	{
		//31-i,�����ƶ���λ������
		int y=(num>>(31-i))&1;//&1������ǰ���λ�õ�����  1&1=1  0&1=0
		if(y==1)
		{
			time++;
		}
		return time;
	}
}

//ʮ����ת�������ƺ���
void main()
{
	printf("������һ������\n");//ѭ���Ӹ�λ��ʼ��λ
	int num;
	scanf("%d",&num);
	int all1=count1(num);
	printf("1���ܵĸ���Ϊ%d\n",all1);
	int all2=count2(num);
	printf("1���ܵĸ���Ϊ%d\n",all2);

}
