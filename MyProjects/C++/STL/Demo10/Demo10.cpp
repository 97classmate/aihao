// Demo10.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <list>
#include <algorithm>
#include <vector>

using namespace std;

void main()
{
	//声明对象并放入内容
	list<int> ilist;
	for(int i=0;i<20;i++)
	{
		ilist.push_back(i);
		cout<<i<<"\t";
	}

	cout<<endl;

	//通过迭代进行查找
	list<int>::iterator it;
	//把迭代指针放在开始的位置
	it=ilist.begin();
	//移动迭代指针
	advance(it,15);
	cout<<*it<<endl;

	advance(it,2);
	cout<<*it<<endl;

	advance(it,10);
	cout<<*it<<endl;
}