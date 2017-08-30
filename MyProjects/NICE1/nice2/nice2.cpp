// nice2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

void main()
{
    int *p=new int;
		*p=1;
    printf("%d\n",p);//这是自己开辟空间。=】

	int a=6;
	int *p6=&a;
	printf("%d\n",p6);
	printf("%d\n",&a);
	printf("%d\n",&p6);

}
