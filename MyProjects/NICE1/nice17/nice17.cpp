// nice17.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

void main()
{
     int i;
	 int j;

    for(j=65;j<90;j++)//进行大写字母的循环操作
	{
		printf("%c\t",j);
	}
     
    for( i=97;i<123;i++)//进行小写字母的循环操作
	{
	     printf("%c\t",i);
	}
	printf("\n");

}