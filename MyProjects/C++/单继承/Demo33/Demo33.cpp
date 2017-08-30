// Demo33.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "iostream.h"

class A
{
public:
	void f1()
	{
		cout<<"111111111111"<<endl;
	}
protected:
	void f2()
	{
		cout<<"22222222222"<<endl;
	}
private:
	void f3()
	{
		cout<<"33333333333"<<endl;
	}
};


class B:private A
{
public:
	void f4()
	{
		cout<<"4444444444"<<endl;
	}
	
void f7()
	{
		f1();
		f2();
        f4();
		f5();
		f6();


	}


protected:
	void f5()
	{
		cout<<"5555555555555"<<endl;
	}

	
private:
	void f6()
	{
		cout<<"66666666666666666"<<endl;
	}
	/*
    private:
	void f1()
	{
		cout<<"111111111111"<<endl;
	}
 
	void f2()
	{
		cout<<"22222222222"<,endl;
	}

	*/
		

};


void main()
{
	B b;
	b.f7();
}