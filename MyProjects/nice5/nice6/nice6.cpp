// nice6.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
void main()
{
	int day=1;
	int  after=1;
	int before;
	while(day<=9)
	{
	     day++;
		before=2*(after+1);
		after=before;
		
	}
	printf("%d\n",after);
}
