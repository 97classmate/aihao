// Demo28.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "iostream.h"

class A
{
public:
	void f1()
	{
		cout<<"111111111111111111"<<endl;
	}
protected:
	void f2()

	{
		cout<<"2222222222222222222"<<endl;
		f3();
	}
private:
	void f3()
	{
		cout<<"3333333333333333333333"<<endl;
	}
};
//�����ܱ����ļ̳�

class B:protected A
{
public:
	void f4()
	{
		cout<<"4444444444444444444444"<<endl;
	}
	 void f7()
	  {
		  f1();//f1 f2�Ǽ̳й�����
		  f2();
		  f5();
		  f6();
	 }
protected:
      void f5()
		{
		cout<<"555555555555555555555555"<<endl;
		}

	  
private:
	void f6()
	{
		cout<<"666666666666666"<<endl;
	}
};




void main()
{
	B b;
	b.f4();
	b.f7();
}