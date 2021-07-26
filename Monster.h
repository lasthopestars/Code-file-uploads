#pragma once

#include<string>
#include "Position2D.h"

class Monster
{
private:
	std::string m_name; //char * data, unsigned length;
	Position2D m_location;//location�� monster�� �κ��̴�.
	//int m_x;//location -> location ǥ�� x,y�� location���� ����� ��.
	//int m_y;

public:
	Monster(const std::string name_in, const Position2D & pos_in)
		: m_name(name_in), m_location(pos_in)
	{}


	void moveTo(const Position2D & pos_target)
	{
		m_location.set(pos_target);
	}

	friend std::ostream &operator<< (std::ostream & out, Monster & monster)
	{
		out << monster.m_name << " " << monster.m_location;
		return out;
	}
};