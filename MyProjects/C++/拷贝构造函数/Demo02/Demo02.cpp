// Demo02.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "iostream.h"
//自定义拷贝构造函数，解决深拷贝问题
class A
{
public:
	A(){}//不带参数的构造函数
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
		y=new int(*a.y);//深拷贝形成新的空间，并没有引起共享，所以不会出现问题
	}

     ~A()
	 {
		 if(y!=NULL)
		 {
			 delete y;//对象结束声明周期的时间释放自己所占据的内存
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

	A a2=a1;//A a2(a1);等价的 
}
