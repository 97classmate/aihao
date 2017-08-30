// Demo07.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "iostream.h"
#include <vector>
#include <list>
#include<algorithm>
using namespace std;

void main()
{
	vector<int> v;
	v.push_back(11);
	v.push_back(22);
	v.push_back(33);
	v.push_back(44);

	list<int> l;
	l.push_back(1);
	l.push_front(2);
	l.push_back(3);
	l.push_back(4);
	l.push_back(5);

	copy(v.begin(),v.end(),l.begin());
	list<int>::iterator it;

	for(it=l.begin();it!=l.end();it++)
	{
		cout<<*it<<"\t";
	}

	cout<<endl;
}