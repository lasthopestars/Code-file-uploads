#include<iostream>
using namespace std;

class Base
{
public:
	virtual ~Base()//virtual 붙이면 자식 클래스 override 붙일 수 있어.
	{
		cout << "~Base()" << endl;
	}
};

class Derived : public Base
{
private:
	int *m_array;

public:
	Derived(int length)
	{
		m_array = new int[length];
	}

	virtual ~Derived() override
	{
		cout << "~Derived" << endl;
		delete[] m_array;
	}
};



int main()
{
	//Derived derived(5);
	//자식 클래스 먼저 호출
	//그 다음에 부모 클래스
	//소멸자 호출 순서는 생성자 호출 순서 반대. 생성자는 부모-> 자식,소멸자는 자식->부모.

	Derived *derived = new Derived(5);
	Base *base = derived;//derived의 pointer를 base의 포인터에 집어넣는다. 
	//base에 넣었으니 base만 지워지고..derived는 안 지워지니 memory leak 이 발생한다.
	//이 경우에는 소멸자를 virtual로 만들어주자!
	delete base;

	return 0;
}