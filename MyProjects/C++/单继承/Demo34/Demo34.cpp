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

//˽�м̳в���ʹ�ã����м̳п���ʹ�ã��༶�̳е����
void main()
{
	C c;
	//C.f1();
}