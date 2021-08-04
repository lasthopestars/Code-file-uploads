//자식 클래스의 포인터를 부모 클래스 포인터로 바꿔주다가 다시 자식 클래스 포인터로 바꾸기.
//=> 동적 형변환.

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

	//dynamic cast 는 casting에 실패하면 null pointer를 넣는다.
	//auto *base_to_d1 = static_cast<Derived2*>(base); static_cast해도 된다.
	//static cast는 할 수 있는 한 최대한 다 변환을 하려고 한다. 대신에 런타임에서 에러 체크를 하지 않는다.
	//dyamic cast는 런타임에 문제가 생길 때 잡아줄 수 있다.
	//static cast나 dynamic cast 가끔 쓸 수는 있는데 자주 쓰진 마세요.
	if (base_to_d1 != nullptr)
		 base_to_d1->print();
	else
		cout << "Failed" << endl;

	/*base_to_d1->m_j = 256;

	cout << d1.m_j << endl;
	*/
	return 0;
}