// demo05.cpp : Defines the entry point for the console application.
//
//�ļ����ݶ��뵽������ȥ
#include "stdafx.h"
#include "stdlib.h"

//���ļ������ݶ��뵽�ַ�����
void main()
{
	FILE *fp;
	char str[50];
	//�����ļ�ָ�����
	if((fp=fopen("ReadMe.txt","rt"))==NULL)//���Ϊ�յĻ�
	{
		printf("���ļ�ʧ��\n");
		getchar();
		exit(1);
	}
	else
	{
		//��ȡ
		fgets(str,50,fp);
		//��ʾ
		printf("\n%s\n",str);
		//�ļ��ر�
		int id=fclose(fp);
		if(id!=0)
		printf("�ر�ʧ��\n");
		else
			printf("�رճɹ�\n");
	}
}
