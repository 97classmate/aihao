// Demo11.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <list>
#include <vector>
#include <algorithm>
#include<numeric>//mul是在这个标识符里面

using namespace std;

//函数适配器
int mul(int a ,int b)
{
	return a*b;
}
void main()
{
	//定义数组
	int a[]={1,2,3,4,5};
	//求出数组的长度
	const int mun=sizeof(a)/sizeof(int);

	//进行累加运算         mul-->函数适配器的使用
	int sum=accumulate(a,a+mun,1,mul);

	cout<<sum<<endl;
}
