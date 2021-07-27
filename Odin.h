#pragma once

#include<string>
#include "Position2D.h"

class Odin
{
private:
	std::string m_name;
	position2d m_location;

public:
	Odin(const std::string name_in, const position2d &pos)
		:m_name(name_in), m_location(pos)
	{}

	void moveTo(const position2d & target)
	{
		m_location.set(target);
	}

	friend std::ostream & operator<< (std::ostream & out, const Odin &odin)
	{
		out << odin.m_name << " " << odin.m_location;
		return out;
	}

};