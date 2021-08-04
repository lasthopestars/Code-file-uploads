#include<iostream>

class Base
{
public:
	Base(){}

	//����� ���� ���� ���� �Լ��� ���� �Լ��� �������̵��� ��ó�� ����� ���ؼ�
	friend std::ostream& operator<<(std::ostream &out, const Base &b)
	{
		return b.print(out);
	}

	//����� ���ӹ��� �Ϲ��Լ��� �����ؼ� virtual�� ����� 
	virtual std::ostream& print(std::ostream &out) const
	{
		out << "Base";
		return out;
	}
};

class Derived : public Base
{
public:
	Derived(){}

	//�ڽ� Ŭ�������� �����ε�.
	 virtual std::ostream& print(std::ostream & out) const override
	{
		out << "Derived";
		return out;
	}
};


int main()
{
	Base b;
	std::cout << b << '\n';

	Derived d;
	std::cout << d << '\n';

	Base &bref = d;
	std::cout << bref << '\n';

	return 0;




}