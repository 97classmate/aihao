// Demo14.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "iostream.h"

class A
{
public:
	int m;
	const static int n;
	static const int x;


	A(int x)
	{
		m=x;
	}

	void disp()
	{
		cout<<m<<":"<<n<<":"<<x<<endl;
	}
};
     //const static 和static const成员的初始化是一样的
     //书写形式是一样的
     const  int A::n=2;
	 const int A::x=222;

   void main()
{
	A a1(3);
	a1.disp();

}