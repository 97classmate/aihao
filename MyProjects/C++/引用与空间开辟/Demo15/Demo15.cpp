// Demo15.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "iostream.h"
//�����õ�����
void main()
{
	int a=3;

	//������������Ҫ��const
      const int &b=4;
	  //a+1������ֳ�������ʽ
	  const int &c=a+1;
	  cout<<a<<":"<<b<<":"<<c<<endl;
}