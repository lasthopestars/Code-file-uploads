#include<iostream>
using namespace std;

class A
{
public:
	virtual void print() { cout << "A" << endl; }
	//virtual 하면 속도가 좀 느려져서 쓰는 걸 생각해봐야 한다.
};

class B :public A
{
public:
	virtual void print() { cout << "B" << endl; }
};

class C :public B
{
public:
	virtual void print() { cout << "C" << endl; }
};

class D :public C
{
public:
	virtual void print() { cout << "D" << endl; }
	//return 타입 다르게 해보자.
};

int main()
{
	
	A a; 
	B b;
	C c;
	D d;

	B &ref = c;
//A 함수가 virtual이니까 B에서 overriding된 함수를 그대로 사용.
	//c는 A를 직접상속받는 게 아니라 B를 통해서 쓰는데 그래도 
	//print함수를 사용할 때 직접 C를 사용한다.

	//B &ref=c; 도 C가 나온다!
	//B가 A로부터 상속받지 않는다면 B가 나올 것일텐데
	//가장 상위에 있는 A가 virtual이니까 밑에 있는 것들도 다 virtual처럼 행동을 한다.
	ref.print();

	


}