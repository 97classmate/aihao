// Demo07.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "iostream.h"

//B �������
class B;

class A
{
public://����������Ԫ�����ԣ����е����г�Ա���������Է�����Ԫ���˽�в���
	void f1(B b);
	void f2(B b);
	void f3(B b);

};

class B
{
public:
	friend class A;//����B��A����Ԫ����A���п�Ժ����B���е��κ�˽�в���
	B(int a,int b)
	{
		x=a;
		y=b;
	}

private:
	int x;
	int y;
};

void A::f1(B b)
{
	cout<<b.x<<":"<<b.y<<endl;
}

void A::f2(B b)
{
	cout<<b.x<<":"<<b.y<<endl;
}
void A::f3(B b)
{
	cout<<b.x<<":"<<b.y<<endl;
}

void main()
{
	B b1(1,2);
	B b2(3,4);
	B b3(5,6);

	A a;
	a.f1(b1);
	a.f2(b2);
	a.f3(b3);



}


