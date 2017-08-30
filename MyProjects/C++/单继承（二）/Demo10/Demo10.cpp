// Demo10.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "iostream.h"
#include "string.h"

//练习多阶的单继承 Artist ,Music Plano
class Artist
{
	char *name;
	int age;
	char *style1;

public:
	Artist(){}

	Artist(char *name,int age,char *style1)
	{
		//注意不要省掉this ，编译器在调用变量的时候，强调的是靠近原则
		this->name=new char[20];
		this->style1=new char[20];

		strcpy(this->name,name);
		strcpy(this->style1,style1);
		this->age=age;
	}

	void disp()
	{
		cout<<name<<":"<<age<<":"<<style1<<":";
	}
};

class Music:public Artist
{
	char *style2;
public:
	Music(){}

	Music(char *name,int age,char *style1,char *style2):Artist(name,age,style1)
	{
		 this->style2=new char[20];
		strcpy(this->style2,style2);

	}

	void disp()
	{
		Artist::disp();
		cout<<style2<<":";
	}
};


class Plano:public Music
{
	char *style3;
public:
	Plano(){}

	Plano(char *name,int age,char *style1,char *style2,char *style3):Music(name,age,style1,style2)
	{
		this->style3=new char[20];
		strcpy(this->style3,style3);
	}

	void disp()
	{
		Music::disp();
		cout<<style3<<endl;
	}
};

void main()
{
	Plano p1("贝多芬",20,"声音","琴声","钢琴");
	p1.disp();

	//自己开辟的空间一定要释放
	Plano *p2=new Plano("肖邦",19,"古典","音乐","也也");
      p2->disp();
	  delete p2;
}