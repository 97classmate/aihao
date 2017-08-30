// ÒýÓÃ.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"//#include "stdafx.h"

void main()
{
	int x=3;
	int y=x;
	printf("%d\n",&x);
	printf("%d\n",&y);

	int &z=x;          

	printf("%d\n",x);
	printf("%d\n",z);
	printf("%d\n",&x);
	printf("%d\n",&z);

	z=33;
	printf("%d\n",x);

	x=333;
	printf("%d\n",z);
}
