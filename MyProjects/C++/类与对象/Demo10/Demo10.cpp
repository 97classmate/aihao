// Demo10.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "iostream.h"
//�����������ʽ�����������ᳬ��������ʽ
class Rect
{
	//��Ա����
public:
	int x;
	int y;
//��Ա����
public:
	//���ܳ�
	int aorund()
	{
		return 2*(x*y);
	}

	int area()
	{
		return x*y;
	}
	//�����
	char *judge()
	{
		if(x!=0&&y!=0)
		{
		if(x==y)
		{
			char *str="��������";
				return str;
		}
		else
		{
			char *str="����������";
				return str;
		}
		}
		else
		{
			if(x==0&&y==0)
			{
				char *str="��";
				return str;
			}
			else
			{
				char *str="��";
				return str;
			}
		}
	}
	void disp()
	{
		cout<<x<<":"<<y<<":"<<aorund()<<":"<<area()<<":"<<judge()<<endl;
	}
};

void main()
{
	//һ�����
	Rect r1;
	r1.x=10;
	r1.y=0;
	r1.disp();

	//ָ�����
	Rect *r2=new Rect;
	r2->x=60;
	r2->y=60;
	r2->disp();

	//�������
	Rect r3[5];
	for(int i=0;i<5;i++)
	{
		r3[i].x=10*i;
		r3[i].y=10*i;
		r3[i].disp();
	}
	//����ָ�����
	Rect *r4[5];
	for( i=0;i<5;i++)
	{
		r4[i]=new Rect;
		r4[i]->x=100;
		r4[i]->y=200;
		r4[i]->disp();
	}
}















































