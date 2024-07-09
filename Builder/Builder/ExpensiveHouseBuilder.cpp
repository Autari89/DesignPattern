#include "ExpensiveHouseBuilder.h"

ExpensiveHouseBuilder::ExpensiveHouseBuilder()
{
	m_expensiveHouse = std::make_unique<ExpensiveHouse>();
}

void ExpensiveHouseBuilder::BuildWalls() const
{
	m_expensiveHouse->AddHouseElement("Expensive Wall");
}

void ExpensiveHouseBuilder::BuildRoof() const
{
	m_expensiveHouse->AddHouseElement("Expensive Roof");
}

void ExpensiveHouseBuilder::BuildWindows() const
{
	m_expensiveHouse->AddHouseElement("Expensive Windows");
}

void ExpensiveHouseBuilder::BuildGarage() const
{
	m_expensiveHouse->AddHouseElement("Expensive Garage");
}

void ExpensiveHouseBuilder::BuildPool() const
{
	m_expensiveHouse->AddHouseElement("Expensive Pool");
}

std::unique_ptr<ExpensiveHouse> ExpensiveHouseBuilder::GetProduct()
{
	return std::move(m_expensiveHouse);
}
