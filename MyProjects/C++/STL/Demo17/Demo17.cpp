// Demo17.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <iterator>
using namespace std;



void main()
{
	// 生成vector对象
	vector<string> v;
	//把键盘的对象数据存储到vector中
	//相当于重定向
	copy(istream_iterator<string>(cin),
		istream_iterator<string>(),
		back_inserter(v));
	//进行排序
	sort(v.begin(),v.end());
	//进行拷贝，把vector拷贝出cout
	//copy 拷贝完整的数据
	//unique_copy不拷贝完整的数据
	unique_copy(v.begin(),v.end(),ostream_iterator<string>(cout,"\n"));
}