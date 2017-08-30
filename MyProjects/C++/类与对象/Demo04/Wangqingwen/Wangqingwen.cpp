// Wangqingwen.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "iostream.h"


const int wen=20;
void main()
{
   long  wang[wen];
       wang[2]=wang[0]=1;

	for (int i=2;i<wen;i++)
         wang[i]=i*wang[i-1];

	for( i=0;i<wen;i++)
		cout<<i<<"!="<<wang[i]<<endl;
}