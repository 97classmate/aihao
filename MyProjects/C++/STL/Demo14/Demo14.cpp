// Demo14.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
#include<algorithm>
#include<vector>

using namespace std;

//生成基本的学生对象
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
// 全局函数，比较学生的名字的长短
bool shorter(Student &s1,Student &s2)
{
	return s1.getName().length()<s2.getName().length();
}


void main()
{
	// 生成学生对象
	Student s1("ww");
	Student s2("qq");
	Student s3("ferd");
	Student s4("wqe");
	Student s5("sde");
	Student s6("eere");

	//生成容器，并存放在学生对象
	vector<Student> v1;
	v1.push_back (s1);
	v1.push_back (s2);
	v1.push_back (s3);
	v1.push_back (s4);
	v1.push_back (s5);
	v1.push_back (s6);

	//对容器中的数据进行排序
	sort(v1.begin(),v1.end(),shorter);
    //生成迭代对象，输出容器中的数据
	vector<Student>::iterator  pos;
	//循环输出
	for(pos=v1.begin();pos!=v1.end();++pos)
	{
		cout<<pos->getName()<<"\t";
	}
	cout<<endl;
}