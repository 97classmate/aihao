// Demo04.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "iostream.h"

#include <vector>
#include <algorithm>

using namespace std;

void main()
{
	int which=28;
	// 生成动态数组的对象
	vector<int> v;
	//存入内容
	for(int i=0;i<10;i++)
	{
		v.push_back(i=4);
	}

	//生成迭代对象，find函数的查找结果为迭代对象
	vector<int>::iterator it;
	//通过find进行查找
	it=find(v.begin(),v.end(),which);
	//看是否查找到，找到该值对应的下标
	if(it==v.end())
	{
		cout<<"没有索引的元素"<<endl;
	}
	else
	{
		cout<<"该索引对应的值为"<<it-v.begin()<<endl;
	}
}
