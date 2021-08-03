#include<iostream>
using namespace std;

class Base
{
public:
	virtual void fun1() {};
	void fun2() {};
	//가상함수를 가지는 클래스는
	//가상 함수 포인터를 추가로 가져서 클래스 용량이 더 크다.
	//Base는 가상 함수를 가지므로 크기가 더 커졌다.
	//Derived는 Base로부터 가상 함수 포인터를 상속받기 때문에 얘도 똑같이 크기가 더 커졌다.
};

class Der : public Base
{
public:
	void fun1(){};
	void fun3() {};
};


int main()
{
	cout << sizeof(Base) << endl;
	cout << sizeof(Der) << endl;

	return 0;
}