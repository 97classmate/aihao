// Demo09.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "iostream.h"
#include "string.h"

//����ָ���Ա����
class Student
{
public:
	int id;
	int score;
	int *age;//ָ���Ա
	char *name;

	void setAge(int age1)
	{
		age=new int;
		*age=age1;
	}
	void destory()
	{
		delete age;
		delete name;
		age=NULL;
		name=NULL;
	}

	void setName(char *name1)
	{
		name=new char[20];
		strcpy(name,name1);
	}
	void disp()
	{
		cout<<id<<":"<<score<<":"<<*age<<":"<<name<<endl;
	}

	void judge1()
	{
		if(score<60)
		{
			cout<<"������"<<endl;
		}
		else if(score<80)
		{
			cout<<"����"<<endl;
		}
		else
		{
			cout<<"�ǳ���!"<<endl;
		}
	}
	void judge2()
	{
		if(*age<16)
		{
			cout<<"Сѧ����������"<<endl;
		}
		else
		{
			cout<<"���м���ѧ��"<<endl;
		}
	}
};

 void main()
 {
	//ָ�����
	Student *s1=new Student;
	s1->id=100;
	s1->score=90;
	s1->setName("tome");
	s1->setAge(30);

	s1->disp();
	s1->judge1();
	s1->judge2();


	s1->destory();
	delete s1;


	//һ�����
	Student s2;
	s2.id=1000;
	s2.score=30;
	s2.setName("jack");
	s2.setAge(10);

	s2.disp();
	s2.judge1();
	s2.judge2();
	
	s2.destory();

	Student all[30];

}












