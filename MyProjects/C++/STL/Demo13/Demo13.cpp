// Demo13.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>
#include<vector>
#include<algorithm>
#include<functional>
#include<string>
using namespace std;
//生成学生对象
class Student
{
	string no;
	string name;
public:
	//基本构造函数
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
	//生成一般对象和指针对象
	Student s1("100", "张三");
		Student s2("100", "李四");
			Student s3("100", "王五");
				Student s4("100", "老六");
				//生成容器对象
	Student *p1=new Student("122","ada");
	Student *p2=new Student("123","adwwa");
	Student *p3=new Student("124","aa");
	Student *p4=new Student("125","adaw");
	
	vector<Student> v1;
	vector<Student*> v2;

	//把学生放到容器中，一般对象在v1,指针对象在v2
	v1.push_back(s1);
	v1.push_back(s2);
	v1.push_back(s3);
	v1.push_back(s4);
	v2.push_back(p1);
	v2.push_back(p2);
	v2.push_back(p3);
	v2.push_back(p4);

	// 通过for_each进行打印      
	for_each(v1.begin(),v1.end(),mem_fun_ref(Student::show));
	cout<<endl<<endl<<endl;
	//指针进行着联系   调用类中的成员函数
	for_each(v2.begin(),v2.end(),mem_fun(Student::show));
}

