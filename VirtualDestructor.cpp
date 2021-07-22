#include<iostream>
using namespace std;

class Base
{
public:
	virtual ~Base()//virtual ���̸� �ڽ� Ŭ���� override ���� �� �־�.
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
	//�ڽ� Ŭ���� ���� ȣ��
	//�� ������ �θ� Ŭ����
	//�Ҹ��� ȣ�� ������ ������ ȣ�� ���� �ݴ�. �����ڴ� �θ�-> �ڽ�,�Ҹ��ڴ� �ڽ�->�θ�.

	Derived *derived = new Derived(5);
	Base *base = derived;//derived�� pointer�� base�� �����Ϳ� ����ִ´�. 
	//base�� �־����� base�� ��������..derived�� �� �������� memory leak �� �߻��Ѵ�.
	//�� ��쿡�� �Ҹ��ڸ� virtual�� ���������!
	delete base;

	return 0;
}