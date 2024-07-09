#include "Director.h"

void Director::SetBuilder(Builder* builder) {
	this->builder = builder;
}

void Director::BuildBasicHouse() {
	this->builder->BuildWalls();
	this->builder->BuildRoof();
	this->builder->BuildWindows();
}

void Director::BuildHouseWithGarage() {
	BuildBasicHouse();
	this->builder->BuildGarage();
}

void Director::BuildHouseWithPool() {
	BuildBasicHouse();
	this->builder->BuildPool();
}
