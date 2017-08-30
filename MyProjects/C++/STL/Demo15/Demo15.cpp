// Demo15.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <functional>
#include <string>
#include <algorithm>
#include <vector>


using namespace std;
//用类名做函数适配器，必须重载()
class Sum
{
	int all;
public:
	Sum()
	{
		all=0;
	}

	void operator()(int x)
	{
		all=all+x;
	}

	int getAll()
	{
		return all;
	}
};

void main()
{
	//生成容器对象
	vector<int> v1;
	// 循环放入数据
	for(int i=1;i<=100;i++)
	{
		v1.push_back(i);
	}

	//循环求和，返回sum的对象
	Sum s=for_each(v1.begin(),v1.end(),Sum());
	cout<<s.getAll()<<endl;

}
