// Demo03.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "iostream.h"
//模板类型的定义
template <class T>

//模板类的定义
class a
{
private:
	T a;//指明模板类型
public:
	A(T a1)
	{
		a=a1;
	}

	//模板类成员函数的声明
	void operator++();
	void print()
	{
		cout<<a<<endl;
	}
};

//模板类成员函数的定义，必须在前面指明模板类型
template <class T>

void A<T>::operator ++()
{
	a=a++;
}

void main()
{
	//在声明对象的时间，必须指明类型
	A<char> a1('c');
	a1++;//调用重载的++运算符
	a1.print();

	A<int> a2(33);
	a2++;
	a2.print();
}
