// Demo03.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "iostream.h"


//���캯�������صĴ��������ԭ��Ӧ���Ǹ���Ա������ֵ�ģ����ڵ�������Ҫ�������캯�����صĸ�ʽ
class Car
{
public:
      Car()
	  {
		  cout<<"���䱦��"<<endl;
	  }

	  Car(int a)
	  {
		  cout<<"���䱦��"<<endl;
	  }
	  
	  Car(int a,int b)
	  {
		  cout<<"���䱦��"<<endl;
	  }

	  Car(int s,int b,int c)
	  {
		  cout<<"��������"<<endl;
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
		cout<<"�ƺ�һȥ������������ǧ�ؿ�����"<<endl;   
	}

	HuangHeLou(int a,int b,cahr  *str)
	{
		cout<<"��ף�"<<endl;
	}
};

void main()
{
	Car c1;
	Car c2(1);
	Car c3(1,2);
	Car c4(1,2,3);

	HuangHeLou h1;
	HuangHeLou h2(1200,"�Ƴ�");
	HuangHeLOu h3(1200,1300,"�γ�")
}