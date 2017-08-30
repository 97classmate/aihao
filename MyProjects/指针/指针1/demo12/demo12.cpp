// demo12.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "string.h"

void main()
{
	char s1[]={'l',' ','l','o','v','e',' ','y','o','u',' ','y','u','a','n',' ','l','u','\0'};
	char s2[11];

	strcpy(s2,s1);

	puts(s1);
	puts(s2);
}