// nice7.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
void main()//��������
{
	int a=12,y=8,z=5,i=6;
	int b=0;
	int c=0;

	while(a!=i||b!=i)//�������Ҫ�����˳�ѭ�������������˳�
	{
		if(!b)//���BΪ�գ���a��b�е���
		{
			a=a-y;
		    b=y;
		}
	
	    else if(c==z)//cͰ�����Ļ�����C��a����
		{
			a=a+z;
			c=0;
		}
		else if(b>z-c)//���bͰ�е��ʹ���CͰ��ʣ������������C
		{
			b=b-(z-c);
			c=z;
		}
		else //���B������������CͰ�е�ʣ����������C����Ȼ����
		{
			c=c+b;
			b=0;
		}
        printf("%4d:%4d:%4d\n",a,b,c);
	}
}
