// Demo09.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <list>
#include <vector>
#include <algorithm>
#include "string.h"
#include "stdlib.h"

using namespace std;
//相等代表的含义是，内容和次序的双重相等
void main()
{
	//生成对象并放入n内容
	vector<int> v1;

	for(int i=0;i<10;i++)
	{
		v1.push_back(i);
		cout<<v1[i]<<"\t";
	}

	vector<int> v2;

	for(i=0;i<5;i++)
	{
		v2.push_back(i+2);
			cout<<v2[i]<<"\t";
	}

	vector<int>::iterator it;
	// 进行查找并返回结果
	it=search(v1.begin(),v1.end(),v2.begin(),v2.end());

	//如果没有末尾的话，则返回相等匹配开始的地方
    if(it!=v1.end())
	{
		cout<<it-v1.begin()<<endl;
	}

	//没有匹配成功
	else
	{
		cout<<"没有包含元素"<<endl;
	}
}

