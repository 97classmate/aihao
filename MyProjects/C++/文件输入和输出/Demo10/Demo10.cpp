// Demo10.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "fstream.h"
#include "stdlib.h"
//生成结构体数组信息
struct  Student
{
	char name[20];
	char sex[20];
	int age;
};

void main()
{
	//生成结构体对象
	Student stu;
	//生成读取对象
	ifstream fin;
	//打开文件
	fin.open("std.txt");
	//如果打开失败的话，
	if(fin.fail())
	{
		cout<<"打开文件失败"<<endl;
		exit(0);
	}

	//循环读取内容
	while(fin>>stu.name>>stu.sex>>stu.age)
	{
		cout<<stu.name<<":"<<endl;
		cout<<stu.sex<<":"<<endl;
		cout<<stu.age<<":"<<endl;
	}

	//关闭文件
	fin.close();
}