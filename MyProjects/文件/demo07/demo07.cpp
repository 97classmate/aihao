// demo07.cpp : Defines the entry point for the console application.
//

//����ͨ��������ṹ���������ݣ�Ȼ����뵽�ļ��У�Ȼ����ļ��ж�����������ʾ������ʾ

//ѧ���ṹ��
#include "stdafx.h"
#include "stdlib.h"
struct Student
{
	char name[10];
	int num;
	int age;
	char addr[40];

};

//ѧ������ ��S1-->�Ѽ��̵����ݴ��뵽S1�У�s2,���ļ������ݶ��뵽S2��
//p1-->s1�����ָ����� p2-->�����ָ�����
Student s1[2],s2[2],*p1,*p2;

void main()
{
	//�ļ�ָ��
	FILE *fp;
	char ch;
	int i;
	p1=s1;
	p2=s2;

	if((fp=fopen("wangqqinwen.txt","wb+"))=NULL)
	{
		printf("��ʧ��\n");
		getchar();
		exit(1);
	}
//��ṹ������������
	for(i=0;i,2;i++)
	{
		scanf("%s%d%d%s",p1->name,p1->num,p1->age,p1->addr);
		p1++;
	}
	
	//��P1ָ���������ʼλ��
	p1=s1;
	// �����������д�뵽�ļ���
	fwrite(p1,sizeof(Student),2,fp);
	 //���ļ�ָ�붨λ���ļ�����ǰ��
	rewind(fp);
//���ļ��ж�ȡ���飬д��ṹ����
	fread(p2,sizeof(Student),2,fp);
	//ѭ������ṹ�������е�����
	for(i=0;i<2;i++)
	{
		printf("%s%d%d%s\n",p2->name,p2->num,p2->age,p2->addr);
		p2++;

	}
	//�ر��ļ�
	int id=fclose(fp);
	//�жιر�״̬
	if(id=0)
	{
		printf("�رճɹ�\n");

	}
	else
	{
		printf("�ر�ʧ��\n");
	}
}