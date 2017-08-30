// Demo03.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "iostream.h"
#include <vector>
using namespace std;

void main()
{
	//生成对象并添加内容
	vector<int> intlist;
	int i;
	intlist.push_back(1);//在尾部添加内容
	intlist.push_back(2);

	intlist.push_back(3);
    intlist.push_back(4);
    intlist.push_back(5);
	
	//通过下标的形式进行输出
	for(i=0;i<5;i++)
	{
		cout<<intlist[i]<<"\t";
	}
	cout<<endl;
	

	//通过下标的形式修改数据
	for(i=0;i<5;i++)
	{
		intlist[i]*=2;
	}
	cout<<endl;

	//继续进行输出
	for(i=0;i<5;i++)
	{
		cout<<intlist[i]<<"\t";
	}
	cout<<endl;

	//迭代进行输出
	vector<int>::iterator it;
	for(it=intlist.begin();it!=intlist.end();++it)
	{
		cout<<*it<<"\t";
	}
	cout<<endl;
//找到链表的开始部分
	it=intlist.begin();
	//迭代下移
	++it;
	++it;
	//添加数据
	intlist.insert(it,66);
	++it
	intlist.insert(it,666);
	//
	for(it=intlist.begin();it!=intlist.end();++it)
	{
		cout<<*it<<"\t";
	}
	cout<<endl;
}
