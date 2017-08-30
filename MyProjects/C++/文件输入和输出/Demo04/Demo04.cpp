// Demo04.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <fstream.h>
#include<string.h>
#include <stdlib.h>
//结构体数组，存储信息
struct student
{
	char name[10];
	char sex[10];
	int age;
};


void main()
{
	//结构体对象，代表文件中的毎一个结构型的数据
	student std;
	//读文件对象
	ifstream fin;
	 //写文件对象
	ofstream fout;

	//输入将要删除的某一个的名字
	char name[10];
	cout<<"将要删除的名字"<<endl;
	cin>>name;

	//打开文件
	fin.open("student.dat");
	fout.open("temp.dat");


	//如果打开失败的话
	if(fin.fail()||fout.fail())
	{
		cout<<"文件打开失败"<<endl;
		exit(0);//无保存退出
	}

	//循环读入内容
	while(fin>>std.name>>std.sex>>std.age)
	{
		if(strcmp(name,std.name)!=0)
		{
			//如果不是哟啊删除的。则写入到TMP文件中
			fout<<std.name<<endl;
			fout<<std.sex<<endl;
			fout<<std.age<<endl;
		}
	}

  //关闭文件
	fin.close();
	fout.close();
	//删除tmp文件
	remove("student.dat");
	//修改文件名
	rename("temp.dat","student.dat");
}