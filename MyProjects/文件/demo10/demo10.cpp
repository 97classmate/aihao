// demo10.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "stdlib.h"


//��һ���жϺ���������Ҫ��ε���
void judge(int id)
{
	if(id>1)
		printf("�ļ�����\n");
	else
		printf("�ļ�û�н���\n");
}

void main()
{
	//�����ļ��Ľṹָ��
	FILE *fp;
	//�Զ�����ʽ��ʼ����
	fp=fopen("Readme.txt","r");
	//�ж��Ƿ�����
	if(fp==NULL)
	{
		printf("���ļ�ʧ��\n");
		getchar();
		exit(1);
	}
	 //�ж��ļ�ָ���Ƿ����
	int id=feof(fp);
	judge(id);
	//��λ֮������ж�
	fseek(fp,0,SEEK_END);
	id=feof(fp);
	judge(id);

	//���ļ�ָ�붨λ���ļ����ʼλ��
	fseek(fp,0,SEEK_SET);
	char ch;
	ch=fgetc(fp);
	//ѭ�������ļ����ݣ���ȡ��������������ж�
	while(ch!=EOF)
	{
		putchar(ch);
		ch=fgetc(fp);
	}
		id=feof(fp);
		judge(id);
}












