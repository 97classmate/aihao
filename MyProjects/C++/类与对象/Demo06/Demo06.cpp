// Demo06.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "iostream.h"
#include "math.h"
class Pic
{
public:
	int edge;
	int x[100];
	int y[100];

	int width;
	int color;


	void around()
	{
		if(edge==3)//sqrt((x1-x2)(x1-x2)+(y1-y2)(y1-y2))  连点间的距离
		{
			int length1=sqrt((x[0]-x[1])*(x[0]-x[1])+(y[0]-y[1])*(y[0]-y[1]));
			int length2=sqrt((x[0]-x[2])*(x[0]-x[2])+(y[0]-y[2])*(y[0]-y[2]));
			int length3=sqrt((x[1]-x[2])*(x[1]-x[2])+(y[1]-y[2])*(y[1]-y[2]));
			int all=length1+length2+length3;
			cout<<all<<endl;
		}
		else
		{
			cout<<"暂时不计算"<<endl;
		}
	}
	void area()//sqrt(s(s-a)(s-a)(s-c)) s=(a+b+c)/2  海伦公式 
	{
		if(edge==3)
		{
			double length1=sqrt((x[0]-x[1])*(x[0]-x[1])+(y[0]-y[1])*(y[0]-y[1]));
			double length2=sqrt((x[0]-x[2])*(x[0]-x[2])+(y[0]-y[2])*(y[0]-y[2]));
			double  length3=sqrt((x[1]-x[2])*(x[1]-x[2])+(y[1]-y[2])*(y[1]-y[2]));
			double s=(length1+length2+length3)/2;

			double surface=sqrt(s*(s-length1)*(s-length2)*(s-length3));
			cout<<surface<<endl;
		}
		else
		{
			cout<<"暂时不计算"<<endl;
		}
	}
 
}; 
  
void main()
{  
	Pic p1;
 	p1.edge=3;
 	p1.x[0]=2;
 	p1.x[1]=12;
 	p1.x[2]=22;
    
	p1.y[0]=3;
	p1.y[1]=13;
	p1.y[2]=33;

	p1.area();
	p1.around();


	Pic *p2;
	p2=new Pic;
	p2->edge=5;
	p2->area();
	p2->around();
} 
 
     

                                         






                       









