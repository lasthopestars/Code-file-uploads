
#include<iostream>
#include<string>
using namespace std;

class Something
{
public:
	string m_value = "default";


	const string& getValue() const { //const�� �ƴϳĸ� ���� �����ε��� �� �� �ִ�.
		cout << "const version " << endl;
		return m_value; 
	}
	string& getValue() { 
		cout << "non-const version" << endl;
		return m_value;
	}



	/*
	int m_value = 0;

	Something(const Something& st_in)//copy construct
	{
		m_value = st_in.m_value;

		cout << "Copy constructor" << endl;
	}

	Something()
	{
		cout << "Constructor" << endl;
	}

	//setter�� const�� �� �� ����. setValue(int value) const�� ���� �ȵȴ�.
	void setValue(int value)
	{ 
		m_value = value; 
	}

	//const�� �� �� �ִ� ������ ���� ���� ���� ����.
	int getValue()const
	{ 
		return m_value; 
	}
	*/
};


/*
//���� something�� �ּҰ� ����.const���̴� ���� ����.
void print(const Something &st)
{
	cout << &st << endl;
	cout << st.getValue() << endl;
}
*/


int main()
{

	Something something;
	something.getValue()=10;



	const Something something2;
	something2.getValue();
	



	return 0;
	/*
	//const���̸�
	//class�κ��� ������� object�� �ٲ� �� ���µ� setValue�� ���� �ٲٴϱ� �ȵ�.
	something.setValue(3);
	cout << something.getValue() << endl;
	*/


}