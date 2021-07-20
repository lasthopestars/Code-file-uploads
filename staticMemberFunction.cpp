#include<iostream>
using namespace std;

class Something
{
public:

	//class�ȿ� class�����
	//Something class �ȿ��� static ��� ������ �ʱ�ȭ�ϴ� ��ó�� ������ �����ϴ�!But ����������.
	class _init
	{
	public:
		_init()
		{
			s_value = 9876;
		}
	};


	//static������ �Լ� ���� �������� ����� ���α׷� ������� ����ֱ� �ٶ� �� ��.
private:
	static int s_value;
	int m_value;
	static _init s_initializer;
	//initŬ������ static���� �ϳ� �������.

public:

	Something()
		:m_value(123)
	{}



	static int getValue()
	{
		return s_value;
		//static�� this pointer�� �� ����.
		//return m_value�� m__value�� static�� �ƴϴϱ� �� ����.
		//this�� ���� ���Ѵٴ� ���� this�� ������ �ؾ� �ϴ� ��� �� �ȵȴٴ� ���̴�.
	}

	int temp()
	{
		return this->s_value;
		//this�� ����Ѵٴ� ���� Ư�� �ν��Ͻ��� �ּҸ� �޾ƴٰ�
		//�ν��Ͻ� �ּҸ� �����ٰ� ����ϴ� ��.
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
	// &s1.temp; �ȵǴ� ����->s1�� ��� variable�� Something�� �����ִ�.
	//Something�� temp��� �Լ��� �� ���� ����ְ�, �� temp��� �Լ��� ����� ��
	//s1�� �����͸� �ְ� �� �� s1�� this pointer�� �ְ� s1�� �����ִ� ������� ������ �� function �۵��� ����!
	//Something�� �����ִ� temp��� ��� function�̿���.

	cout << (s2.*fptr1)() << endl;


	int(*fptr2)() = &Something::getValue;
	//getvalue�� Something�� �Ϻ��̱� ������ Ư�� instance�� ������� �����ų �� �ִ�.
	//Something::*fptr1�� �ʿ� �׷��� ����.



	cout << fptr2() << endl;







	return 0;
}