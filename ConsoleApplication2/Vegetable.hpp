#pragma once
#include "Harvest.hpp"
class Vegetable : Harvest
{
public:
	Harvest ShowAvailibleHarvest();
	void Vegatable(std::string name_, double weight_);

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


