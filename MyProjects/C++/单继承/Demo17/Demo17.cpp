// Demo17.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

//����������Ѿ�д�˹��캯���������������������ɲ��������Ĺ��캯��
class A
{
public:
	A(int x)
	{}
	A(){}
};
//������Ĳ��������Ĺ��캯������û���Ĳ��������Ĺ��캯����������Ѿ�д�˹��캯���������н���������Ĭ�ϵĲ��������Ĺ��캯��
//����������������಻�������Ĺ��캯������ʱ�䣬���׳���
class B:public A
{

};

void main()
{
	B b;
}