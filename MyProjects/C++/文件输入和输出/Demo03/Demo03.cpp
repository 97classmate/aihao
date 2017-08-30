// Demo03.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <fstream.h>
#include <stdlib.h>

void main()
{
	int age;
	char name[10];
	char sex[20];

	ifstream fin;

	fin.open("student.data");
	if(fin.fail())
	{
		cout<<"文件打开失败"<<endl;
		exit(0);
	}

	fin>>name;
	fin>>sex;
	fin>>age;

	cout<<name<<endl;
	cout<<age<<endl;
	cout<<sex<<endl;
	fin.close();
}