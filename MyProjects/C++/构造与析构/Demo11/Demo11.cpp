// Demo11.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "iostream.h"
class A
{
public:
	~A()
	{
		cout<<"析构"<<endl;
	}
};
void main()
{
	A a;//一般对象则在结束生命周期的时候调用析构函数
	A *p=new A;
	delete p;//析构一个对象的时候，如果是指针对象，调用delet，则马上调用析构函数
	cout<<"111111111"<<endl;
	cout<<"2222222222222"<<endl;
}