// Demo07.cpp : Defines the entry point for the console application.
//

// Demo05.cpp : Defines the entry point for the console application.
//
#include "stdafx.h"
#include "iostream.h"
 

class A
{
public:
	
		void f1()
		{
			cout<<"°®°®°®°®°®°®Äã"<<endl;
		}
	

protected:

    	void f2()
		{
			cout<<"I love YOU"<<endl;
		}
	
private:
	void f3()
	{
		cout<<"5250520520520"<<endl;
	}
	
};

class B:protected A
{
public:

	void f4()
	{
		f1();
		f2();
	}
protected:

private:

};
//¶à´Îprotected´«µÝÐÔ
class C:protected B
{
public:
	void f5()
	{
		f1();
		f2();
	}
};


void main()
{
	B b;
	b.f4();
	//b.f1();


	C c;
	//c.f4();
	c.f5();

}