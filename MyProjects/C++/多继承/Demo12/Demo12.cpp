// Demo10.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "iostream.h"

class A
{
public:
	void f1()
	{
		cout<<"aaaaaaaaaaaaaa"<<endl;
	}
protected:
	void f2()
	{
		cout<<"bbbbbbbbbbbbbbbb"<<endl;
	}
private:
	void f3()
	{
		cout<<"ccccccccccccccccccc"<<endl;
	}
};

class B
{
public:
	void f4()
	{
		cout<<"dddddddddddddddddddd"<<endl;
	}
protected:
	void f5()
	{
		cout<<"eeeeeeeeeeeeeeeeeeeeeeee"<<endl;
	}
private:
	void f6()
	{
		cout<<"fffffffffffffffffff"<<endl;
	}
};


class C
{
public:
	void f7()
	{
		cout<<"ggggggggggggggggggggggg"<<endl;
	}
protected:
	void f8()
	{
		cout<<"iiiiiiiiiiiiiiiiiiiii"<<endl;
	}
private:
	void f9()
	{
		cout<<"jjjjjjjjjjjjjjjjjjjjj"<<endl;
	}
};

//D类中的public 成员有1个, fa
//D类中的protected 有4个 f2 f5 f8 fb f1 f4 f7
//D类中的private 有1个 fc
class D:public A,protected B,protected C
{
public:
	void fa()
	{
		cout<<"kkkkkkkkkkkkkkkkkkkkkk"<<endl;
		
	}
protected:
	void fb()
	{
		cout<<"lllllllllllllllllllllllllb"<<endl;
	}
private:
	void fc()
	{
		cout<<"ssssssssssssssssssssssssss"<<endl;
	}
};

class E:public D
{
public:
	void ff()
	{
		f2();
		f5();
		f8();
		fb();
		f1();
		f7();
		f4();
	}
};

void main()
{
	E e;
	e.ff();
	
}