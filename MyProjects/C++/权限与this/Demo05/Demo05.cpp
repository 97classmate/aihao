// Demo05.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "iostream.h"

//访问形式分类：第一种通过对象访问，第二种继承访问

//访问形式分类：第一种在本类内部访问，第二种，在派生类访问，第三种，在其他类访问,第四种，全局函数访问

//private:永远属于在本类内部访问
//protected:在派生类和本类内部进行访问
//puvlic:在本类派生类，其他类，全局函数中都可以访问

class Father
{
public:
	void f1()
	{
		cout<<"父亲的汽车"<<endl;
	}

protected:
	void f2()
	{
		cout<<"父亲的存款"<<endl;
	}

private:
	void f3()
	{
		cout<<"父亲的隐私"<<endl;
	}
};

class Son: public Father
{
public: 
	void f4()
	{
		f1();
		f2();
		//f3();儿子不可以调用父亲的隐私
	}
};

void main()
{
	Father f;
	Son son;
	f.f1();
	son.f4();
}
