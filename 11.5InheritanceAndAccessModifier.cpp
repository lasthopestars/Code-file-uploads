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
		//Base::protected�� protected Base ������ �� �� protected�ϱ� ����!
		//m_protected�� protected�� �ؿ��� ��� �����ϴϱ�. 
		//private���� ���°��� class�ȿ����� m_public m_protected ��ü�� �� privateó�� �۵��Ѵٴ� ���̴�.
	
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
	
	//Base �ȿ� protected�� ����� �Ϳ� ������ �� ����
	//private ���� ex) base.m_private �ȵ�. m_protected��.
}