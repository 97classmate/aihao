// Demo02.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "iostream.h"
#include "stdio.h"

void main()
{
	FILE *file;
	//向数组中存入内容
	char list[30];
	//把读出的内容放到list中
	char list2[20];
    int i,mumerite;
	//打开一个文件
	file=fopen("fread.out","w+t");

	//向list中放入内容
	for(i=0;i<20;i++)
	{
		list[i]=char('z'-i);
	}

	//把list内容写到文件中
	mumerite=fwrite(list,sizeof(char),20,file);
	cout<<"write"<<mumerite<<" nunber "<<endl;
	//关闭文件
	fclose(file);

	// 打开文件
	file=fopen("fread.out","r+t");

	//读取文件内容，放入list中
	mumerite=fread(list2,sizeof(char),20,file);

	//数组空间较大，所以我们处理了结束
	list[20]='\0';
	//打印文件
	cout<<list2<<endl;

	//关闭文件
	fclose(file);
}