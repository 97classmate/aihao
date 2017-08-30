// Demo02.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "iostream.h"



template <typename T>

T max(T array[],int n)
{
	T m;
	m=array[0];
	for(int i=0;i<n;i++)
	{
		if(m<array[i])
			m=array[i];
	}
	return m;
}

template <typename T>

T sum(T array[],int n)
{
	T all;
	for(int i=0;i<n;i++)
	{
		all=all+array[i];
	}

	return all;
}

void main()
{
	int a[4]={33,2,3,33};
	double b[3]={3.3333,111.111111,5.55555500};
	int c=max(a,3);
	double d=max(b,3);
	cout<<c<<endl;
	cout<<d<<endl;

	int x=sum(a,3);
	double y=sum(b,3);
	cout<<x<<endl;
	cout<<y<<endl;
}
