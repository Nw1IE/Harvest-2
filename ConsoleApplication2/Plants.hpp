#pragma once

#include <string>
#include "Harvest.hpp"
class Plants
{
public:
	Harvest ShowAvailibleHarvest();

private:

	int harvestCount_;
	double harvestHeight;
	std::string harvestName_;
};
