// Demo03.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "iostream.h"
//ģ�����͵Ķ���
template <class T>

//ģ����Ķ���
class a
{
private:
	T a;//ָ��ģ������
public:
	A(T a1)
	{
		a=a1;
	}

	//ģ�����Ա����������
	void operator++();
	void print()
	{
		cout<<a<<endl;
	}
};

//ģ�����Ա�����Ķ��壬������ǰ��ָ��ģ������
template <class T>

void A<T>::operator ++()
{
	a=a++;
}

void main()
{
	//�����������ʱ�䣬����ָ������
	A<char> a1('c');
	a1++;//�������ص�++�����
	a1.print();

	A<int> a2(33);
	a2++;
	a2.print();
}
