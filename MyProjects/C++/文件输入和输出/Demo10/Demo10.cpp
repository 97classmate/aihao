// Demo10.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "fstream.h"
#include "stdlib.h"
//���ɽṹ��������Ϣ
struct  Student
{
	char name[20];
	char sex[20];
	int age;
};

void main()
{
	//���ɽṹ�����
	Student stu;
	//���ɶ�ȡ����
	ifstream fin;
	//���ļ�
	fin.open("std.txt");
	//�����ʧ�ܵĻ���
	if(fin.fail())
	{
		cout<<"���ļ�ʧ��"<<endl;
		exit(0);
	}

	//ѭ����ȡ����
	while(fin>>stu.name>>stu.sex>>stu.age)
	{
		cout<<stu.name<<":"<<endl;
		cout<<stu.sex<<":"<<endl;
		cout<<stu.age<<":"<<endl;
	}

	//�ر��ļ�
	fin.close();
}