// Demo01.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "iostream.h"
#include "malloc.h"
#include "string.h"
#include "stdlib.h"
//����һ���򵥵���
class A
{
public:
	int x;
	int y;
};
//������
void main()
{
	int *p=NULL;
	char *str=NULL;
	//�ռ俪�� ��
	p=(int *)malloc(sizeof(int));
	str=(char *)malloc(sizeof(char)*20);
	//������ٿռ�û��ʧ�ܵĻ�
		if(p!=NULL)
	*p=223;
	else
		exit(1);
	if(str!=NULL)
	   gets(str);
	else
		exit(1);

	cout<<*p<<endl;
	cout<<str<<endl;

//�����󿪱ٿռ�
	A *pa=(A *)malloc(sizeof(A));
	if(pa!=NULL)
	{
	pa->x=3;
	pa->y=4;
	cout<<pa->x<<":"<<pa->y<<endl;
	}
	else
	{
		exit(1);
	}
	//�ͷſռ�
	free(p);
	free(str);
	free(pa);
}
