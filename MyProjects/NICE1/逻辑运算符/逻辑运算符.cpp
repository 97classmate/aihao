// 逻辑运算符.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

void main()
{
	bool b1=true;
	bool b2=false;
    bool b3=!b1;//取反，真变假，假变成真
	
	if(b3==true)
	{
	    printf("真\n");
	
	}
	else
	{
		printf("假\n");
	}
	bool b4=b1&&b2;//俩个为真则为真，一个是假就是假。

	if(b4==true)
	{
		printf("真n");
	}
	else
	{
		printf("假\n");
	}
	bool b5=b1||b2;//有一个是真就是真，俩个真也是真，不然就是假，
	
	if(b5==true)
	{
		printf("真\n");
	}
	else
	{
		printf("假\n");
	}
	bool b6=b1^b2;//俩个是真，才是真呀，不然就是假咯！！
	
	if(b6==true)
	{
		printf("真\n");
	}
	else
	{
		printf("假>\n");
	}
}
