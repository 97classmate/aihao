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
		strcpy(name,"����ʡ�ն��ػ�����ѧ");
		money=1200;

		strcpy(style[0],"��������");
		strcpy(style[1],"�˲��ڶ�");
		strcpy(style[2],"ʦ�ʷ��");
		strcpy(style[3],"�Ž��Ѱ�");
		strcpy(style[4],"��ѧ����");

		
		strcpy(project[0],"��һ��ô������Сѧ����");
        strcpy(project[1],"����Ư�����ӵİ༶�е�ࡢ");
	    strcpy(project[2],"���������κܶ�QAQ");
		strcpy(project[3],"Χǽ��·���Լ���һ����Ϥ��");
		strcpy(project[4],"�Ͽα�����̡�");
		strcpy(project[5],"�¿����ȳ��̡�");
		strcpy(project[6],"����Ȱ��Ź���");
		strcpy(project[7],"һ�����Ͻڿ��ǳ���");
		strcpy(project[8],"�о�ûʲô�ź���");
		strcpy(project[9],"�ഺ����������˼");

		strcpy(wang[0],"���꼶һ��");
		strcpy(wang[1],"���꼶����");
		strcpy(wang[2],"���꼶�߰�");
		strcpy(wang[3],"���꼶�İ�");
		strcpy(wang[4],"���꼶�˰�");

		
	}

	void disp()
	{
		cout<<"ѧУ��ַ:"<<name<<endl;
		cout<<"ѧУ����:"<<money<<endl;
		cout<<"ѧУ�ص�:";
        for(int i=0;i<5;i++)
		{
			cout<<style[i]<<"  ";
		}
		cout<<endl;

		cout<<"ѧ�����:";
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
		cout<<"ѧУ1200��ʦ��"<<endl;
	}
	void use()
	{
		cout<<"�������߲�����"<<endl;
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
