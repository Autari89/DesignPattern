#pragma once
#include "Builder.h"
#include "ExpensiveHouse.h"
#include <memory>

class ExpensiveHouseBuilder :
    public Builder
{
private:
	std::unique_ptr<ExpensiveHouse> m_expensiveHouse;

public:
	ExpensiveHouseBuilder();
	void BuildWalls() const override;
	void BuildRoof() const override;
	void BuildWindows() const override;
	void BuildGarage() const override;
	void BuildPool() const override;
	std::unique_ptr<ExpensiveHouse> GetProduct();
};

