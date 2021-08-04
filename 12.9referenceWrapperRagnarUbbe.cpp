#include<iostream>
#include<vector>
#include<functional>

using namespace std;

class Ragnar
{

public:
	int m_ragnar = 0;

	virtual void print()
	{
		cout << "I'm King Ragnar" << endl;

	}

};


class Ubbe : public Ragnar
{
public:
	int m_ubbe = 0;

	virtual void print() override
	{
		cout << "I'm Ubbe" << endl;
	}

};


void goAbroad(Ragnar &rag)
{
	rag.print();

};

int main()
{

	Ragnar ragnar;
	Ubbe ubbe;



	std::vector<std::reference_wrapper<Ragnar>>king_vec;

	king_vec.push_back(ragnar);
	king_vec.push_back(ubbe);

	for (auto &ele : king_vec)
		ele.get().print();

	return 0;

}
