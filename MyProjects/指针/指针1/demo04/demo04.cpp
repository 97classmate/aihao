// demo04.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

void main()
{     //��һ����ʽ��ϵͳ���ٿռ�
	//�����������ǿ��ٶ�ջ�ռ�
	int a=3;
	printf("%d\n",a);
	printf("%d\n",*(&a));
	printf("%d\n",&a);
     
	//�ڶ�����ʽ�����Լ����ڴ汣�������ֵ�����ǵ�ַ��
	//���п��ٵĶѿռ䣬��������ֵΪa
	int *p=new int(3);
	*p=3;
	 //*p���ٿռ���׵�ַ  *p ��ַֻ��ֵ��&pû����
	printf("%d\n"*p);
		printf("%d\n",p);
		printf("%d\n",&p);
	
		
//  ��������ʽ���Լ����ٿռ䣬���������ַ
	int x=3;
	int *y=&x;
}