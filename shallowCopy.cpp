#include<cassert>
#include<iostream>
using namespace std;

class MyString
{
public:
	char *m_data = nullptr;
	int m_length = 0;

	MyString(const char *source = "")
	{
		assert(source);//무낮열 인수로 꼭 받아야 한다.

		m_length = std::strlen(source) + 1;
		m_data = new char[m_length];

		for (int i = 0; i < m_length; ++i)
			m_data[i] = source[i];

		m_data[m_length - 1] = '\0';

	}

	~MyString()
	{
		delete[] m_data;
	}


};





int main()
{

	MyString hello("Hello");
	cout << (int*)hello.m_data << endl;
	cout << hello.m_data << endl;

	{
		MyString copy = hello; 
		//복사된 copy는 hello와 주소값이 같다.
		//얕은 복사는 포인터 값인 주소만 복사하여 넘겨주는 것.

		cout << (int*)copy.m_data << endl;
		cout << copy.m_data << endl;
	}

	cout << hello.m_data << endl;
	//얕은 복사의 과정으로 인해 copy 객체의 m_data 포인터와 hello 객체의
	//m_data 포인터가 동일한 동적 메모리 공간을 가리키고 있던 상태에서,
	//copy객체가 소멸되며 호출한 소멸자에서 *m_data*도 해제시켰기 때문이다. 없어져 텅 빈 공간에 접근해
	//출력하려고 하니 이상한 값이 출력
}