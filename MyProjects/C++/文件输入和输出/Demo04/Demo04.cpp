// Demo04.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <fstream.h>
#include<string.h>
#include <stdlib.h>
//�ṹ�����飬�洢��Ϣ
struct student
{
	char name[10];
	char sex[10];
	int age;
};


void main()
{
	//�ṹ����󣬴����ļ��еĚ�һ���ṹ�͵�����
	student std;
	//���ļ�����
	ifstream fin;
	 //д�ļ�����
	ofstream fout;

	//���뽫Ҫɾ����ĳһ��������
	char name[10];
	cout<<"��Ҫɾ��������"<<endl;
	cin>>name;

	//���ļ�
	fin.open("student.dat");
	fout.open("temp.dat");


	//�����ʧ�ܵĻ�
	if(fin.fail()||fout.fail())
	{
		cout<<"�ļ���ʧ��"<<endl;
		exit(0);//�ޱ����˳�
	}

	//ѭ����������
	while(fin>>std.name>>std.sex>>std.age)
	{
		if(strcmp(name,std.name)!=0)
		{
			//�������Ӵ��ɾ���ġ���д�뵽TMP�ļ���
			fout<<std.name<<endl;
			fout<<std.sex<<endl;
			fout<<std.age<<endl;
		}
	}

  //�ر��ļ�
	fin.close();
	fout.close();
	//ɾ��tmp�ļ�
	remove("student.dat");
	//�޸��ļ���
	rename("temp.dat","student.dat");
}