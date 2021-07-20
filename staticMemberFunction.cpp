#include<iostream>
using namespace std;

class Something
{
public:

	//class안에 class만들기
	//Something class 안에서 static 멤버 변수를 초기화하는 것처럼 구현은 가능하다!But 간접적으로.
	class _init
	{
	public:
		_init()
		{
			s_value = 9876;
		}
	};


	//static변수는 함수 내의 지역변수 선언시 프로그램 종료까지 살아있길 바랄 때 씀.
private:
	static int s_value;
	int m_value;
	static _init s_initializer;
	//init클래스를 static으로 하나 만들어줌.

public:

	Something()
		:m_value(123)
	{}



	static int getValue()
	{
		return s_value;
		//static은 this pointer를 못 쓴다.
		//return m_value도 m__value는 static이 아니니까 못 쓴다.
		//this로 접근 못한다는 것은 this로 접근을 해야 하는 모든 게 안된다는 것이다.
	}

	int temp()
	{
		return this->s_value;
		//this를 사용한다는 것은 특정 인스턴스의 주소를 받아다가
		//인스턴스 주소를 가져다가 사용하는 것.
	}
};

int Something::s_value = 1024;
Something::_init Something::s_initializer;


int main()
{
	cout << Something::getValue() << endl;

	Something s1,s2;
	cout << s1.getValue() << endl;


	int (Something::*fptr1)() = &Something::temp;
	// &s1.temp; 안되는 이유->s1의 멤버 variable은 Something에 묶여있다.
	//Something에 temp라는 함수가 한 군데 들어있고, 그 temp라는 함수를 사용할 때
	//s1의 포인터를 주고 아 이 s1의 this pointer를 주고 s1에 속해있는 멤버들을 가지고 이 function 작동을 시켜!
	//Something에 속해있는 temp라는 멤버 function이에요.

	cout << (s2.*fptr1)() << endl;


	int(*fptr2)() = &Something::getValue;
	//getvalue는 Something의 일부이긴 하지만 특정 instance와 상관없이 실행시킬 수 있다.
	//Something::*fptr1할 필요 그래서 없음.



	cout << fptr2() << endl;







	return 0;
}