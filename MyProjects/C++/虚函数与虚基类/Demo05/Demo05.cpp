// Demo05.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "iostream.h"

class Todaywangqingwen
{
public:
	virtual void f1()=0;
	
};

class Todaywangqingwen1:public Todaywangqingwen
{
public:
	void f1()
	{
		cout<<"111"<<endl;
	}
};

void main()
{
	Todaywangqingwen1 YES;
	YES.f1();
}