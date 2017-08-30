// Demo03.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "iostream.h"


//构造函数的重载的大体个数，原来应该是给成员变量赋值的，现在的我们主要讲述构造函数重载的格式
class Car
{
public:
      Car()
	  {
		  cout<<"低配宝马"<<endl;
	  }

	  Car(int a)
	  {
		  cout<<"中配宝马"<<endl;
	  }
	  
	  Car(int a,int b)
	  {
		  cout<<"高配宝马"<<endl;
	  }

	  Car(int s,int b,int c)
	  {
		  cout<<"豪华宝马"<<endl;
	  }
};
class HuangHeLou
{
public:
	HuangHeLou()
	{
		cout<<""<<endl;
	}

	HuangHelou(int year,char *str)
	{
		cout<<"黄鹤一去不复返，白云千载空悠悠"<<endl;   
	}

	HuangHeLou(int a,int b,cahr  *str)
	{
		cout<<"李白："<<endl;
	}
};

void main()
{
	Car c1;
	Car c2(1);
	Car c3(1,2);
	Car c4(1,2,3);

	HuangHeLou h1;
	HuangHeLou h2(1200,"唐朝");
	HuangHeLOu h3(1200,1300,"宋朝")
}