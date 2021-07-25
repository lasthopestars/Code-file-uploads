#include<iostream>
#include<cassert>
using namespace std;

//�̱� ��� ����ŷ�� ��Ը�Ÿ ������� �ο� ��ų�� �Ǹ������� �׳�� �̹� �������� ���� ���ƴ�. 
//��ó�� Ŭ ���� �ο�� ���������. �׳��� ���� �ο� �Ƿ� �ѷ�
//��Ը�Ÿ�� ���� �丣��. ���� ���Ŀ� ��Ը�Ÿ�� �� ���� ���·� �丣�� ����ħ.
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


//��Ը�Ÿ�� �Ƶ� ���
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

	//���� �����ڿ� ���� �丣��� ��Ը�Ÿ�� �Ƿ� ��������.


	cout << lagertha << endl;
	cout << torvi << endl;


	Lagertha son = Bjorn();
	cout << son << endl;

	//cout << &son << endl;
	//cout << son << endl;
}