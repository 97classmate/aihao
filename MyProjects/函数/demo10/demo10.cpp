// demo10.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "string.h"

void main()
{   
	 //������2������
	char str1[50];
	char str2[50];
	//����һ���鸳ֵ
	printf("������ԭ��������\n");
	gets(str1);

     int i=0;
	//ѭ���ҳ������е����ݣ�����ֵ���ڶ��������� 
	while(str1[i]!='\0')
	{
		str2[i]=str1[i];
		  i++;
	}
	//�ַ�����Ľ�β��\0 ��ʶ
    	str2[i]='\0';
       //��ӡ�ַ��ĳ���
	printf("�ַ�����ĳ���%d\n",i);

      //��ӡ�ַ����������
	for(int j=0;j<i;j++)
	{
		printf("%c",str2[j]);
	}
	printf("\n");
}