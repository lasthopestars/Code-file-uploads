#include<iostream>
#include<cassert>
#include<initializer_list>

using namespace std;

class Army
{

private:
	unsigned m_numofp = 0;
	int *m_army = nullptr;

public:

	Army(unsigned numofp)
		:m_numofp(numofp)
	{
		m_army = new int[numofp];
	}


	Army(const std::initializer_list<int> &list)
		:Army(list.size())
	{

		int count = 0;

		for (auto &element : list)
		{
			m_army[count] = element;
			++count;
		}

	}


		~Army()
		{
			delete[] this->m_army;

		}




		friend ostream &operator << (ostream &out, Army &soldier)
		{
			for (unsigned i = 0; i < soldier.m_numofp; ++i)
				out << soldier.m_army[i] << " ";
			out << endl;
			return out;
		}

	};


	int main()
	{

		int vikings[7] = { 1,2,3,4,5,6 };
		int saxons[11] = { 1,2,3,4,5,6,7,8,9,10 };

		auto ivarsArmy = { 30,20,50 };

		Army greatHeathen = { 100,200,300 };
		

		cout << greatHeathen << endl;
		
		for (auto &element : ivarsArmy)
			cout << element << endl;

		return 0;

	}