// Demo04.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "iostream.h"

class people
{
public:
	virtual void zc()
	{
		cout<<"û��ְ��"<<endl;
	}
};

class ZJ:public people
{
public:
	void zc()
	{
		cout<<"һ�����ʦ"<<endl;
	}
};

class JS:public people
{
public:
	void zc()
	{
		cout<<"�߼���ʦ"<<endl;
	}
};

class Jiaoshou:public people
{
public:
	void zc()
	{	
		cout<<"����"<<endl;

	}

};

class School
{
public://�û����ָ��ָ��ͬ������Ķ��󣬶�̬����
	void bangongshi(people *p)
	{
		p->zc();
	}
};


void main()
{
	ZJ zj;
	JS js; 
	Jiaoshou qs;
	School s;

	s.bangongshi(&zj);
	s.bangongshi(&js);
	s.bangongshi(&qs);
	
}