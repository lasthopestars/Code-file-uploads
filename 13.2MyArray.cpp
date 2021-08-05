#include "MyArray.h"


//char 타입으로 compile 하라 라고 알려줘라. => explicit instantiation

template<typename T>
void MyArray<T>::print()
{
	for (int i = 0; i < m_length; ++i)
		std::cout << m_data[i] << " ";
	std::cout << std::endl;
}

template class MyArray<char>;
template class MyArray<double>;