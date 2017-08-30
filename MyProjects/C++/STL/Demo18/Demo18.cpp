// Demo18.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>
using namespace std;

//add	的函数做为函数适配器使用
//add 函数的名字作为我们for_each函数的参数
void add(int &i)
{
	i=i+5;
}
//类对象作为函数适配器，必须重写()运算符
class Sub:public unary_function<int,void>
{
public:
	void operator()(int &i)
	{
		i=i-5;
	}
};

void main()
{
	// 生成数组对象
	int a[]={1,2,34,55,66,77,88};
	//把数据对象绑定到标准输出上 cout--》显示输出 _--->标准输出
	copy(a,a+10,ostream_iterator<int>(cout,"\t"));
	cout<<endl;

	for_each(a,a+10,add);//全局函数作为对象传递给for_each
	copy(a,a+10,ostream_iterator<int>(cout,"\t"));
	cout<<endl;
	
	for_each(a,a+10,Sub());
	copy(a,a+10,ostream_iterator<int>(cout,"\t"));
	cout<<endl;
}