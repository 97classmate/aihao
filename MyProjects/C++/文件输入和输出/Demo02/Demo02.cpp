// Demo02.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "iostream.h"
#include "stdio.h"

void main()
{
	FILE *file;
	//�������д�������
	char list[30];
	//�Ѷ��������ݷŵ�list��
	char list2[20];
    int i,mumerite;
	//��һ���ļ�
	file=fopen("fread.out","w+t");

	//��list�з�������
	for(i=0;i<20;i++)
	{
		list[i]=char('z'-i);
	}

	//��list����д���ļ���
	mumerite=fwrite(list,sizeof(char),20,file);
	cout<<"write"<<mumerite<<" nunber "<<endl;
	//�ر��ļ�
	fclose(file);

	// ���ļ�
	file=fopen("fread.out","r+t");

	//��ȡ�ļ����ݣ�����list��
	mumerite=fread(list2,sizeof(char),20,file);

	//����ռ�ϴ��������Ǵ����˽���
	list[20]='\0';
	//��ӡ�ļ�
	cout<<list2<<endl;

	//�ر��ļ�
	fclose(file);
}