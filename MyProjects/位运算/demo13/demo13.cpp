// demo13.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
//��ѭ����λ
void main()
{
	printf("%d\n",sizeof(int));
	printf("������Ҫ�ƶ�������Ҫ�ƶ���λ��\n");
	int num;
	int k;
	scanf("%d:%d",&num,&k);
	int low=num<<(32-k);//�����λ��ֵ
	int move=num>>k;//������λ
	int last=low|move;//���л����㣬�ѵ�λ��ֵ�ŵ��ƶ���ĸ�λ��
	printf("�����: %d\n",last);
}