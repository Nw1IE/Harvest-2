#include "Plants.hpp"

Harvest Plants::ShowAvailibleHarvest()
{
	return Harvest();
}

Plants::Plants(int harvestCount, double harvestHeight, std::string harvestName)
{
	this->harvestCount_ = this->harvestHeight;
}

void Plants::SetHeight(int harvestCount)
{
	this->harvestCount_;
}

void Plants::SetCount(double harvestHeight)
{
	this->harvestHeight;
}

void Plants::SetName(std::string harvestName)
{
	this->harvestName_;
}

int Plants::GetHeight()
{
	return harvestHeight;
}

std::string Plants::GetName()
{
	return std::string();
}
