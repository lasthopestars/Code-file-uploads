#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

class Workout
{
private:
	int m_calorie;

public:

	int getCalorie()const { return m_calorie; }
	int& getCalorie() { return m_calorie; }

	Workout(int calorie = 0) { m_calorie = calorie; }

	//the comparison operator: use the 'left-smaller' operator.
	friend bool operator<(const Workout &c1, const Workout &c2)
	{

		return c1.m_calorie < c2.m_calorie;
	}

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


	friend bool operator==(const Workout &c1, const Workout &c2)
	{
		return c1.m_calorie == c2.m_calorie;
	}

	friend std::ostream& operator<<(std::ostream &out, const Workout &workout)
	{
		out << workout.m_calorie;
		return out;
	}

};

int main()
{
	vector<Workout> arr(20);
	

	for (unsigned i = 0; i < 20; ++i)
		arr[i].getCalorie() = i;

	std::random_shuffle(begin(arr), end(arr));//the order changes.

	for (auto &cal : arr)
		cout << cal << " ";
	cout << endl;


	std::sort(begin(arr), end(arr));
	//***to use sort a comparison operator is needed;and it should be an operator that indicates that
	//the left side is smaller.

	for (auto &cal : arr)
		cout << cal << " ";
	cout << endl;

	 Workout Yesterday(0);
	Workout Today(0);

	/*if (Yesterday == Today)
		cout << "You lost the same amount of weight" << endl;
	else
		cout << "You lost a different amount of weight" << endl;

	cout << -Yesterday << endl;
	cout << -Today << endl;
	*/

    Yesterday.weightLoss(Yesterday);
	Today.weightLoss(Today);


}