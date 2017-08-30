// Demo25.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "iostream.h"
class A
{
private:
	int x;
	int y;
public:
	A(){}
	A(int x,int y)
	{
		this->x=x;
		this->y=y;
	}
	void  disp()
	{
		cout<<x<<":"<<y<<endl;
	}

	void f1()
	{
		cout<<"111111111111"<<endl;
	}
protected:
	void f2()
	{
		cout<<"2222222222222"<<endl;
	}
};

//如果是public继承的话，则子类对象可以直接调用父类的public成员，单不能调用父类的protected成员
class B:public A
{
	int m;
	int n;
public:
	B(){}
	/*B(int x,int y,int m,int n):A(x,y)//参数化列表
	{
		this->m=m;
		this->n;

	}*/
	//和上面的构造函数是等价的

	B(int x,int y,int m,int n):A(x,y),m(m),n(n)
	{
	}
	void disp()
	{
		A::disp();//调用基类的打印函数
		cout<<m<<":"<<n<<endl;
	}

	void f3()
	{
		cout<<"3333333333333"<<endl;
	}

	void f4()
	{
		f1();
		f2();
	}
};


void main()
{
	B b(1,2,3,4);
	b.f3();
	b.f4();
	b.disp();
}