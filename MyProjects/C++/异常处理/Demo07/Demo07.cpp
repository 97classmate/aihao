// Demo07.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "iostream.h"

//学生成绩输入范围的判断，用异常的形式进行处理
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
		cout<<"请输入学好 成绩 姓名 "<<endl;
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
	cout<<"请输入学生信息"<<endl;

	for(int i=0;i<4;i++)
	{
		try
		{
			st[i].getData();
		}

		catch(char *s)
		{
			cout<<s<<":成绩输入不对哦"<<endl;
		}
	}

	cout<<"学生数据是下面"<<endl;
	for( i=0;i<4;i++)
	{
		st[i].disp();
	}

}