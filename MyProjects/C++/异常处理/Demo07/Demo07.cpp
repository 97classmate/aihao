// Demo07.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "iostream.h"

//ѧ���ɼ����뷶Χ���жϣ����쳣����ʽ���д���
class Stu
{
private:
	int mo;
	char name[10];
	int score;
public:
	Stu(){}
	void getData()
	{
		cout<<"������ѧ�� �ɼ� ���� "<<endl;
		cin>>mo>>name>>score;
		if(score>>100||score<0)
		{
			throw name;
		}
	}

	void disp()
	{
		cout<<mo<<"  "<<name<<"   "<<score<<endl;
	}
};

void main()

{
	Stu st[4];
	cout<<"������ѧ����Ϣ"<<endl;

	for(int i=0;i<4;i++)
	{
		try
		{
			st[i].getData();
		}

		catch(char *s)
		{
			cout<<s<<":�ɼ����벻��Ŷ"<<endl;
		}
	}

	cout<<"ѧ������������"<<endl;
	for( i=0;i<4;i++)
	{
		st[i].disp();
	}

}