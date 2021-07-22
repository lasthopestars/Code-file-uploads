#include<iostream>
#include<fstream>
#include<string.h>
using namespace std;


class Inbody
{
private:
	int m_age, m_height,m_weight;
public:
	Inbody(int age=0, int height=0, int weight=0)
		:m_age(age),m_height(height), m_weight(weight)
	{
		m_age = age;
		m_height = height;
		m_weight = weight;
	}

	double getAge() { return m_age; }
	double getHeight() { return m_height; }
	double getWeight() { return m_weight; }


	
	friend std::ostream& operator<<(std::ostream &out, const Inbody &inbody)
	{
		out << "(" << inbody.m_age << " ," << inbody.m_height << " ," << inbody.m_weight << ")"<<endl;

		return out;
	}

	friend std::istream& operator>> (std::istream &in, Inbody &inbody)
	{
		in >> inbody.m_age >> inbody.m_height >> inbody.m_weight;
		return in;
	}

};

int main(void)
{
	

	ofstream of("out.txt");
	Inbody Alcina;
	cout << "Put in the values of Alcina";
	cin >> Alcina;

	Inbody Heather(20, 180, 55), Eugene(24, 165, 80);


	cout << Heather << " " << Eugene;
	of << Heather << " " << Eugene;
	cout << Alcina << " ";
	of.close();
	//cout << Heather << " " << Eugene << endl;
	return 0;




	

	


}