#include<iostream>
using namespace std;

class Mother
{
protected:
	int m_i;

public:
	//default ����

	Mother(const int & i_in=0)
		:m_i(i_in)
	{
		cout << "Mom construction" << endl;
	}//Mother construtor

	
};

//Mother�� default constructor �� �ҷ��´�.
class Child : public Mother
{
public:
	double m_d;

public:
	Child()//���� �� ���� Mother(), Child()�� ���� �ִ� ���̴�.
		:Mother(1024), m_d(1.0)
		//m_d(1.0),Mother(1024)-> Mother class�� constructor �׻� ���� �����Ŵ.���� �ٲ㵵 �ҿ� x
	{
	
		cout << "Child construction " << endl;
	}
};


class A
{
public:
	A()
	{
		cout << "A constructor" << endl;
	}
};

class B:public A
{
public:
	B()
	{
		cout << "B constructor" << endl;
	}
};

//�ٴ� ��ӱ���.

class C : public B
{
public:
	C()
	{
		cout << "C constructor" << endl;
	}

};
int main()
{
	Child c1;//����� �����Ⱚ�� ���� �ʱ�ȭ�� �ȵǾ��ٴ� ��
	C c;//A,B,C ����.
	return 0;
}