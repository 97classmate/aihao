// Demo07.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "iostream.h"

class  Circle
{
	//Բ�Ļ������ԣ�Բ�ĵ�����Ͱ뾶
	int x;
	int y;
	int r;
public:

	//�����򵥵Ĺ��캯��
	Circle(){}
	Circle(int x,int y,int r)
	{
		this->x=x;
		this->y=y;
		this->r=r;
	}

	//������ܳ�����
	double around()
	{
		return 2*3.1415926*r;
	}
	double 3()
	{
		return 3.1415926*r;
	}

	void disp()
	{
		cout<<x<<":"<<y<<":"<<r<<":"<<around()<<":"<<area()<<endl;
	}
};
//Բ����̳���Բ
class Columm:public Circle
{
	//Բ����ĸ�
	int h;
public:
	//Բ����Ĺ��캯��
	Columm(){}
	//ͨ���������б���û���Ĺ��캯��
    Columm(int x,int y,int r,int h):Circle(x,y,r)
	{
		this->h=h;
	}

	//Բ����ı����
	double surface()
	{
		return 2*area()*h*around();
	}
 
	//Բ��������
	double v()
	{
		return area()*h;
	}
	
	void disp()
	{
		Circle::disp();
		cout<<surface()<<":"<<v()<<endl;
	}
};


void main()
{
    Columm c1(1,2,3,4);
	Columm c2(11,22,33,44);
	c1.disp();
	c2.disp();
}

