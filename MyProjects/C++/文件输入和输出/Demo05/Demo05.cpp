// Demo05.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "fstream.h"
#include "string.h"
#include "stdlib.h"


//学生信息结构
struct student
{
	char name[20];
	char sex[20];
	int age;
};

void main()
{
	//学生对象
	struct student stu;
	// 文件对象
	ifstream fin;
	char name[20];

	//输入要查找的学生
	cout<<"请输入要查找的学生的编号:"<<endl;
	cin>>name;

		// 打开文件并判断是否打开成功
	fin.open("wang01.dat");
	if(fin.fail())
	{
		cout<<"打开失败哦！亲"<<endl;
		exit(0);
	}

	//循环读出文件内容
	while(fin>>stu.name>>stu.sex>>stu.age)
	{
		//如果查找找到学生的话，则进行打印
		if(strcmp(stu.name,name)==0)
		{
			cout<<"该学生信息如下"<<endl;
			cout<<"姓名:"<<stu.name<<endl;
			cout<<"性别:"<<stu.sex<<endl;
			cout<<"年龄:"<<stu.age<<endl;
			

			//查找到后并退出或关闭
			fin.close();
			exit(0);
		}
	}

	cout<<"没有该人信息，请重新查找"<<endl;
	fin.close();

}