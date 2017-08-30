// Demo07.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "iostream.h"

class  Calendar
{
public:
	int year;
	int month;
	int day;
	

	int getYear()
	{
		return year;
	}

	int getMonth()
	{
		return month;
	}
	int getDay()
	{
		return day;
	}
	void setYear(int year1)
	{
		year=year1;
	}

	void setMonth(int month1)
	{
		month=month1;
	}

	void setDay(int day1)
	{
		day=day1;
	}
	void judge()
	{
		switch(month)
		{
		case 1:
			cout<<30<<"天"<<endl;
			break;
		case 2:
			cout<<29<<"天"<<endl;
			break;
		case 3:
			cout<<31<<"天"<<endl;
			break;
		case 4:
			cout<<30<<"天"<<endl;
			break;
		case 5:
			cout<<31<<"天"<<endl;
			break;
		case 6:
			cout<<30<<"天"<<endl;
			break;
		case 7:
			cout<<31<<"天"<<endl;
			break;
		case 8:
			cout<<31<<"天"<<endl;
			break;
		case 9:
			cout<<30<<"天"<<endl;
			break;
		case 10:
			cout<<31<<"天"<<endl;
			break;
		case 11:
			cout<<30<<"天"<<endl;
			break;
		case 12:
			cout<<31<<"天"<<endl;
			break;

		}
	}


};


void  main()
{
	Calendar c1;
	c1.setYear(2020);
	c1.setMonth(12);
	c1.setDay(31);
	
	cout<<c1.getYear()<<":"<<c1.getMonth()<<":"<<c1.getDay()<<endl;
	c1.judge();


	Calendar *c2=new Calendar();
	c2->setYear(2017);
	c2->setMonth(10);
	c2->setDay(31);

	cout<<c2->getYear()<<":"<<c2->getMonth()<<":"<<c2->getDay()<<endl;
	c2->judge();
	delete c2;//自己释放空间，系统不会释放
}






































































