// Demo07.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "fstream.h"

#include "stdlib.h"

//�Խṹ��Ϊ��λ�������ݵĶ�ȡ
struct Student
{
	char name[10];
	char sex[10];
	int age;

};

void main()
{
	//���ݵ�λ����
	Student stu;
	//��ȡ����
	ifstream fin;

	// ���ļ�
	fin.open("std.txt");
	//�����ʧ�ܵĻ�
	if(fin.fail())
	{
		cout<<"�ļ���ʧ��"<<endl;
		exit(0);
	}

	//��ȡ����
	fin>>stu.name;
	fin>>stu.sex;
	fin>>stu.age;

	//����ļ�����
	cout<<stu.name<<endl;
	cout<<stu.sex<<endl;
	cout<<stu.age<<endl;

	fin.close();

}