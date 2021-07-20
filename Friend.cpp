#include<iostream>
using namespace std;

class A;//전방선언 
//A안 m_value 있는지 모르니까.


class B
{
private:
	int m_value = 2;

	//friend void doSomething(A& a, B& b);
public:
	void doSomething(A& a);//내용은 뒤로 옮겨버려.

};



class A
{
private:
	int m_value = 1;

	//friend class B;//B 클래스는 나의 친구.

	friend void B::doSomething(A& a);//멤버함수 doSOmething만 나의 친구!

	friend void doSomething(A& a,B& b);//private이지만 friend이기 때문에 접근이 가능하다.
};

void B::doSomething(A& a)//여기로! A뒤에.
{
	cout << a.m_value << endl;
}


int main()
{
	A a;
	B b;
	b.doSomething(a);

	return 0;
}