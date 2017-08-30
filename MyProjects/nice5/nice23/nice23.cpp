// nice23.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

void mian()
{
	int a[5][5]={
		{11,33,55,66,1},
		{22,33,128,942,321},
		{0,0,0,876,12},
		{9,8,7,6,5},
		{1,2,3,56,41}
	};
	int max=a[0][0];
	int x=0;
	int y=0;
	
    for(int i=0;i<5;i++)
	{
	  for(int j=0;j<5;j++)
		{
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}

	for(i=0;i<5;i++)
	{
		for(int j=0;j<5;j++)
		{
		   if(max<a[i][j])
		   {
			   max=a[i][j];
				x=i;
			    y=j;
		   }
		}
		printf("\n");
	}
	printf("%d:%d;%d\n",max,x,y);
}
