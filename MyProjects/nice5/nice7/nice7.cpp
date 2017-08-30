// nice7.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
void main()//倒油例子
{
	int a=12,y=8,z=5,i=6;
	int b=0;
	int c=0;

	while(a!=i||b!=i)//如果满足要求则退出循环，不满足则不退出
	{
		if(!b)//如果B为空，则a向b中倒油
		{
			a=a-y;
		    b=y;
		}
	
	    else if(c==z)//c桶中满的话，从C向a倒油
		{
			a=a+z;
			c=0;
		}
		else if(b>z-c)//如果b桶中的油大于C桶的剩余重量，倒满C
		{
			b=b-(z-c);
			c=z;
		}
		else //如果B的重量不大于C桶中的剩余重量，向C中依然倒油
		{
			c=c+b;
			b=0;
		}
        printf("%4d:%4d:%4d\n",a,b,c);
	}
}
