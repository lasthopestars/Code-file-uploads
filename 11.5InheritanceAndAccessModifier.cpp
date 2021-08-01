#include<iostream>
using namespace std;

class Base
{
public:
	int m_public;

protected:
	int m_protected;
private:
	int m_private;
};

class Derived : private Base
{
public:
	Derived()
	{
		Base::m_public;
		Base::m_protected;
		//Base::protected에 protected Base 만나면 둘 다 protected니까 가능!
		//m_protected는 protected라서 밑에서 상속 가능하니까. 
		//private으로 막는것은 class안에서는 m_public m_protected 전체가 다 private처럼 작동한다는 뜻이다.
	
	}
};

class GrandChild :public Derived
{
public:
	GrandChild()
	{
		
	}
};
int main()
{
	Derived derived;



	Base base;
	base.m_public = 123;
	
	//Base 안에 protected로 선언된 것에 접근할 수 없다
	//private 역시 ex) base.m_private 안됨. m_protected도.
}