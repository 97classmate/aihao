// demo14.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

void main()
{
	printf("������ԭʼ���ݺ�Ҫ���Ƶ�λ��\n");
	int num;
	int k;
	scanf("%d:%d",&num,&k);
	printf("%d:%d\n",num,k);
	int x=num>>(32-k);//��ԭʼ���ݵĸ�λ�ƶ���x�ĵ�λ��
	int y=num<<k;//��ԭλ���ݽ�������
	int z=x|y;// �����㣬�Ѵ�ǰ�ĸ�λ�ŵ��ƶ���ĵ�λ��
	printf("%d\n",z);
}