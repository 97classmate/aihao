// �߼������.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

void main()
{
	bool b1=true;
	bool b2=false;
    bool b3=!b1;//ȡ�������٣��ٱ����
	
	if(b3==true)
	{
	    printf("��\n");
	
	}
	else
	{
		printf("��\n");
	}
	bool b4=b1&&b2;//����Ϊ����Ϊ�棬һ���Ǽپ��Ǽ١�

	if(b4==true)
	{
		printf("��n");
	}
	else
	{
		printf("��\n");
	}
	bool b5=b1||b2;//��һ����������棬������Ҳ���棬��Ȼ���Ǽ٣�
	
	if(b5==true)
	{
		printf("��\n");
	}
	else
	{
		printf("��\n");
	}
	bool b6=b1^b2;//�������棬������ѽ����Ȼ���Ǽٿ�����
	
	if(b6==true)
	{
		printf("��\n");
	}
	else
	{
		printf("��>\n");
	}
}
