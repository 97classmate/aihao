// nice18.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

void main()
{
	//��ʼ��һ����ά����
	int a[5][5]={
		{11,32,44,56,43},		
		{23,455,21,134,11},
		{0,23,2,3,1},
		{12,987,65,44,32},
		{21,3344,244,22,1}
};
	   //Ĭ�ϵ�һ����������
	     int max=a[0][0];
		 int x=0;
		 int y=0;
		 //ѭ�����д�ӡ
    for(int i=0;i<5;i++)
	{
		for(int j=0;j<5;j++)
		{
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}
	//ѭ���ҳ����е�ÿһ���������бȽ�
	 for(i=0;i<5;i++)
	{
		for(int j=0;j<5;j++)
		{
			//����бȵ�һ��������������MAX���滻�����������ڵ�����
			if(max<a[i][j])
			{
				max=a[i][j];
					x=i;
				    y=j;
			}
		}
		printf("\n");
	}
	 printf("%d:%d:%d\n",max,x,y);

    
}