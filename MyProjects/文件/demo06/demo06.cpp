// demo06.cpp : Defines the entry point for the console application.
//
//���ļ�����д��������ȥ��fputs��
#include "stdafx.h"
#include "stdlib.h"

void main()
{
	//�����ļ�ָ��
	FILE *fp;
	char ch;
	//��Ҫд����ļ�����
	char *str="www.wangqingwen.com";
	//���ļ�
		if((fp=fopen("ReadMe.txt","at+"))==NULL)
		{
			printf("�ļ���ʧ��\n");
			getchar();
			exit(1);//ʧ���˳�
		}
		else//����򿪳ɹ��Ļ�
		{
			fputs(str,fp);// ���ַ���������д���ļ���
			rewind(fp);
			
			//ѭ����ȡ�ļ�����
			ch=fgetc(fp);
			while(ch!=EOF)
			{

				putchar(ch);
				ch=fgetc(fp);
			}
			printf("\n");
			//�ر��ļ�
			int id=fclose(fp);
			if(id==0)
			{
				printf("�رճɹ�\n");
			} 
		  else
		  {
			  printf("�ر�ʧ��\n");
		  }


		}
}

