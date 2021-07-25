#include<iostream>
#include<cassert>
using namespace std;

//미국 드라마 바이킹스 라게르타 여전사는 싸움 스킬이 훌륭하지만 그녀는 이번 전투에서 많이 다쳤다. 
//상처가 클 수록 싸우기 어려워진다. 그녀의 현재 싸움 실력 총량
//라게르타의 제자 토르비. 전투 직후에 라게르타는 안 좋은 상태로 토르비를 가르침.
class Lagertha
{
private:
	int m_fightskill;
	int m_hurt;

public:
	Lagertha(int fightskill = 0, int hurt = 1)
		:m_fightskill(fightskill), m_hurt(hurt)
	{
		assert(hurt != 0);

	}

	Lagertha(const Lagertha &torvi)
		:m_fightskill(torvi.m_fightskill), m_hurt(torvi.m_hurt)
	{
		cout << "Lagertha taught Torvi" << endl;

	}

	friend std::ostream &operator<<(std::ostream & combat, const Lagertha &torvi)
	{
		cout << torvi.m_fightskill << "/ " << torvi.m_hurt << endl;
		return combat;


	}



};


//라게르타의 아들 비욘
Lagertha Bjorn()
{
	Lagertha strength(5000, 50);
	return strength;
}

int main()
{
	Lagertha lagertha(8000, 30);

	Lagertha torvi;
	torvi = Lagertha(lagertha);

	//복사 생성자에 의해 토르비는 라게르타의 실력 물려받음.


	cout << lagertha << endl;
	cout << torvi << endl;


	Lagertha son = Bjorn();
	cout << son << endl;

	//cout << &son << endl;
	//cout << son << endl;
}