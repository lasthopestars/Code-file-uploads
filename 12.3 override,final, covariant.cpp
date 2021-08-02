#include<iostream>
using namespace std;

class A
{
public:
	virtual void print() { cout << "A" << endl; }
	virtual A* getThis() { 
		cout << "A::getThis()" << endl;
		return this; }
	//virtual �ϸ� �ӵ��� �� �������� ���� �� �����غ��� �Ѵ�.
	//���⿡ void print() final�� ������ ���� Ŭ���� print���� overriding�� �ȵȴ�.
};

class B :public A
{
public:
	virtual void print() { cout << "B" << endl; }
	virtual B* getThis() { 
		
		cout << "B::getThis()" << endl;
		return this; }
	//override���� ������ override{cout<<"B"<<endl;}�̷��� �� �����.
	//���� ����༭ �Ǽ� Ȯ�� �پ��.
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

	/*B &ref = c;
//A �Լ��� virtual�̴ϱ� B���� overriding�� �Լ��� �״�� ���.
	//c�� A�� ������ӹ޴� �� �ƴ϶� B�� ���ؼ� ���µ� �׷��� 
	//print�Լ��� ����� �� ���� C�� ����Ѵ�.

	//B &ref=c; �� C�� ���´�!
	//B�� A�κ��� ��ӹ��� �ʴ´ٸ� B�� ���� �����ٵ�
	//���� ������ �ִ� A�� virtual�̴ϱ� �ؿ� �ִ� �͵鵵 �� virtualó�� �ൿ�� �Ѵ�.
	ref.print();
	*/

	A &ref = b;
	/*ref.print(1);
	//�̷��� b�� �� ������ A�� ���´�. A�� int x, B�� �Ķ���Ͱ� short x
	//�Լ��� �Ķ���Ͱ� �ٸ��� �������̵��� �� ���� ����. 
	//���� �����ε��� �߳�����, ��� ������.*/
	b.getThis()->print();
	//return���� b�� �����Ͱ� ��������.
	
	
	ref.getThis()->print();
	//3) ������ �Ǵ� �� b�� getThis�ε� A�� ���´�.
	//������ ref�� A�� b�� �����ͷ� ���൵ ���������� A�� �����ͷ� �ٲ� ������ ȣ�����ش�.

	cout << typeid(b.getThis()).name() << endl;
	cout << typeid(ref.getThis()).name() << endl;
	return 0;
	


}