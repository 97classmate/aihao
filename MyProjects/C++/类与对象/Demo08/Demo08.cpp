// Demo08.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "iostream.h"
//��Ա����
class Time
{
public:
	int hour;
	int minute;
	int second;

	//��Ա����
	void setHour(int hour1)
	{
		hour=hour1;
	}

	void setMinute(int minute1)
	{
		minute=minute1;
	}

	void  setSecond(int second1)
	{
		second=second1;
	}

	int getHour()
	{
		return hour;
	}
	int getMiunte()
	{
		return minute;
	}
	int getSecond()
	{
		return second;
	}
	//���ӽ�1
	void inCrementMinute()
	{
		if(minute==60)
		{
			minute=0;
			hour=hour+1;
		}
		else
		{
			minute=minute+1;
		}
	}
	     //���ӽ�1
		void incrementSecond()
		{
			if(second==60)
			{
				minute=0;
				hour=hour+1;
			}
			else
			{
				minute=minute+1;
			}
		}
		void inCrementSecond()
		{
			if(second==60)
			{
				second=0;
				if(minute==60)
				{
					hour=hour+1;
					minute=0;
				}
				else
				{
					minute=minute+1;
				}
				second=0;
			}
			else
			{
				second=second+1;
			}
		}

		void disp()
		{
			cout<<hour<<":"<<minute<<":"<<second<<endl;
		}
	
};

void main()
{
	Time t1;
	t1.setHour(10);
	t1.setMinute(20);
	t1.setSecond(30);

      t1.disp();
	  t1.inCrementMinute();
	  t1.inCrementSecond();
	  t1.disp();

}










