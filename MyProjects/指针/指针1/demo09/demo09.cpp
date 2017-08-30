// demo09.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

void main()
{
	//要理解数组的地址，数组的首地址，如果是二维的数组的话，要理解数组的列的地址
	int a[5]={1,2,3,4,5};
	printf("%d:%d\n",a,*a);
	printf("%d:%d\n",a+1,*(a+1));
	printf("%d:%d\n",a+2,*(a+2));
	printf("%d:%d\n",a+2,*(a+3));
	printf("%d:%d\n",a+2,*(a+4));
	
	int b[3][4]={
		{1,2,3,4},
		{5,6,7,8},
		{9,10,11,12}};
		
		printf("%d\n",b);
		printf("%d\n",*(b+0));
		printf("%d\n",*(b+1));
		printf("%d\n",*(b+2));
		
    	printf("%d:%d\n",*(b+0),*(*(b+0)+0));
		printf("%d:%d\n",*(b+0)+1,*(*(b+0)+1));
		printf("%d:%d\n",*(b+0)+2,*(*(b+0)+2));
		printf("%d:%d\n",*(b+0)+3,*(*(b+0)+3));

		printf("%d:%d\n",*(b+1),*(*(b+1)+0));
		printf("%d:%d\n",*(b+1)+1,*(*(b+1)+1));
		printf("%d:%d\n",*(b+1)+2,*(*(b+1)+2));
		printf("%d:%d\n",*(b+1)+3,*(*(b+1)+3));


		printf("%d:%d\n",*(b+2),*(*(b+2)+0));
		printf("%d:%d\n",*(b+2)+1,*(*(b+2)+1));
		printf("%d:%d\n",*(b+2)+2,*(*(b+2)+2));
		printf("%d:%d\n",*(b+2)+3,*(*(b+2)+3));


		

}