// Demo13.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "iostream.h"

//共享的例子

class A
{
public:
	int m;
	static int n;//静态成员的初始化必须放在外面

	A(int x)
	{
		m=x;
	}
	void disp()
	{
		cout<<m<<":"<<n<<endl;
	}
};
//类型   所属的类  ::  具体的值
int      A::n=2;


void main()
{
	A a1(3);
	a1.disp();

	A a2(33);
	a2.disp();
}