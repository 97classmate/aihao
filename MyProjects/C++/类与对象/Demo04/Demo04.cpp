// Demo04.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "string.h"
#include "iostream.h"

class Car
{
public:
	char type[20];
	int length;
	int price;

	void judgeType()
	{
		if(strcmp(type,"benz"))
		{
			cout<<"坐着舒服"<<endl;
		}

		if(strcmp(type,"bmw"))
		{
			cout<<"爽快"<<endl;
		}

		if(strcmp(type,"volvo"))
		{
			cout<<"疯狂的飙车"<<endl;
		}

		if(strcmp(type,"audi"))
		{
			cout<<"我喜欢坐"<<endl;
		}
	}

	void judgeLength()
	{
		if(length<2600)
		{
			cout<<"我"<<endl;
		}
		else if(length<3000)
		{
			cout<<"喜"<<endl;
		}
		else if(length<3500)
		{
			cout<<"欢"<<endl;
		}
		else
		{
			cout<<"你!"<<endl;
		}
	}
	void judgePrice()
	{
		if(price<10)
		{
			cout<<"答应"<<endl;
		}
		else if(price<20)
		{
			cout<<"不答应"<<endl;
		}
		else if(price<30)
		{
			cout<<"有感觉再等等吧!"<<endl;
		}
		else
		{
			cout<<"对你没有什么你感觉"<<endl;
		}
	}

	void judge()
	{
		judgeType();
		judgeLength();
		judgePrice();
	}
};
   void main()
   {
	   Car c1;
	   Car c2;
	   Car c3;


	   strcpy(c1.type,"bmw");
	   strcpy(c2.type,"volvo");
	   strcpy(c3.type,"benz");

	   c1.length=2700;
	   c2.length=5000;
	   c3.length=6000;


	   c1.price=5;
	   c2.price=6;
	   c3.price=7;


	   c1.judge();
	   c2.judge();
	   c3.judge();
   }



















