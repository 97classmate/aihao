// Demo11.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "fstream.h"
#include "stdlib.h"

void main()
{
	//要存储的数据
	char name[20];
	char sex[20];
	int age;

	//打开文件
	ofstream fout;
	//ios::app 可以形成追求的效果
	fout.open("stu.txt",ios::app);
	if(fout.fail())
	{
		cout<<"文件打开失败"<<endl;
		exit(0);
	}

	// 给数据赋值
	cout<<"请输入姓名:   ";
	cin>>name;
	cout<<"请输入性别:   ";
	cin>>sex;
	cout<<"请输入年龄:   ";
	cin>>age;

	//把数据写到文件中
	fout<<name<<endl;
	fout<<sex<<endl;
	fout<<age<<endl;

	//关闭文件
	fout.close();
}