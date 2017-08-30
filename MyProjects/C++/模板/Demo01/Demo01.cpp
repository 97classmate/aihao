// Demo01.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "iostream.h"

//，，模板类似的声明，用T作为万能类型

template <class T>

//在本例中,t代表了整数，浮点数，双精度的类似
T add(T a,T b)
{
	return a+b;
}

void main()
{
	int a1=3;
	int b1=4;
	float a2=3.12;
	float b2=4.44;
	double a3=3.111111111111;
	double b3=4.1314520;


	//模板函数可以被自动的调用，根据不同类型，进行相应的操作
	int c1=add(a1,b1);
	float c2=add(a2,b2);
	double c3=add(a3,b3);

	cout<<c1<<endl;
	cout<<c2<<endl;
	cout<<c3<<endl;
}
