#pragma once

#include <string>
#include "Harvest.hpp"
class Plants
{
public:
	Harvest ShowAvailibleHarvest();
	Plants(int harvestCount, double harvestHeight, std::string harvestName);

	void SetHeight(int harvestCount);
	void SetCount(double harvestHeight);
	void SetName(std::string harvestName);

	int GetHeight() const;
	/*double GetHeight();*/
	std::string GetName();


private:

	int harvestCount_;
	double harvestHeight;
	std::string harvestName_;
};
