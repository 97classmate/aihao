// Demo22.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "iostream.h"

//һ�������α��̳У�����ͨ����̳е���ʽ���ڴ���ֻ��һ�ݿ������򲻻�����������࣬�����ж����Ե�����
class A
{
public:
	void f()
	{
		cout<<"aaaaaaaa"<<endl;
	}
};

class B:virtual  public A
{

};

class C:virtual public A 
{
};

class D:public B,public C
{

};

void main()
{
	D d;
	d.f();
}