// Demo02.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "iostream.h"

class A
{
public:
	int x;
	int y;
};

void main()
{
	//一般变量空间的开辟和释放
	int *p=new int;
	char *c=new char;

	delete p;
	delete c;

     //数组的开辟和释放
	int *p2=new int[10];
	for(int i=0;i<10;i++)
	{
		p2[i]=i*2;
		cout<<p2[i]<<"\t";
	}
	cout<<endl;
	delete []p2;

	//对象的开辟和释放
	A *pa=new A();
	pa->x=3;
	pa->y=4;
	cout<<pa->x<<":"<<pa->y<<endl;

	//对象数组的开辟和释放
	A *pb=new A[10];
	delete pa;
	delete []pb;
}




