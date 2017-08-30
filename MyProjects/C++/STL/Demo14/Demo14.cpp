// Demo14.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
#include<algorithm>
#include<vector>

using namespace std;

//���ɻ�����ѧ������
class Student
{
private:
	string name;
public:
	string getName()
	{
		return name;
	}
	
	Student(string name)
	{
		this->name=name;
	}
	Student(){}
};
// ȫ�ֺ������Ƚ�ѧ�������ֵĳ���
bool shorter(Student &s1,Student &s2)
{
	return s1.getName().length()<s2.getName().length();
}


void main()
{
	// ����ѧ������
	Student s1("ww");
	Student s2("qq");
	Student s3("ferd");
	Student s4("wqe");
	Student s5("sde");
	Student s6("eere");

	//�����������������ѧ������
	vector<Student> v1;
	v1.push_back (s1);
	v1.push_back (s2);
	v1.push_back (s3);
	v1.push_back (s4);
	v1.push_back (s5);
	v1.push_back (s6);

	//�������е����ݽ�������
	sort(v1.begin(),v1.end(),shorter);
    //���ɵ���������������е�����
	vector<Student>::iterator  pos;
	//ѭ�����
	for(pos=v1.begin();pos!=v1.end();++pos)
	{
		cout<<pos->getName()<<"\t";
	}
	cout<<endl;
}