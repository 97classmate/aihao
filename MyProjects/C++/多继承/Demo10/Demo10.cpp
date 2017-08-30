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

//D类中的public 成员有4个,f1 f4 f7 fa
//D类中的protected 有4个 f2 f6 f8 fb
//D类中的private 有1个 fc
class D:public A,public B,public C
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

void main()
{
	D d;
	d.f1();
	d.f4();
	d.f7();
	d.fa();
	
}