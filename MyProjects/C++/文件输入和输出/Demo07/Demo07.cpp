// Demo07.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "fstream.h"

#include "stdlib.h"

//以结构体为单位进行数据的读取
struct Student
{
	char name[10];
	char sex[10];
	int age;

};

void main()
{
	//数据单位对象
	Student stu;
	//读取对象
	ifstream fin;

	// 打开文件
	fin.open("std.txt");
	//如果打开失败的话
	if(fin.fail())
	{
		cout<<"文件打开失败"<<endl;
		exit(0);
	}

	//读取内容
	fin>>stu.name;
	fin>>stu.sex;
	fin>>stu.age;

	//输出文件内容
	cout<<stu.name<<endl;
	cout<<stu.sex<<endl;
	cout<<stu.age<<endl;

	fin.close();

}