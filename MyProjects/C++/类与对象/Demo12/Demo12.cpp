// Demo12.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "string.h"
#include "iostream.h"

class HuanChu
{
public:
	char *name;
	int money;
	char style[5][20];
	char project[10][20];
	char wang[5][20];

public:

	void init()
	{
		name=new char[20];
		strcpy(name,"贵州省普定县化处中学");
		money=1200;

		strcpy(style[0],"环境优美");
		strcpy(style[1],"人才众多");
		strcpy(style[2],"师资丰厚");
		strcpy(style[3],"团结友爱");
		strcpy(style[4],"勤学好问");

		
		strcpy(project[0],"初一怎么看都像小学生、");
        strcpy(project[1],"初二漂亮妹子的班级有点多、");
	    strcpy(project[2],"初三体育课很多QAQ");
		strcpy(project[3],"围墙的路跟自己家一般熟悉、");
		strcpy(project[4],"上课背后抽烟、");
		strcpy(project[5],"下课走廊抽烟、");
		strcpy(project[6],"打架先把门关上");
		strcpy(project[7],"一星期上节课是常事");
		strcpy(project[8],"感觉没什么遗憾的");
		strcpy(project[9],"青春这样才有意思");

		strcpy(wang[0],"七年级一班");
		strcpy(wang[1],"七年级三班");
		strcpy(wang[2],"八年级七班");
		strcpy(wang[3],"九年级四班");
		strcpy(wang[4],"九年级八班");

		
	}

	void disp()
	{
		cout<<"学校地址:"<<name<<endl;
		cout<<"学校人数:"<<money<<endl;
		cout<<"学校特点:";
        for(int i=0;i<5;i++)
		{
			cout<<style[i]<<"  ";
		}
		cout<<endl;

		cout<<"学生风格:";
	    for(int j=0;j<10;j++)
		{
			cout<<project[j]<<"  ";
		}
		cout<<endl;

		for(int z=0;z<5;z++)
		{
			cout<<wang[z]<<"  ";
		}
		cout<<endl;
	
	}

	void type()
	{
		cout<<"--------------------"<<endl;
	}

	void attention()
	{
		cout<<"学校1200名师生"<<endl;
	}
	void use()
	{
		cout<<"培养“高材生”"<<endl;
	}
};

void main()
{
	HuanChu  wang;
	wang.init();
	wang.disp();
	wang.type();
	wang.attention();
	wang.use();

/*	HuanChu *wang2=new HuanChu;
	wang2->init();
	wang2->disp();
	wang2->type();
	wang2->attention();
	wang2->use(); */

}
