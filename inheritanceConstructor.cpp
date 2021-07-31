#include<iostream>
using namespace std;

class Mother
{
protected:
	int m_i;

public:
	//default 구현

	Mother(const int & i_in=0)
		:m_i(i_in)
	{
		cout << "Mom construction" << endl;
	}//Mother construtor

	
};

//Mother의 default constructor 을 불러온다.
class Child : public Mother
{
public:
	double m_d;

public:
	Child()//적던 안 적던 Mother(), Child()가 숨어 있는 것이다.
		:Mother(1024), m_d(1.0)
		//m_d(1.0),Mother(1024)-> Mother class의 constructor 항상 먼저 실행시킴.순서 바꿔도 소용 x
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

//다단 상속구조.

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
	Child c1;//디버깅 쓰레기값은 아직 초기화가 안되었다는 뜻
	C c;//A,B,C 순서.
	return 0;
}