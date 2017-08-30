// nice2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

void main()//百钱百鸡问题
{
	int a=0;
	int b=0;
	int c=0;

	for(a=0;a<20;a++)
	{
		for(b=0;b<33;b++)
		{
			c=100-a-b;
			if(5*a+(3*b+3*a)/3==100)
			{
				printf("%d:%d:%d\n",a,b,c);
			}
		}
	}
}
