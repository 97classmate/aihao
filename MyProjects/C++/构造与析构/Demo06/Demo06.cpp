// Demo06.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "iostream.h"

class A
{
public:
	int x;
	int y;
	A(int x1,int y1)
	{
		x=x1;
		y=y1;
	}
	A(){}//����һ���õ�ϰ��
	
	void setXY(int x1,int y1)
	{
		x=x1;
		y=y1;
	}
	void setX(int x1)
	{
		x=x1;
	}
	void setY(int y1)
	{
		y=y1;
	}

	void disp()
	{
		cout<<x<<":"<<y<<endl;
	}
		
};

void main()
{
	//���ɶ������ʽ������ȫ������ֱ�ӵ����˳�Ա����
	A a;
	a.x=3;
	a.y=4;
	a.disp();
//ͨ����Ա����������ֵ����������¿����������ۣ����Ѻ�
	A a2;
	a2.setX(3);
	a2.setY(4);
	a2.disp();
    
	//ͨ�����캯�����ɶ��󣬿��������ۡ��Ѻ�
	A a3(3,4);
	  a3.disp();

}






