// main.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Director.h"
#include "ExpensiveHouse.h"
#include "ExpensiveHouseBuilder.h"
#include "SimpleHouse.h"
#include "SimpleHouseBuilder.h"

void createSimpleHouse(Director& director)
{
	SimpleHouseBuilder* simpleHouseBuilder = new SimpleHouseBuilder;

	director.SetBuilder(simpleHouseBuilder);
	
	// By enabling one of these lines it is possible to build different kind of houses
	//director.BuildBasicHouse();
	//director.BuildHouseWithGarage();
	director.BuildHouseWithPool();
	std::unique_ptr< SimpleHouse> simpleHouseProduct = simpleHouseBuilder->GetProduct();
	simpleHouseProduct->ListHouseParts();

	simpleHouseBuilder = nullptr;
	delete simpleHouseBuilder;
}

void createExpensiveHouse(Director& director)
{
	ExpensiveHouseBuilder* expensiveHouseBuilder = new ExpensiveHouseBuilder;

	director.SetBuilder(expensiveHouseBuilder);

	// By enabling one of these lines it is possible to build different kind of houses
	//director.BuildBasicHouse();
	//director.BuildHouseWithGarage();
	director.BuildHouseWithPool();
	std::unique_ptr< ExpensiveHouse> expensiveHouseProduct = expensiveHouseBuilder->GetProduct();
	expensiveHouseProduct->ListHouseParts();

	expensiveHouseBuilder = nullptr;
	delete expensiveHouseBuilder;
}

int main()
{
	Director builderDirector;
	createSimpleHouse(builderDirector);
	createExpensiveHouse(builderDirector);
}
