
#include<iostream>
#include<string>
using namespace std;

class Something
{
public:
	string m_value = "default";


	const string& getValue() const { //const냐 아니냐를 통해 오버로딩을 할 수 있다.
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

	//setter은 const가 될 수 없다. setValue(int value) const는 말이 안된다.
	void setValue(int value)
	{ 
		m_value = value; 
	}

	//const를 쓸 수 있는 곳에는 많이 쓰는 것이 좋다.
	int getValue()const
	{ 
		return m_value; 
	}
	*/
};


/*
//받은 something과 주소가 같다.const붙이는 것이 좋다.
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
	//const붙이면
	//class로부터 만들어진 object를 바꿀 수 없는데 setValue는 값을 바꾸니까 안됨.
	something.setValue(3);
	cout << something.getValue() << endl;
	*/


}