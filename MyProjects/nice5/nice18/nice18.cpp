// nice18.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
void main()
{
	int a[20][20];
	for(for i=0;i<20;i++)
	{
		for(int j=0;j<20;i++)
		{
			a[i][j]=0;
		}
	}
	a[0][0]=0;
	for(i=1;i<20;i++)
	{
		a[i]=1;
	}
	a[1][0]=1;
	for(i=0;i<20;i++)
	{
		for(int j=0;j<20;j++)
		{
			for(int x=2;x<i;x++)
			{
				a[i][x]=a[a[i][j]]
			}
		}
		printf("%d\n"a[i],a[j])
	}

}