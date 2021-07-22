#include<iostream>
using namespace std;

class Workout
{
private:
	int m_calorie;

public:
	Workout(int calorie = 0) { m_calorie = calorie; }

	Workout operator-() const
	{
		return Workout(-m_calorie);
	}

	bool operator!() const
	{
		//!Cents(...) //Cents가 0이면 Not이니까 true를 리턴. 프로그래밍하려는 목적에 따라 다름.
		return (m_calorie == 0) ? true : false;
	}

	void weightLoss(const Workout &a)
	{
		if (!a == true)
		{
			cout << "Same weight" << endl;
		}
		else
		{
			cout << "Congratulations! You lost weight" << endl;
		}

	}

	friend std::ostream& operator<<(std::ostream &out, const Workout &workout)
	{
		out << workout.m_calorie;
		return out;
	}

};

int main()
{
	 Workout Today1(0);
	Workout Today2(8);


	cout << -Today1 << endl;
	cout << -Today2 << endl;

    Today1.weightLoss(Today1);
	Today2.weightLoss(Today2);




}