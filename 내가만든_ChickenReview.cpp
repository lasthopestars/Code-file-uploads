

#include<iostream>

using namespace std;

class ChickenReview
{

private:
	int score;
	int onscript;
	int month;
	int date;
	int m_month, m_date, m_year;

public:
	void theanswer(const int& score)
	{
		cout << "제 점수는" << "  " << score << "입니다.";
		cout << endl;
	}

	void setDate(const int& month, const int& date, const int& year)
	{
		m_month=month;
		m_date=date;
		m_year=year;
	}

	void copyOpinion(const ChickenReview& opinion)
	{
		m_month=opinion.m_month;
		m_date = opinion.m_month;
		m_year = opinion.m_year;
	}

	const void getDay()
	{
		cout<< m_date<<endl;
	}

	const void getYear()
	{
		cout << m_year << endl;
	}


};




int main(void)
{
	ChickenReview mom, uncle, me,aunt;

   mom.theanswer(55);
   uncle.theanswer(77);
   me.theanswer(99);

   mom.setDate(10, 25, 1997);
   uncle.setDate(8, 23, 1997);
   me.setDate(9,11, 2020);

   uncle.getDay();
    mom.getDay();	
	me.getDay();

	uncle.getYear();


	aunt.copyOpinion(mom);
	aunt.getDay();

	aunt.copyOpinion(me);
	aunt.getYear();
}