#pragma once
#include "Harvest.hpp"
class Fruits : Harvest
{
public:
	Harvest ShowAvailibleHarvest();
	Fruits(std::string name_, double weight_);

	void SetHeight(int harvestCount);
	void SetCount(double harvestHeight);
	void SetName(std::string harvestName);

	int GetHeight() const;
	/*double GetHeight();*/
	std::string GetName();


private:
	std::string name_;
	double weight_;
};

