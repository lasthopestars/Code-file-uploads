#include<iostream>
using namespace std;

class A;//���漱�� 
//A�� m_value �ִ��� �𸣴ϱ�.


class B
{
private:
	int m_value = 2;

	//friend void doSomething(A& a, B& b);
public:
	void doSomething(A& a);//������ �ڷ� �Űܹ���.

};



class A
{
private:
	int m_value = 1;

	//friend class B;//B Ŭ������ ���� ģ��.

	friend void B::doSomething(A& a);//����Լ� doSOmething�� ���� ģ��!

	friend void doSomething(A& a,B& b);//private������ friend�̱� ������ ������ �����ϴ�.
};

void B::doSomething(A& a)//�����! A�ڿ�.
{
	cout << a.m_value << endl;
}


int main()
{
	A a;
	B b;
	b.doSomething(a);

	return 0;
}