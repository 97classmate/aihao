// demo06.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

void main()
{
	bool  b=true;
	char  c='X';
	int   a=3;
	float f=3.33;
	double d=3.33333;

	int a1[5]={1,2,3,4,5};
	int a2[5][5];

	printf("%d\n",sizeof(b));//sizeof是拿来来变量和数组的字节数的
	
	printf("%d\n",sizeof(c));
	
	printf("%d\n",sizeof(a));
	
	printf("%d\n",sizeof(f));
	
	printf("%d\n",sizeof(d));
	
	printf("%d\n",sizeof(a1));

	printf("%d\n",sizeof(a2));
}
