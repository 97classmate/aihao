// Demo08.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <list>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;
//函数适配器，函数名作为另外函数的参数，该函数的参数由另外的函数进行提供
//注意适配器
bool divby5(int x)
{
	if(x%5==0)
		return true;
	else
		return false;
}

void main()
{
	//生成vector并填充数据
	vector<int> v(20);
	for(int i=0;i<v.size();i++)
	{
		v[i]=i+1;
		cout<<v[i]<<"\t";
	}
	cout<<endl;
	//生成迭代对象
	vector<int>::iterator it;

	//进行查找                            divby5 是函数适配器具体调用，该函数的参数来源于begin ,end
	it=find_if(v.begin(),v.end(),divby5);

/查找数据进行输出
	if(it!=v.end())
	{
		cout<<*it<<endl;
		cout<<it-v.begin()<<endl;

	}

}

