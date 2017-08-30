// Demo05.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "iostream.h"
#include <vector>

using namespace std;



void disp(vector<int> &v)
{
	cout<<"是否为空"<<!v.empty()<<endl;
	cout<<"数据多少"<<v.size()<<endl;
	cout<<"容器的容量"<<v.capacity()<<endl;
	cout<<endl;
}

void main()
{
	//生成容量对象
	vector<int> v;
	cout<<"最大的数"<<v.max_size()<<endl;

	//显示属性
	disp(v);

	// 添加数据之后
	v.push_back(11);
	disp(v);
	//继续显示属性
	v.push_back(22);
	
	v.push_back(33);
		
	v.push_back(32);
	disp(v);

	//设置容器的容量
	v.push_back(33);
	disp(v);

}
