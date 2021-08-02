#include<iostream>
using namespace std;

class A
{
public:
	virtual void print() { cout << "A" << endl; }
	virtual A* getThis() { 
		cout << "A::getThis()" << endl;
		return this; }
	//virtual 하면 속도가 좀 느려져서 쓰는 걸 생각해봐야 한다.
	//여기에 void print() final을 넣으면 밑의 클래스 print들이 overriding이 안된다.
};

class B :public A
{
public:
	virtual void print() { cout << "B" << endl; }
	virtual B* getThis() { 
		
		cout << "B::getThis()" << endl;
		return this; }
	//override쓰고 싶으면 override{cout<<"B"<<endl;}이렇게 꼭 써줘라.
	//에러 잡아줘서 실수 확률 줄어듬.
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

	/*B &ref = c;
//A 함수가 virtual이니까 B에서 overriding된 함수를 그대로 사용.
	//c는 A를 직접상속받는 게 아니라 B를 통해서 쓰는데 그래도 
	//print함수를 사용할 때 직접 C를 사용한다.

	//B &ref=c; 도 C가 나온다!
	//B가 A로부터 상속받지 않는다면 B가 나올 것일텐데
	//가장 상위에 있는 A가 virtual이니까 밑에 있는 것들도 다 virtual처럼 행동을 한다.
	ref.print();
	*/

	A &ref = b;
	/*ref.print(1);
	//이러면 b가 안 나오고 A가 나온다. A는 int x, B는 파라미터가 short x
	//함수는 파라미터가 다르면 오버라이딩을 할 수가 없다. 
	//컴은 오버로딩을 했나보다, 라고 생각함.*/
	b.getThis()->print();
	//return으로 b의 포인터가 나오겠죠.
	
	
	ref.getThis()->print();
	//3) 실행이 되는 건 b의 getThis인데 A가 나온다.
	//포인터 ref가 A라 b의 포인터로 해줘도 내부적으로 A의 포인터로 바꾼 다음에 호출해준다.

	cout << typeid(b.getThis()).name() << endl;
	cout << typeid(ref.getThis()).name() << endl;
	return 0;
	


}