// Demo07.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "iostream.h"

class Father
{
public:
	virtual void play()
	{
	cout<<"���װ�������"<<endl;
	}
};
class Son1:public Father
{
public:
	void play()
	{
		cout<<"����1�������"<<endl;
	}

};
class Son2:public Father
{
public:
	void play()
	{
		cout<<"����2:������"<<endl;
	}
};
 
class Son3:public Father
{
public:
	void play()
	{
		cout<<"����:������"<<endl;
	}
};

class Sport
{
public:
	void actin(Father *f)
	{
		f->play();
	}
};

void main()
{
	Father f;
	Son1 son1;
	Son2 son2;
	Son3 son3;

	Sport s;
	s.actin(&f);
	s.actin(&son1);
	s.actin(&son2);
	s.actin(&son3);
}