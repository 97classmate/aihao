// Demo04.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "iostream.h"
//��д������
class Wang
{
public:
	void f()
	{
		cout<<"ǰ����"<<endl;
	}
};

class LiaoLingHao:public Wang
{
public:
	void f()
	{
		cout<<"�����������"<<endl;
	}
};

void main()
{
	Wang w;
	w.f();
	LiaoLingHao l;
	l.f();
}