// nice12.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

 void main()
{
	int a[5];//�������
	int num;
	int num2;
	//ѭ��Ϊ�����Ԫ�ظ�ֵ
	for( int i=0;i<5;i++)
	{
		printf("���������ĵ�%d��Ԫ��\n",i+1);
		
		scanf("%d",&num);
		a[i]=num;
	}
	// ɾ������
	printf("������Ҫɾ���ĵڼ���Ԫ��");

	scanf("%d",&num);
	a[num]=0;

    //�޸Ĳ���
	printf("������Ҫ�޸ĵĵڼ�������Ԫ��");
	scanf("%d",&num);
	printf("������Ҫ�޸ĵ�ֵ");

	scanf("%d",&num2);
	a[num]=num2;
	 
	//���Ҳ���

	for(i=0;i<5;i++)
	{
		printf("%d\n",a[i]);
	}
}