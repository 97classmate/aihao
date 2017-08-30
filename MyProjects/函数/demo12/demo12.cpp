// demo12.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"//函数例子：十六进制转十进制
#include "math.h"

//把十六进制的数字转为十进制，倒入的参数是十六进制的数字
int From16To10(int x)
{
	//累计求和
	int sum=0;
	//循环累计相加，注意结束的条件，X不为0一直向下除
	for(int i=0;x!=0;i++)
	{
      //x%16求余数 pow进行次方运算   +sum进行累计相加的过程
		sum=(x%16)*pow(16,i)+sum;
		//循环求出后面的数
		x=x/16;
	}
	return sum;
}
void main()
{
	int x=0x1128;
	//函数调用
	int y=From16To10(x);
	printf("%d\n",y);
}