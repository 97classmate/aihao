// Demo05.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "fstream.h"
#include "string.h"
#include "stdlib.h"


//ѧ����Ϣ�ṹ
struct student
{
	char name[20];
	char sex[20];
	int age;
};

void main()
{
	//ѧ������
	struct student stu;
	// �ļ�����
	ifstream fin;
	char name[20];

	//����Ҫ���ҵ�ѧ��
	cout<<"������Ҫ���ҵ�ѧ���ı��:"<<endl;
	cin>>name;

		// ���ļ����ж��Ƿ�򿪳ɹ�
	fin.open("wang01.dat");
	if(fin.fail())
	{
		cout<<"��ʧ��Ŷ����"<<endl;
		exit(0);
	}

	//ѭ�������ļ�����
	while(fin>>stu.name>>stu.sex>>stu.age)
	{
		//��������ҵ�ѧ���Ļ�������д�ӡ
		if(strcmp(stu.name,name)==0)
		{
			cout<<"��ѧ����Ϣ����"<<endl;
			cout<<"����:"<<stu.name<<endl;
			cout<<"�Ա�:"<<stu.sex<<endl;
			cout<<"����:"<<stu.age<<endl;
			

			//���ҵ����˳���ر�
			fin.close();
			exit(0);
		}
	}

	cout<<"û�и�����Ϣ�������²���"<<endl;
	fin.close();

}