// Demo13.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>
#include<vector>
#include<algorithm>
#include<functional>
#include<string>
using namespace std;
//����ѧ������
class Student
{
	string no;
	string name;
public:
	//�������캯��
	Student(string no ,string name)
	{
		this->no=no;
		this->name=name;
	}
	Student(){}
	bool show()
	{
		cout<<no<<":"<<name<<endl;
		return true;
	}
};

void main()
{
	//����һ������ָ�����
	Student s1("100", "����");
		Student s2("100", "����");
			Student s3("100", "����");
				Student s4("100", "����");
				//������������
	Student *p1=new Student("122","ada");
	Student *p2=new Student("123","adwwa");
	Student *p3=new Student("124","aa");
	Student *p4=new Student("125","adaw");
	
	vector<Student> v1;
	vector<Student*> v2;

	//��ѧ���ŵ������У�һ�������v1,ָ�������v2
	v1.push_back(s1);
	v1.push_back(s2);
	v1.push_back(s3);
	v1.push_back(s4);
	v2.push_back(p1);
	v2.push_back(p2);
	v2.push_back(p3);
	v2.push_back(p4);

	// ͨ��for_each���д�ӡ      
	for_each(v1.begin(),v1.end(),mem_fun_ref(Student::show));
	cout<<endl<<endl<<endl;
	//ָ���������ϵ   �������еĳ�Ա����
	for_each(v2.begin(),v2.end(),mem_fun(Student::show));
}

