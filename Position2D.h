#pragma once
#include<iostream>


class position2d
{
private:
	int m_x;
	int m_y;


public:
	position2d(const int &x, const int & y)
		:m_x(x), m_y(y)
	{}

	void set(const position2d &target)
	{
		set(target.m_x, target.m_y);
	}


	void set(const int & x_target, const int &y_target)
	{
		m_x = x_target;
		m_y = y_target;

	}

	friend std::ostream &operator<< (std::ostream & out, const position2d &pos2d)
	{
		out << pos2d.m_x << " " << pos2d.m_y;
		return out;
	}

};