// demo02.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "stdlib.h"
//�ļ���д����

void main()
{
	//�ļ�ָ��
	FILE *fp;
	char ch;
	//���ļ�
	if((fp=fopen("cc.txt","rt"))==NULL)//���ʧ�ܵĻ�
	{
		printf("��ʧ��\n");
		getchar();
		exit(1);//�����뿪
	}
	else//����ɹ��Ļ�
	{
		printf("�򿪳ɹ�!\n");
		printf("�ļ�����������...\n\n");
		ch=fgetc(fp);//��ȡ�ļ�����

		while(ch!=EOF)//EOF �����ļ�����
		{
			putchar(ch);//����Ļ�����
			ch=fgetc(fp);//��ȡ�ļ�����
		}
         printf("\n\n");
		//�ر��ļ�
		 int id=fclose(fp);
		 //���Ϊ0 ���Ǿ��ļ��ر�
			if(id==0)
			{
				printf("�ļ��ɹ��ر�\n");
			}
	}
}




