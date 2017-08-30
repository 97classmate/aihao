// Demo01.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "iostream.h"
#include <list>
using namespace std;

void main()
{

	list<char> coll;//生成对象
	//循环添加内容
	for(char c='a';c<='z';c++)
	{
		// 在尾部追加元素
		coll.push_back(c);
	}

	//empty判断list是不是空的
	while(!coll.empty())
	{
		//feont返回第一个元素
		cout<<coll.front()<<"\t";
		//删除第一个元素，但是不返回第一个元素
		coll.pop_front();
	}
	cout<<endl;
}