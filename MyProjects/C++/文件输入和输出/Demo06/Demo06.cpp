// Demo06.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "fstream.h"
#include "stdlib.h"
//把结构体对象保存在文件中
struct Student
{
	char name[20];
	char sex[20];
	int age;
};

void main()
{
	//生成学生的结构体对象
	Student stu;
	//生成输出的文件对象
	ofstream fout;
	//给结构体对象赋值
	cout<<"名字 ";
	cin>>stu.name;
	cout<<"性别: ";
	cin>>stu.sex;
	cout<<"年龄: ";
	cin>>stu.age;

	//打开文件
	fout.open("std.txt");
	if(fout.fail())
	{
		cout<<"打开文件失败"<<endl;
	}

	//把结构体数据保存打文件中
	fout<<stu.name<<endl;
	fout<<stu.sex<<endl;
	fout<<stu.age<<endl;
}