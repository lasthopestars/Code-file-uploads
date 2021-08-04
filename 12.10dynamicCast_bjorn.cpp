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

class Bjorn : public Ragnar
{
public:
	string m_bjorn = "Bjorn";


	virtual void print() override
	{
		cout << "I'm King Bjorn" << endl;
	}
};


int main()
{


	Bjorn bjorn;
	bjorn.m_bjorn = "Bjorn Ironside";

	Ragnar *ragnar = &bjorn;

	auto *ragnar_to_bjorn = dynamic_cast<Bjorn*>(ragnar);


	if (ragnar_to_bjorn != nullptr)
		ragnar_to_bjorn->print();
	else
		cout << "Failed" << endl;

	return 0;

}