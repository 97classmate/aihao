// Demo10.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

class A
{
};
class B
{
};
class C
{
};
//���̳У����̳�һ����
class D:public A
{};

//��̳У��Ӷ��������������
class E:public B,public C,public D
{
};

void main()
{

}