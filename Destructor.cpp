#include<iostream>
using namespace std;

class IntArray
{
private:
	int *m_arr = nullptr;
	int m_length = 0;

public:
	IntArray(const int length_in)
	{
		m_length = length_in;
		m_arr = new int[m_length];

		//cout << "Constructor " << endl;
	}

	~IntArray()
	{
		
		if(m_arr!=nullptr)//nullptr을 지우려 할 때도 문제가 생기기 때문이다.
		delete[] m_arr;//delete 쓰기 부담스러우면 그냥 vector를 써라.  vector 안에는 기능 다 있음.
	}

	int size() { return m_length; }
};

int main()
{
	while (true)
	{
		IntArray my_int_array(10000);
		
	}


	return 0;
}