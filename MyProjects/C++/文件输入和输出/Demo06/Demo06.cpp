// Demo06.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "fstream.h"
#include "stdlib.h"
//�ѽṹ����󱣴����ļ���
struct Student
{
	char name[20];
	char sex[20];
	int age;
};

void main()
{
	//����ѧ���Ľṹ�����
	Student stu;
	//����������ļ�����
	ofstream fout;
	//���ṹ�����ֵ
	cout<<"���� ";
	cin>>stu.name;
	cout<<"�Ա�: ";
	cin>>stu.sex;
	cout<<"����: ";
	cin>>stu.age;

	//���ļ�
	fout.open("std.txt");
	if(fout.fail())
	{
		cout<<"���ļ�ʧ��"<<endl;
	}

	//�ѽṹ�����ݱ�����ļ���
	fout<<stu.name<<endl;
	fout<<stu.sex<<endl;
	fout<<stu.age<<endl;
}