// demo04.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

//������ϰ�����ýṹ���������������
struct Circle
{
	int x;
	int y;
	int r;
};

double zc(Circle c)
{
	return 2*3.1415962*c.r;
}

double area(Circle c)
{
	return 3.1415926*c.r*c.r;
}

void main()
{
	Circle c;
	c.x=0;c.y=0;c.r=3;
	double s1=zc(c);
	double s2=area(c);
	printf("%lf:%lf\n",s1,s2);
}