#pragma once
#include "Builder.h"
#include "SimpleHouse.h"
#include <memory>

class SimpleHouseBuilder :
    public Builder
{
private:
	std::unique_ptr<SimpleHouse> m_simpleHouse;

public:
	SimpleHouseBuilder();
	void BuildWalls() const override;
	void BuildRoof() const override;
	void BuildWindows() const override;
	void BuildGarage() const override;
	void BuildPool() const override;
	std::unique_ptr<SimpleHouse> GetProduct();
};
