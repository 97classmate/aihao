// Demo11.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "fstream.h"
#include "stdlib.h"

void main()
{
	//Ҫ�洢������
	char name[20];
	char sex[20];
	int age;

	//���ļ�
	ofstream fout;
	//ios::app �����γ�׷���Ч��
	fout.open("stu.txt",ios::app);
	if(fout.fail())
	{
		cout<<"�ļ���ʧ��"<<endl;
		exit(0);
	}

	// �����ݸ�ֵ
	cout<<"����������:   ";
	cin>>name;
	cout<<"�������Ա�:   ";
	cin>>sex;
	cout<<"����������:   ";
	cin>>age;

	//������д���ļ���
	fout<<name<<endl;
	fout<<sex<<endl;
	fout<<age<<endl;

	//�ر��ļ�
	fout.close();
}