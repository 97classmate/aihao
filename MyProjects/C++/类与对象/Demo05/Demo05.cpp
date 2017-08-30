// Demo05.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "iostream.h"

//class 类的标识（）;
class Math
{
public://允许在外面使用
	int num1;// 成员变量 属性
	int num2;

	// 成员函数 方法
	int add()
	{
		return num1+num2;
	}
	
	int sub()
	{
		return num1-num2;
	}

	int mul()
	{
		return num1*num2;
	}
	int div()
	{
		return num1/num2;
	}

	void disp()
	{
		cout<<"加法\t"<<"减法\t"<<"乘法\t"<<"除法\t"<<endl;
		cout<<add()<<"\t"<<sub()<<"\t"<<mul()<<"\t"<<div()<<endl;
	}
};


void main()
{
	//通过类生成对象 ，相当于int a
	Math m1;
	cout<<"请输入第一个数字"<<endl;
	//一般对象调用其中的成员是通过
	cin>>m1.num1;

	cout<<"请输入第二个数字"<<endl;
	cin>>m1.num2;

	// 生成指针对象
	Math *p=new Math;
	cout<<"请输入第一个数字"<<endl;
	//指针对象调用其中的成员的 ->
	cin>>p->num1;

	cout<<"请输入第二个数字"<<endl;
	cin>>p->num2;

	m1.disp();
	p->disp();
}





















