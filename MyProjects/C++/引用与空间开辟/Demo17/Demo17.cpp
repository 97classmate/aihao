// Demo17.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "iostream.h"
//��ַ���õ�����

void main()
{
	int a=3;
	// ��const�޶����ò������õ�ַ
      //const	int *&b=&a;
	  int * const &b=&a;
	  cout<<&a<<":"<<b<<endl;


	  //��cocst������ַ�����ý������˫const�����
	  const int x=3;
	  const int * const &y=&x;
	  cout<<y<<":"<<&x<<endl;

	  //ͨ����ʱ����ȥ���õ�ַ
	  const m=3;
	  const *p=&m;
	  const int *&p2=p;
	  cout<<*p2<<":"<<*p<<endl;

	  cout<<&m<<":"<<p<<endl;
}