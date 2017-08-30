// Demo16.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <algorithm>
#include <vector>
#include <functional>
#include <numeric>
using namespace std;

//数值算法函数的练习

void main()
{
	// 形成数组
	int array[]={1,2,3,4,5};
	for(int i=0;i<5;i++)
	{
		cout<<array[i]<<"\t";
	}
	cout<<endl;
	// 求出数组元素的个数
	int num=sizeof(array)/sizeof(int);
	//你、把数组的内容放入到vector
	vector<int> v(array,array+num);

	//求和
	int value1=accumulate(v.begin(),v.end(),0);
	cout<<value1<<endl;

	//	在每一个元素的基础上加10 ，再去求和
	int value2=inner_product(v.begin(),v.end(),v.begin(),10);
	cout<<value2<<endl;


		for( i=0;i<5;i++)
		{
		cout<<array[i]<<"\t";
		}
	      cout<<endl;

		  //局部求和，从前到后进行累加，我们在这里用到了重定向的输出，把数据绑定到cout上 用到cout的时候进行输出
		  partial_sum(v.begin(),v.end(),ostream_iterator<int>(cout,"\t"));
			  cout<<endl;

			  //相邻元素的差值
		  adjacent_difference(v.begin(),v.end(),ostream_iterator<int>(cout,"\t"));
		  cout<<endl;
}

