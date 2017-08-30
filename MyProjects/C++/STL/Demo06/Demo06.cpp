// Demo06.cpp : Defines the entry point for the console application.
//
//倒入需要的头文件
#include "stdafx.h"
#include "iostream.h"
#include <vector>
#include <algorithm>

using namespace std;

void main()
{
	//生成动态数组的对象
	vector<int> v;
	//添加数据
	v.push_back(520);
	v.push_back(025);
	v.push_back(97);
	v.push_back(05);
	v.push_back(022);
	v.push_back(95);
	v.push_back(64);
	v.push_back(52);
	v.push_back(16);
	v.push_back(4);
	v.push_back(56);

	//迭代进行输出
	vector<int>::iterator it;
	cout<<"排序前的数据"<<endl;
	for(it=v.begin();it!=v.end();it++)
	{
		cout<<*it<<"\t";
	}
	cout<<endl;
	//进行排序
	sort(v.begin(),v.end());
		cout<<"打印一个排序后的数据"<<endl;
	for(it=v.begin();it!=v.end();it++)
	{
		cout<<*it<<"\t";
	}
	cout<<endl;
	sort(v.begin(),v.end());


}