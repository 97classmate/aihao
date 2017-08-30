// Demo04.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "iostream.h"

//模板类型的定义
template <class T>
 
class Array
{
private:
		T *sell;
		int n;
public:
	Array(T *a,int n)
	{
		sell=a;
		this->n=n;
	}
	~Array(){};

	void seek(T t);
	void sort();
	void print();
	void sum();

};	

//模板函数的实现，每个函数前面，都需要有模板类型的定义
template <class T>

void Array<T>::seek(T t)
{
	for(int i=0;i<n;i++)
	{
		if(sell[i]==t)
		{
			cout<<"position:"<<i<<endl;
				break;
		}
	}
	if(i>=n)
		cout<<"该数据不在数组中"<<endl;

}	

template <class T>
void Array<T>::sort()
{
	T temp;
	

	for(int i=0;i<n;i++)
	{
		for(int j=n-1;j>i;j--)
		{
			if(sell[j]>sell[i])
			{
				temp=sell[i];
				sell[i]=sell[j];
				sell[j-1]=temp;
			}
		}
	}
}

template <class T>
void Array<T>::print()
{
	for (int i=0;i<n;i++)
		cout<<"   "<<sell[i];
	cout<<endl;
}

template <class T>
void Array<T>::sum()
{
	T sum=0;
	for(int i=0;i<n;i++)
	{
		sum=sum+sell[i];
	}
	cout<<sum<<endl;
}

void main()
{
	int a[]={23,33,45,66,443,22};
	double b[]={11.2,3.33,2.342,44.33};

	Array<int>a1(a,6);//声明具体，模板类型对象的时间，要指明具体的类型
	Array<double>b1(b,6);

	a1.print();
	b1.print();

	a1.sort();
	b1.sort();
	a1.print();
	b1.print();

	a1.seek(22);
	b1.seek(3.33);
	a1.sum();
	b1.sum();
	
}