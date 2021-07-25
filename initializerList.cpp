#include<iostream>
#include<cassert>
#include<initializer_list>

using namespace std;

class IntArray
{
private:
	unsigned m_length = 0;
	int *m_data = nullptr;
	//�޸� �����Ҵ�.
	//dynamic allocation

public:
	IntArray(unsigned length)
		:m_length(length)
	{
		m_data = new int[length];
	}

	IntArray(const std::initializer_list<int> &list)
		:IntArray(list.size())
	{//initializer list�� ���� ������ ����.
		int count = 0;

		for (auto &element : list)
		{
			m_data[count] = element;
			++count;
		}

		
	}

	~IntArray()
	{
		delete[] this->m_data;
	}

	friend ostream &operator << (ostream &out, IntArray &arr)
	{
		for (unsigned i = 0; i < arr.m_length; ++i)
			out << arr.m_data[i] << " ";
		out << endl;
		return out;
	}

};

int main()
{
	int my_arr1[5] = { 1,2,3,4,5 };//���ϰ� ���� �ʱ�ȭ.
	int *my_arr2 = new int[5]{ 1,2,3,4,5 };

	auto il = { 10,20,30 };//�����ʿ� �ִ� �͵��� initializer list��.
	//initializer list��� �ڷ��� ã����.

	IntArray int_array ={ 1,2,3,4,5 };
	cout << int_array << endl;

	return 0;
}