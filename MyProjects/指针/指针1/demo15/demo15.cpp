// demo15.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

void main()
{
	char s1[]={"woainiyuanlu"};
	char s2[50];

	char *p1,*p2;
	p1=s1;
	p2=s2;
	for(;*p1!='\0';p1++,p2++)
	{
		*p2=*p1;
	}
          *p2='\0';
		printf("%s\n",s1);
	printf("%s\n",s2);
}
