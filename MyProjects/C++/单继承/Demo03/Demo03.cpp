// Demo03.cpp : Defines the entry point for the console application.
//


#include "stdafx.h"
#include "iostream.h"


//˽�м̳д����Űѻ����public��Protected��Ա�����������private����
class A
{
public:
	
		void f1()
		{
			cout<<"��������������"<<endl;
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

class B: private A
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

class C:public B
{
};

void main()
{
	 B b;
	 b.f4();
	// b.f1();
}

