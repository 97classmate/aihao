// Demo25.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "iostream.h"
class A
{
private:
	int x;
	int y;
public:
	A(){}
	A(int x,int y)
	{
		this->x=x;
		this->y=y;
	}
	void  disp()
	{
		cout<<x<<":"<<y<<endl;
	}

	void f1()
	{
		cout<<"111111111111"<<endl;
	}
protected:
	void f2()
	{
		cout<<"2222222222222"<<endl;
	}
};

//�����public�̳еĻ���������������ֱ�ӵ��ø����public��Ա�������ܵ��ø����protected��Ա
class B:public A
{
	int m;
	int n;
public:
	B(){}
	/*B(int x,int y,int m,int n):A(x,y)//�������б�
	{
		this->m=m;
		this->n;

	}*/
	//������Ĺ��캯���ǵȼ۵�

	B(int x,int y,int m,int n):A(x,y),m(m),n(n)
	{
	}
	void disp()
	{
		A::disp();//���û���Ĵ�ӡ����
		cout<<m<<":"<<n<<endl;
	}

	void f3()
	{
		cout<<"3333333333333"<<endl;
	}

	void f4()
	{
		f1();
		f2();
	}
};


void main()
{
	B b(1,2,3,4);
	b.f3();
	b.f4();
	b.disp();
}