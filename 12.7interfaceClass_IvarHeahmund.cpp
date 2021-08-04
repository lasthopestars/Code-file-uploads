#include<iostream>
#include<string>
using namespace std;

class Fighter
{
public:
	virtual bool fightWar(const char *warcry) = 0;
	virtual ~Fighter() {};
};

class Heahmund : public Fighter
{
public:
	bool fightWar(const char *warcry) override
	{
		cout <<"I am Heahmund, the warrior of God" << endl;
		return true;
	}
};

class Ivar: public Fighter
{
public:
	bool fightWar(const char *warcry) override
	{
		cout << "I am Ivar the Boneless" << endl;
		return true;
	}
};

void goToWar(Fighter &fighter)
{
	fighter.fightWar("They said");
}

int main(void)
{
	Heahmund heahmund;
	Ivar ivar;

	goToWar(heahmund);
	goToWar(ivar);

	return 0;
}
