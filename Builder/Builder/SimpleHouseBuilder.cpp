#include "SimpleHouseBuilder.h"

SimpleHouseBuilder::SimpleHouseBuilder()
{
	m_simpleHouse = std::make_unique<SimpleHouse>();
}

void SimpleHouseBuilder::BuildWalls() const 
{
	m_simpleHouse->AddHouseElement("Simple Wall");
}

void SimpleHouseBuilder::BuildRoof() const 
{
	m_simpleHouse->AddHouseElement("Simple Roof");
}

void SimpleHouseBuilder::BuildWindows() const 
{
	m_simpleHouse->AddHouseElement("Simple Windows");
}

void SimpleHouseBuilder::BuildGarage() const 
{
	m_simpleHouse->AddHouseElement("Simple Garage");
}

void SimpleHouseBuilder::BuildPool() const 
{
	m_simpleHouse->AddHouseElement("Simple Pool");
}

std::unique_ptr<SimpleHouse> SimpleHouseBuilder::GetProduct()
{
	return std::move(m_simpleHouse);
}
