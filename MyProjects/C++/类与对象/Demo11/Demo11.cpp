// Demo11.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "iostream.h"
#include "string.h"

class BigHorse 
{
public:
	char *type;
	int price;
	char *name;
	int flag;
public:
	void setType(char *type1)
	{
		type=new char[20];
		strcpy(type,type1);
	}
	void setPrice(int price1)
	{
		price=price1;
	}

	void setName(char *name1)
	{
		name=new char[20];
		strcpy(name,name1);
	}
	void strFlag(int flag1)
	{
		flag=flag1;
	}
	void f1()
	{
		if(price<5000)
		{
			cout<<"化处"<<endl;
		}
		else
		{
			cout<<"普定"<<endl;
		}
	}
	void f2()
	{
	     switch(flag)
		 {
		 case 1:
			 cout<<"瓦房"<<endl;
			 break;
		 case 2:
			 cout<<"平房"<<endl;
			 break;
		 case 3:
			 cout<<"楼房"<<endl;
			 break;
		 case 4:
			 cout<<"别墅"<<endl;
			 break;

		 }
	}

	void disp()
	{
		cout<<type<<":"<<name<<":"<<flag<<":"<<price<<endl;
	}
};
void main()
{
   
 BigHorse h1;
 h1.strFlag(1);
 h1.setName("化处商品房");
 h1.setPrice(500);
 h1.setType("玩");

 h1.f1();
 h1.f2();
 h1.disp();

BigHorse h2;
h2.strFlag(2);
h2.setName("普定凯旋城");
h2.setPrice(80000);
h2.setType("网速好");

h2.f1();
h2.f2();
h2.disp();





}