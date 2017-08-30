// Demo34.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "iostream.h"

class A
{
public:
	void f1()
	{
		cout<<"111111111111111"<<endl;
	}
};

class B:private A
{
};

class C:public B
{

};

//私有继承不能使用，公有继承可以使用，多级继承的情况
void main()
{
	C c;
	//C.f1();
}