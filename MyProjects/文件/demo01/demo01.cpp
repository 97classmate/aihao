// demo01.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "stdio.h"
#include "stdlib.h"
//�ļ��򿪺͹ر�����

void main()
{
	//�ļ�ָ��
	FILE *fp;

	//  fopen���ļ�   rt  ����ֻ���ǵ���ʽ
 	if((fp=fopen("cc.txt","rt"))==NULL)
	{
		printf("�Բ����ʧ��\n");
	  getchar();
	 exit(1);//�����뿪
	}
	else
	{
		printf("�򿪳ɹ�!\n");
	int r=fclose(fp);//�ر��ļ�
		if(r==0)
			printf("�ɹ��ر�!\n");//�ɹ��ر�

	}

}