#include<iostream>

class Base
{
public:
	Base(){}

	//멤버로 만들 수가 없는 함수가 없는 함수를 오버라이딩한 것처럼 사용을 위해서
	friend std::ostream& operator<<(std::ostream &out, const Base &b)
	{
		return b.print(out);
	}

	//기능을 위임받은 일반함수를 구현해서 virtual로 만들고 
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

	//자식 클래스에서 오버로딩.
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