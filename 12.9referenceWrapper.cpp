#include<iostream>
#include<vector>
#include<functional>

using namespace std;


//�θ� Ŭ�������ٴ� �ڽ� Ŭ������ ������ ���� ��찡 �� ����.
//�ڽ� Ŭ������ �� ��üȭ�� ��쿡.

class Base
{
public:
	int m_i = 0;

	virtual void print()
	{
		cout << "I'm base" << endl;
	}
};

class Derived: public Base
{
public:
	int m_j = 0;

	virtual void print() override
	{
		cout << "I'm derived" << endl;
	}
};

void doSomething(Base &b) //�������� ����Ϸ��� ������ reference�� ����� �Ѵ�. �ȵǸ� �׳� ���簡 �Ǿ����.
{
	b.print();
}

int main()
{
	Derived d;
	Base b;
	/*
	b = d;
	
	//d�� ������ �ִ� ������ b�� ���� �� ����.
	//derived �ڽ� Ŭ�������� �߰����� ������ �߰��� �� ���ݾ�.
	//�ڽ� Ŭ������ m_i�� m_j �� �� ������ �ִ�.

	//base�� m_j�� ���ؼ� �� �ƴϱ� ���� ���� ����?

	b.print();
	//derived�� �ƴ϶� base�� ������ �˴ϴ�.
	
	doSomething(d);*/

	//std::vector<Base&> my_vec;
	std::vector<std::reference_wrapper <Base>> my_vec;
	//my_vec�� Base�� reference�� �����ϴ� vector�� �ȴ�.

	my_vec.push_back(b);

	my_vec.push_back(d);

	for (auto &ele : my_vec)
		ele.get().print();
	//reference�κ��� ������ �ν��Ͻ� �޾ƿ����� get() ���ݴϴ�.

	return 0;
}