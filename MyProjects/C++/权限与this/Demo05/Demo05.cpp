// Demo05.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "iostream.h"

//������ʽ���ࣺ��һ��ͨ��������ʣ��ڶ��ּ̳з���

//������ʽ���ࣺ��һ���ڱ����ڲ����ʣ��ڶ��֣�����������ʣ������֣������������,�����֣�ȫ�ֺ�������

//private:��Զ�����ڱ����ڲ�����
//protected:��������ͱ����ڲ����з���
//puvlic:�ڱ��������࣬�����࣬ȫ�ֺ����ж����Է���

class Father
{
public:
	void f1()
	{
		cout<<"���׵�����"<<endl;
	}

protected:
	void f2()
	{
		cout<<"���׵Ĵ��"<<endl;
	}

private:
	void f3()
	{
		cout<<"���׵���˽"<<endl;
	}
};

class Son: public Father
{
public: 
	void f4()
	{
		f1();
		f2();
		//f3();���Ӳ����Ե��ø��׵���˽
	}
};

void main()
{
	Father f;
	Son son;
	f.f1();
	son.f4();
}
