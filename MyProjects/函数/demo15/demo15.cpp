// demo15.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
//递归，自己调用自己，注意递归结束的条件，要不形成死循环
int jiecheng(int x)
{
	if(x==1)
	{	
		return 1;
	}
	else
	{
		return x*jiecheng(x-1);
	}
}

void main()
{
	int x=jiecheng(3);
	int y=jiecheng(4);
	int z=jiecheng(5);
	printf("%d\n",x);
	printf("%d\n",y);
	printf("%d\n",z);
}


