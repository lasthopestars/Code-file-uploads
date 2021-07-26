#include<iostream>
#include<cassert>
#include<string>
using namespace std;

class MyString
{
public:
	int m_length=0;
	char *m_data=nullptr;



	/*
	MyString(const char *source = "")//������.
	{
		assert(source);  // ���ڿ� �μ��� �� �޾ƾ� ��!

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

		if (source.m_data != nullptr)//���� ����� nullptr �ƴ� ���� ���� ����.
		{
			m_data = new char[m_length];
			//���ο� ���� �Ҵ�.

			for (int i = 0; i < m_length; i++)
				m_data[i] = source.m_data[i];
			//for�� ������ ���� ����� �Ǵ� ��ü�� m_data�� ����Ű�� ���빰�� ����.
		}
		else
			m_data = nullptr;




	}
	*/

	MyString& operator = (const MyString & source)
	{
		if (this == &source)//�ڱ� �ڽ��� �����ϴ� ���.
			return *this;

		delete[] m_data;   // �ڽ��� ���� ���빰 ����ֱ� 

		/* �Ʒ� ������ ��������� ���� ���� ������ ���� */

		m_length = source.m_length;

		if (source.m_data != nullptr)
		{
			m_data = new char[m_length];

			for (int i = 0; i < m_length; ++i)
				m_data[i] = source.m_data[i];
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

