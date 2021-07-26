#include<iostream>
#include<cassert>
#include<string>
using namespace std;

class MyString
{
public:
	int m_length=0;
	char *m_data=nullptr;



	
	MyString(const char *source = "")//생성자.
	{
		assert(source);  // 문자열 인수로 꼭 받아야 함!

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
	
	MyString(const MyString &source)
	{
		m_length = source.m_length;

		if (source.m_data != nullptr)//복사 대상이 nullptr 아닐 때만 깊은 복사.
		{
			m_data = new char[m_length];
			//새로운 공간 할당.

			for (int i = 0; i < m_length; i++)
				m_data[i] = source.m_data[i];
			//for문 돌려서 복사 대상이 되는 객체의 m_data가 가리키는 내용물들 복사.
		}
		else
			m_data = nullptr;




	}


};

int main()
{
	MyString hello("hello");
	cout << (int*)hello.m_data << endl;
	cout << hello.m_data << endl;

	{
		MyString copy = hello;
		cout << (int*)copy.m_data << endl;
		cout << copy.m_data << endl;
	}


	cout << hello.m_data << endl;


}

