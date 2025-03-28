#pragma once
#ifndef HARVEST_HPP
#define HARVEST_HPP

#include <string>
#include <iostream>
#include <chrono>


class Harvest {
public:
	bool IsEdible()const;
	virtual float Nutrition() = 0;

private:
	std::string name_;
	double weight_;
	/*std::string color_;
	bool edible_;
	bool ripe_;
	bool poisonous_;
	std::string taste_;
	float rot_;*/
	// std::chrono::time_point<std::chrono::system_clock> date_;
};



#endif 