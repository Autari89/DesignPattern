#pragma once
#include "Builder.h"

class Director
{
private:
	Builder* builder;

public:
	void SetBuilder(Builder* builder);
	void BuildBasicHouse();
	void BuildHouseWithGarage();
	void BuildHouseWithPool();
};
