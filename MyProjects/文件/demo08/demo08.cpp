// demo08.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "stdlib.h"
//��ʽ��д���ļ�����ʽ�������ļ�


//��д�Ľṹ
struct Student
{
	char name[20];
	int num;
	int age;
	char addr[40];
};

//s1--��Ҫ��������ݣ�  s2--->�������ݵĴ��λ�� p1--->�����ָ�����   p2--->�����ָ�����
Student s1[2],s2[2],*p1,*p2;

void main()
{
	FILE *fp;
	char ch;
	int i;

	//�ֱ���P1ָ��s1��p2ָ��s2
	p1=s1;
	p2=s2;

	//���ļ�
	if((fp=fopen("aaa","wb+"))==NULL)
	{
		printf("�����ļ�ʧ��\n");
		getchar();
		exit(1);
	}

	//�Ӽ������������ݣ������--��---��s1
	for(i=0;i<2;i++)
	{
		scanf("%s%d%d%s",&p1->name,&p1->num,&p1->age,p1->addr);
		p1++;//ע��p1++,����ֻд���һ��
	}
	//��p1����ָ������ĵ�һ��Ԫ��
	p1=s1;
	//��ʽ��д���ļ�
	for(i=0;i<2;i++)
	{ 
		fprintf(fp,"%s %d %d %s\n",p1->name,p1->num,p1->age,p1->addr);
		p1++;//��P1����д���ļ���
	}
	 

	//��λ�ļ�λ��ָ��
	rewind(fp);

	//ѭ����������  ע��name��ADDR�ĸ�ֵ
	for(i=0;i<2;i++)
	{
		fscanf(fp,"%s %d %d %s\n",p2->name,&p2->age,&p2->num,p2->addr);
		p2++;
	}

	//���¶�λ
	p2=s2;
	//ѭ�����s2���������
	for(i=0;i<2;i++)
	{
		printf("%s:%d:%d:%s\n",p2->name,p2->age,p2->num,p2->addr);
		p2++;
	}
     
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