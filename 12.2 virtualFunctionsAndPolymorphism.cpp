#include<iostream>
using namespace std;

class A
{
public:
	virtual void print() { cout << "A" << endl; }
	//virtual �ϸ� �ӵ��� �� �������� ���� �� �����غ��� �Ѵ�.
};

class B :public A
{
public:
	virtual void print() { cout << "B" << endl; }
};

class C :public B
{
public:
	virtual void print() { cout << "C" << endl; }
};

class D :public C
{
public:
	virtual void print() { cout << "D" << endl; }
	//return Ÿ�� �ٸ��� �غ���.
};

int main()
{
	
	A a; 
	B b;
	C c;
	D d;

	B &ref = c;
//A �Լ��� virtual�̴ϱ� B���� overriding�� �Լ��� �״�� ���.
	//c�� A�� ������ӹ޴� �� �ƴ϶� B�� ���ؼ� ���µ� �׷��� 
	//print�Լ��� ����� �� ���� C�� ����Ѵ�.

	//B &ref=c; �� C�� ���´�!
	//B�� A�κ��� ��ӹ��� �ʴ´ٸ� B�� ���� �����ٵ�
	//���� ������ �ִ� A�� virtual�̴ϱ� �ؿ� �ִ� �͵鵵 �� virtualó�� �ൿ�� �Ѵ�.
	ref.print();

	


}