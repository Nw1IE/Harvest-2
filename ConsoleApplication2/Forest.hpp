#pragma once
#include <vector>
#include "Tree.hpp"

class Forest
{
public:
	Harvest ShowAvailibleHarvest();
	Forest(std::string name_, double weight_);

	void SetHeight(int harvestCount);
	void SetCount(double harvestHeight);
	void SetName(std::string harvestName);

	int GetHeight() const;
	/*double GetHeight();*/
	std::string GetName();


private:
	std::string name_;
	double weight_;
	std::vector<Tree>forest;
};

