// Demo01.cpp : Defines the entry point for the console application.
//
//public�̳�����
#include "stdafx.h"
#include "iostream.h"

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
//���м̳д���ѻ����public�����������public���棬�ѻ����protected��Ա����������protected�ܱ���������
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
void main()
{
	B b;
	b.f4();
	b.f1();
}