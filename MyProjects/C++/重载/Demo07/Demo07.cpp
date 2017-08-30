// Demo07.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "iostream.h"
//堆栈的简单使用
class Stack
{
	int *sp;//堆栈的首地址
	int top;//堆栈的头
	int max;//堆栈的容量
public:
	//初始化堆栈,给堆栈开辟空间
	Stack(int size=10)
	{
		sp=new int[size];
		max=10;
		top=0;

	}

	//堆栈的容量增倍
	void inflate();


	//向堆栈中放入内容
	void push(int value);
	//取出堆栈中的内容
	int pop();

	//对等号运算符进行重载
	Stack &operator=(Stack &s1);
	//堆栈的析构函数
	~Stack();
};

void Stack::inflate()
{
	//空间增大到2倍
	int *tp=new int[max*2];
	//把原始的内容放到当时的空间中
	for(int i=0;i<top;i++)
	{
		tp[i]=sp[i];
	}

	//修改max;
	max+=max;
	//删除从前的空间
	delete sp;
	sp=tp;
}


void Stack::push(int value)
{
	// 如果堆栈已经放满 了，则新开辟空间
	if(top==max)
		inflate();
	sp[top++]=value;
}

int Stack::pop()
{
	//如果已经没有内容了则返回 -1
	if(top<=0)
		return -1;
	else
		return sp[--top];
}

//运算符重载需要生产新的堆栈，采用引用的形式提高效率
Stack &Stack::operator =(Stack &s)
{
	//生产成新的堆栈
	this->top=s.top;
	this->max=s.max;
	sp=new int [max];
	//把原始堆栈的值放入新的堆栈中
	for(int i=0;i<top;i++)
	{
		sp[i]=s.sp[i];
	}

	return *this;
}
Stack::~Stack()
{

	//空间释放
	if(sp!=NULL)
	{
		delete sp;
		sp=NULL;
	}
}

void main()
{
	Stack s1(10);
	Stack s2,s3;//不能写成Stack s2=s1,需要重写拷贝构造函数
	s3=s2=s1;
}



