// demo03.cpp : Defines the entry point for the console application.
//
//д���ݵ��ļ���ȥ����
#include "stdafx.h"
#include "stdlib.h"
void main()
{
	//�����ļ�ָ�����
	FILE  *fp;
	char ch;

	//���ļ�
	if((fp=fopen("cc.txt","wt"))==NULL)//����򿪲��ɹ��Ļ�
	{
		printf("�ļ���ʧ��\n");
		getchar();
		exit(1);//�����˳�
	}
	else//����ɹ��Ļ�
	{
		printf("������һ���ַ�\n");
		ch=getchar();//��ȡ�ļ�����

	
		//ѭ�����������д�ļ���
		while(ch!='\n')
		{
			fputc(ch,fp);
			ch=getchar();
		}

		//���ļ�ָ�붨λ���ļ��Ŀ�ʼλ��
		rewind(fp);
		//�����ļ����ݣ�����Ļ�Ͻ��д�ӡ
		ch=fgetc(fp);//��ͷ��ʼ��ȡ
		while(ch!=EOF)//������ǽ����Ļ������������ȥ
		{
			putchar(ch);
			ch=fgetc(fp);
		}
		printf("\n");
		int id=fclose(fp);//�ر��ļ�
		if(id==0)
			printf("�ر��ļ��ɹ�");
	}
}
