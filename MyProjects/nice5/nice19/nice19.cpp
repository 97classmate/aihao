// nice19.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"//����Ĳ������������



void main()

{
	//ԭʼ ����������
	int a[10]={1,2,3,4,52,66,79,86,522};
	//����Ҫ���������
	printf("������Ҫ���������");

		int num;
	scanf("%d",&num);
	//ѭ���ҵ�Ҫ�����λ��
	for(int i=0;i<9;i++)
	{
		if(num<a[i])
		{
			pos=i;
			break;
		}
	}
	int pos=i;
	printf("�������λ��:%d\n",i);
	//�ɺ����Ԫ�ؽ���ƽ��   a[i]=a[i-1];

	for(i=9;i>num;i--)
	{

		a[i]=a[i-1];
	}
	//��������뵽Ҫ�����λ�� pos >num
	a[pos]=num;
	//���д�ӡ
	for(i=0;i<10;i++)
	{
		printf("%d\t",a[i]);
	}
}