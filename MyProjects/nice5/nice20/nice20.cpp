// nice20.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"//���л������ӡ���������

void main()
//��ά����Ļ�������
{
	int a[3][4];
	//��ֵ����
	int num=0;
	//ѭ�����и�ֵ
	for(int i=0;i<3;i++)
	{
		num++;
		for(int j=0;j<4;j++)
		{
			a[i][j]=num;
			printf("%d\t",a[i][j]);
		}
		printf("%d\n");
	}
	
}