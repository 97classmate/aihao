// Demo08.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "fstream.h"
#include "stdlib.h"
//���ɽṹ�����
struct Student
{
	char name[20];
	char sex[20];

	int age;

};

void main()
{
	//����Ҫ����Ľṹ������������ע����const
	const int num=5;


	//ѧ���������
	Student stu[num];
	//�ļ�д����
	ofstream fout;
	int i;
	// ���ļ�
	fout.open("stu.txt");
	//�����ʧ�ܵĻ�
	if(fout.fail())
	{
		cout<<"���ļ�ʧ��"<<endl;
		exit(0);
	}

	//ѭ��д��ṹ���鲢���д���
	for( i=0;i<num;i++)
	{
		//д��ṹ������
		cout<<"���� ";
		cin>>stu[i].name;
		cout<<"�Ա� ";
		cin>>stu[i].sex;
		cout<<"���� ";
		cin>>stu[i].age;

		//���д洢
		fout<<stu[i].name<<endl;
		fout<<stu[i].sex<<endl;
		fout<<stu[i].age<<endl;
	}

	//�ļ��ر�
	fout.close();
	
}