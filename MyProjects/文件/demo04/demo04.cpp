// demo04.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "stdlib.h"

void main()
{
	//�������ļ���д�ļ�
	FILE *readFile,*writeFile;
	char ch;

	//����2������
	readFile=fopen("dd.txt","rt");
	writeFile=fopen("ABC.txt","wt+");
	//�ж��Ƿ�򿪳ɹ�
	if(readFile==NULL)
	{
		printf("���ļ���ʧ��\n");
		getchar();
		exit(1);
	}
	if(writeFile==NULL)
	{
		printf("д�ļ���ʧ��\n");
		getchar();
		exit(1);
	}
//��ȡ�ļ����ݣ�д����һ��������
	printf("�ļ�������\n");
  while((ch=fgetc(readFile))!=EOF)
  {
	  //������Ļ��ʾ
	  putchar(ch);
	  fputc(ch,writeFile);
  }
  printf("\n");


  //�ر������ļ�
	int id1=fclose(readFile);
	int id2=fclose(writeFile);

	//�ж��Ƿ�رճɹ�
	if(id1!=0)
	{
		printf("���ļ��ر�ʧ��\n");
	}
	else
	{
		printf("���ļ��رճɹ�\n");
	}

	if(id2!=0)
	{
		printf("д�ļ���ʧ��\n");
	}
	else
	{
		printf("д�ļ��򿪳ɹ�\n");
	}


}