// Demo02.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "iostream.h"
//�Զ��忽�����캯��������������
class A
{
public:
	A(){}//���������Ĺ��캯��
	A(int x1,int y1)
	{
		x=x1;
		y=new int(y1);
	}

	void disp()
	{
		cout<<x<<":"<<*y<<endl;
	}
	
	A(A &a)
	{
		x=a.x;
		y=new int(*a.y);//����γ��µĿռ䣬��û�����������Բ����������
	}

     ~A()
	 {
		 if(y!=NULL)
		 {
			 delete y;//��������������ڵ�ʱ���ͷ��Լ���ռ�ݵ��ڴ�
			 y=NULL;
		 }
	 }


private:
	int x;

	int *y;
};

void main()
{
	A a1(1,2);
	a1.disp();

	A a2=a1;//A a2(a1);�ȼ۵� 
}
