#include<iostream>
using namespace std;

class Base
{
public:
	virtual void fun1() {};
	void fun2() {};
	//�����Լ��� ������ Ŭ������
	//���� �Լ� �����͸� �߰��� ������ Ŭ���� �뷮�� �� ũ��.
	//Base�� ���� �Լ��� �����Ƿ� ũ�Ⱑ �� Ŀ����.
	//Derived�� Base�κ��� ���� �Լ� �����͸� ��ӹޱ� ������ �굵 �Ȱ��� ũ�Ⱑ �� Ŀ����.
};

class Der : public Base
{
public:
	void fun1(){};
	void fun3() {};
};


int main()
{
	cout << sizeof(Base) << endl;
	cout << sizeof(Der) << endl;

	return 0;
}