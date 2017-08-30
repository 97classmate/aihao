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

class B: public A
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
//¶à´Îpublic´«µÝÐÔ
class C:public B
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
	b.f1();


	C c;
	c.f5();
	c.f1();

}