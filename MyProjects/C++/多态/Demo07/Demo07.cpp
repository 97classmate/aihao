// Demo07.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "iostream.h"

class Father
{
public:
	virtual void play()
	{
	cout<<"¸¸Ç×°®´òÀºÇò"<<endl;
	}
};
class Son1:public Father
{
public:
	void play()
	{
		cout<<"¶ù×Ó1£º°®ÅÝæ¤"<<endl;
	}

};
class Son2:public Father
{
public:
	void play()
	{
		cout<<"¶ù×Ó2:°®»¬°å"<<endl;
	}
};
 
class Son3:public Father
{
public:
	void play()
	{
		cout<<"¶ù×Ó:°®³ª¸è"<<endl;
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