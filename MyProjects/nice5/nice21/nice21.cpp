// nice21.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"//��ά��������л���
void main()
//��ά����Ļ�������
{
	int a[3][4];
  
	//��Ҫ����ֵ������
	int b[4][3];
	//��ֵ����
	int num=0;
	//ѭ�����и�ֵ
	printf("����ǰ��\n");
	for(int i=0;i<3;i++)
	{
		num++;
		for(int j=0;j<4;j++)
		{
			a[i][j]=num;
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}
	printf("h�������\n");
	for(i=0;i<4;i++)
	{
         for(int j=0;j<3;j++)
		 {
			 //b[i][j]=a[j][i]
			 b[i][j]=a[j][i];
			 printf("%d\t",b[i][j]);
		 }
		 printf("\n");
	}
}