// Demo12.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include<vector>
#include<algorithm>

using namespace std;

//STL模板内容的打印
template<class T>

void print(T& t)
{
	//通过迭代打印
	typename T::const_iterator pos;
	//循环进行
	for(pos=t.begin();pos!=t.end();++pos)
	{
		cout<<*pos<<"\t";
	}
	cout<<endl;
}
//对模板容器进行赋值
template <class T>
void insert(T& t,int from,int to)
{
	//循环赋值， from
	for(int i=from;i<=to;i++)
	{
		t.insert(t.end(),i);
	}
}
//生成模板类，对原始容器中的数据进行改变
template <class T>
 class A
{
private:
	T t;
public:
	// 拷贝构造函数
	A(const T& t)
	{
		this->t=t;
	}

	//防函数的形成，重载（）运算符，
	void operator()(T& t1)
	{
		t1=t;//修改原始的值，形成累加
	}
};

void main()
{
	//生成容器对象
		vector<int> v1;
	//加入数据	
		insert(v1,1,10);
		print(v1);
		//在for_each使用防函数
		for_each(v1.begin(),v1.end(),A<int>(10));
		print(v1);

		for_each(v1.begin(),v1.end(),A<int>(*v1.begin()));
		print(v1);
}