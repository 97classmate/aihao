// Demo08.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "iostream.h"
#include "string.h"

class Father
{
	//���׵Ļ�������
	int money;
	char *horse;
	char *car;

public:
	//���׵Ĺ��캯��
	Father(){}
	Father(int money,char *horse,char *car)
	{
		//Ϊָ�����Ϳ��ٿռ�
		this->horse=new char[20];
		this->car=new char[20];
		this->money=money;
		//strcpy,�ַ�����Ŀ����������Ѻ�������ݿ�����ǰ��ı�����
		strcpy(this->horse,horse);
		strcpy(this->car,car);
	}

	void f1()
	{
		cout<<"�������ӵģ�Ǯ"<<money<<endl;
	}

	void f2()
	{
		cout<<"��������ʹ�ã�����"<<horse<<endl;
	}

	void f3()
	{
		cout<<"��������ʹ�ã�����"<<car<<endl;
	}
};

//���Ӽ̳и��ף�����˳Ե����⣬�������Լ��İ���
class Son:public Father
{
	//���ӵİ���
	char *wish1;
	char *wish2;

public:
	Son(){}
	//ͨ�����캯����������ӵĶ���
	Son(int money,char *horse,char *car,char *wish1,char *wish2):Father(money,horse,car)
	{
		this->wish1=new char[20];
		this->wish2=new char[20];
		this->wish1=wish1;
		this->wish2=wish2;
	}

	void f4()
	{
		cout<<"���ӵĵ�һ������"<<wish1<<endl;
	}

	void f5()
	{
		cout<<"���ӵĵڶ�������"<<wish2<<endl;
	}
	
	void disp()
	{
		f1();
		f2();
		f3();
		f4();
		f5();

	}
	
};

void main()
{
	//���ɶ��󲢴�ӡ
	Son s1(500000000,"��Ԣ","����","����","����");
	s1.disp();

}





