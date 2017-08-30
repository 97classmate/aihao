// Demo09.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "iostream.h"
#include "string.h"

class Teacher
{
	//������ʦ�ĳ�Ա����
	char *name;
	int age;
	char *what;
	
public:
	// ��ʦ���캯��
	Teacher(){}
	Teacher(char *name,int age,char *what)
	{
		this->name=new char[20];
		this->what=new char[20];
		strcpy(this->name,name);
		strcpy(this->what,what);
		this->age=age;

	}

	void judge()
	{
		if(age<16)
			cout<<"���ܳ�Ϊ��ʦ��Υ����"<<endl;
		else
			cout<<"�Ϸ��Ľ�ʦ"<<endl;
	}

	void disp()
	{
		cout<<name<<":"<<age<<":"<<what;
	}

	int getAge()
		{
			return age;
		}
};

//���޼̳��ڽ�ʦ
class Professor:public Teacher
	{
		char *what2;
	public:
		// �����Ĺ��캯��
		Professor(){}
		Professor(char *name,int age,char *what,char *what2):Teacher(name,age,what)
		{
			this->what2=new char[20];
			strcpy(this->what2,what2);
		}
		void disp()
		{
			Teacher::disp();
			cout<<what2<<endl;
		}

		void judge()
		{
			Teacher::judge();
			if(getAge()<30)
				cout<<"Υ���Ľ���"<<endl;
			else
			    cout<<"�Ϸ��Ľ���"<<endl;
		}

		
};

	void main()
	{
		//���ɶ��󲢵�����ķ���
		Professor p1("����",40,"��ʦ","����");

		p1.disp();
		p1.judge();

		Professor p2("����",19,"��ʦ","����");
		p2.disp();
		p2.judge();

		//�ɳ�ָ�����͵Ķ��󣬲��������еķ���
		Professor *p3=new Professor("����",16,"����","��ʦ");
		p3->disp();
		p3->judge();
	}