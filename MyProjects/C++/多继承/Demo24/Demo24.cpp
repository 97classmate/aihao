// Demo24.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "iostream.h"

class Cloth1
{
private:
	/*
	ûһ���·�������Ϊһ����Ա����

	*/
public:
	void f1()
	{
		cout<<"(1)��ʽ"<<endl;
	}

	void f2()
	{
		cout<<"(2)��ϵ"<<endl;
	}
};

class Cloth2
{
private:
	/*
	��һ�������·�������Ϊ�����һ����Ա����

	*/
public:
	void f3()
	{
		cout<<"��ʽ"<<endl;
	}

	void f4()
	{
		cout<<"ŷ��Ӣ��"<<endl;
	}
};

class Cloth3
{
private:

public:
	void f5()
	{
		cout<<"������"<<endl;
	}

	void f6()
	{
		cout<<"����"<<endl;
	}
};

class Cloth4
{
private:

public:
	void f7()
	{
		cout<<"500-1000"<<endl;
	}

	void f8()
	{
		cout<<"1000-3000"<<endl;
	}
};

class Person:public Cloth1,public Cloth2,public Cloth3,public Cloth4
{

};

void main()
{
	Person *p=new Person();
	int x;
	cout<<"��!��������ϲ���Ŀ�ʽ��žͿ���ѡȡ��ӴQAQ!"<<endl;
	cin>>x;

	switch(x)
	{
	case 1://��������ı��
		p->f1();
		p->f2();
		break;
	case 2:
		p->f3();
		p->f4();
		break;
	case 3:
		p->f5();
		p->f6();
		break;
	case 4:
		p->f7();
		p->f8();
		break;
	}
	delete p;
}



