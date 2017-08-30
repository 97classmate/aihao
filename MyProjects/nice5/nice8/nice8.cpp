// nice8.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

void main() // do...while Р§зг
{
	int i=1;
	int sum=0;
	do
	{
		sum=sum+i;
		i++;
	}while(i<=100);
	printf("%d\n",sum);
}
