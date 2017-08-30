// nice3.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

void main()//打印图案问题
{
	for(int i=1;i<=4;i++)
	{
		for(int j=1;j<=i;j++)
		{
			printf("%d\t",j);
		}
		printf("\n");
	}
	   for( i=4;i>=1;i--)
	   {
		for(int j=1;j<=i;j++)
		{
			printf("%d\t",j);
		}
		printf("\n");
	}
}
