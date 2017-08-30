// Demo08.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "fstream.h"
#include "stdlib.h"
//生成结构体对象
struct Student
{
	char name[20];
	char sex[20];

	int age;

};

void main()
{
	//定义要保存的结构体对象的数量，注意是const
	const int num=5;


	//学生数组对象
	Student stu[num];
	//文件写对象
	ofstream fout;
	int i;
	// 打开文件
	fout.open("stu.txt");
	//如果打开失败的话
	if(fout.fail())
	{
		cout<<"打开文件失败"<<endl;
		exit(0);
	}

	//循环写入结构数组并进行储存
	for( i=0;i<num;i++)
	{
		//写入结构体数据
		cout<<"姓名 ";
		cin>>stu[i].name;
		cout<<"性别 ";
		cin>>stu[i].sex;
		cout<<"年龄 ";
		cin>>stu[i].age;

		//进行存储
		fout<<stu[i].name<<endl;
		fout<<stu[i].sex<<endl;
		fout<<stu[i].age<<endl;
	}

	//文件关闭
	fout.close();
	
}