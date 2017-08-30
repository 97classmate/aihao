// 容器输出.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "iostream.h"
//导入STL的头文件
#include <list>
using namespace std;

void main()
{
	//生生STL的容器对象
	list <char> coll;
	//循环放入数值
	for(char c='a';c<='z';c++)
	{
		//存取数据
		coll.push_back(c);
	}

	//输出
	list<char>::const_iterator it;
	// 循环输出每个数据
	for(it=coll.begin();it!=coll.end();++it)
	{
		cout<<*it<<"\t";
		
	}
	cout<<endl;
}