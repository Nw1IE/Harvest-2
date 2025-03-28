#include "Harvest.hpp"

bool Harvest::IsEdible() const
{
	return false;
}

float Harvest::Nutrition()
{
	return 0.0f;
}

Harvest::Harvest(std::string name, double weight)
{
	return;
}

void Harvest::SetName(std::string name)
{
}

void Harvest::SetWeight(double weight)
{
}

std::string Harvest::GetName()
{
	return std::string();
}

double Harvest::GetWeight()
{
	return 0.0;
}

