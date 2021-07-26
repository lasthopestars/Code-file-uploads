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
		assert(source);//������ �μ��� �� �޾ƾ� �Ѵ�.

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
		//����� copy�� hello�� �ּҰ��� ����.
		//���� ����� ������ ���� �ּҸ� �����Ͽ� �Ѱ��ִ� ��.

		cout << (int*)copy.m_data << endl;
		cout << copy.m_data << endl;
	}

	cout << hello.m_data << endl;
	//���� ������ �������� ���� copy ��ü�� m_data �����Ϳ� hello ��ü��
	//m_data �����Ͱ� ������ ���� �޸� ������ ����Ű�� �ִ� ���¿���,
	//copy��ü�� �Ҹ�Ǹ� ȣ���� �Ҹ��ڿ��� *m_data*�� �������ױ� �����̴�. ������ �� �� ������ ������
	//����Ϸ��� �ϴ� �̻��� ���� ���
}