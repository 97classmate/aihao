// �߼������2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

 void main()
 {
	int a=3;
	int b=4;
	int c=5;
	int d=6;
	bool e=(a>b)&&(c<d);
	if(e==true)
	{
		printf("true\n");
	}
	else
	{
		printf("false\n");
	}
	bool f=(a>b)||(b<c);
    if(f==true)
	{
		printf("��\n");
		
	}
	else
	{
		printf("��\n");
	}
 }

