// Demo07.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "iostream.h"
//��ջ�ļ�ʹ��
class Stack
{
	int *sp;//��ջ���׵�ַ
	int top;//��ջ��ͷ
	int max;//��ջ������
public:
	//��ʼ����ջ,����ջ���ٿռ�
	Stack(int size=10)
	{
		sp=new int[size];
		max=10;
		top=0;

	}

	//��ջ����������
	void inflate();


	//���ջ�з�������
	void push(int value);
	//ȡ����ջ�е�����
	int pop();

	//�ԵȺ��������������
	Stack &operator=(Stack &s1);
	//��ջ����������
	~Stack();
};

void Stack::inflate()
{
	//�ռ�����2��
	int *tp=new int[max*2];
	//��ԭʼ�����ݷŵ���ʱ�Ŀռ���
	for(int i=0;i<top;i++)
	{
		tp[i]=sp[i];
	}

	//�޸�max;
	max+=max;
	//ɾ����ǰ�Ŀռ�
	delete sp;
	sp=tp;
}


void Stack::push(int value)
{
	// �����ջ�Ѿ����� �ˣ����¿��ٿռ�
	if(top==max)
		inflate();
	sp[top++]=value;
}

int Stack::pop()
{
	//����Ѿ�û���������򷵻� -1
	if(top<=0)
		return -1;
	else
		return sp[--top];
}

//�����������Ҫ�����µĶ�ջ���������õ���ʽ���Ч��
Stack &Stack::operator =(Stack &s)
{
	//�������µĶ�ջ
	this->top=s.top;
	this->max=s.max;
	sp=new int [max];
	//��ԭʼ��ջ��ֵ�����µĶ�ջ��
	for(int i=0;i<top;i++)
	{
		sp[i]=s.sp[i];
	}

	return *this;
}
Stack::~Stack()
{

	//�ռ��ͷ�
	if(sp!=NULL)
	{
		delete sp;
		sp=NULL;
	}
}

void main()
{
	Stack s1(10);
	Stack s2,s3;//����д��Stack s2=s1,��Ҫ��д�������캯��
	s3=s2=s1;
}



