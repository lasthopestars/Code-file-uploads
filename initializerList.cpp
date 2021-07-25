#include<iostream>
#include<cassert>
#include<initializer_list>

using namespace std;

class IntArray
{
private:
	unsigned m_length = 0;
	int *m_data = nullptr;
	//메모리 동적할당.
	//dynamic allocation

public:
	IntArray(unsigned length)
		:m_length(length)
	{
		m_data = new int[length];
	}

	IntArray(const std::initializer_list<int> &list)
		:IntArray(list.size())
	{//initializer list를 통한 생성자 구현.
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
	int my_arr1[5] = { 1,2,3,4,5 };//편하게 값을 초기화.
	int *my_arr2 = new int[5]{ 1,2,3,4,5 };

	auto il = { 10,20,30 };//오른쪽에 있는 것들이 initializer list다.
	//initializer list라고 자료형 찾아줌.

	IntArray int_array ={ 1,2,3,4,5 };
	cout << int_array << endl;

	return 0;
}