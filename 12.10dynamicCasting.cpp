//�ڽ� Ŭ������ �����͸� �θ� Ŭ���� �����ͷ� �ٲ��ִٰ� �ٽ� �ڽ� Ŭ���� �����ͷ� �ٲٱ�.
//=> ���� ����ȯ.

#include<iostream>
#include<string>
using namespace std;

class Base
{
public:
	int m_i = 0;

	virtual void print()
	{
		cout << "I'm base" << endl;
	}
};


class Derived1 : public Base
{
public:
	int m_j = 1024;

	virtual void print() override
	{
		cout << "I'm derived" << endl;
	}
};


class Derived2 : public Base
{
public:
	string m_name = "Dr.Two";

	virtual void print() override
	{
		cout << "I'm derived" << endl;
	}

};


int main()
{
	Derived1 d1;
	d1.m_j = 2048;
	Base *base = &d1;
	d1.m_j;


	auto *base_to_d1 = dynamic_cast<Derived2*>(base);

	//dynamic cast �� casting�� �����ϸ� null pointer�� �ִ´�.
	//auto *base_to_d1 = static_cast<Derived2*>(base); static_cast�ص� �ȴ�.
	//static cast�� �� �� �ִ� �� �ִ��� �� ��ȯ�� �Ϸ��� �Ѵ�. ��ſ� ��Ÿ�ӿ��� ���� üũ�� ���� �ʴ´�.
	//dyamic cast�� ��Ÿ�ӿ� ������ ���� �� ����� �� �ִ�.
	//static cast�� dynamic cast ���� �� ���� �ִµ� ���� ���� ������.
	if (base_to_d1 != nullptr)
		 base_to_d1->print();
	else
		cout << "Failed" << endl;

	/*base_to_d1->m_j = 256;

	cout << d1.m_j << endl;
	*/
	return 0;
}